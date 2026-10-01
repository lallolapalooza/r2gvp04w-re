/*
 * vpu_fw_verify — portable Intel VPU/NPU firmware container parser & verifier.
 *
 * From-scratch, hardware-independent reimplementation of the firmware
 * parsing core of the Intel NPU driver:
 *   - container layout / struct vpu_firmware_header:
 *       linux/drivers/accel/ivpu/vpu_boot_api.h  (GPL-2.0-only)
 *   - load-time validation rules:
 *       linux/drivers/accel/ivpu/ivpu_fw.c :: ivpu_fw_parse()  (GPL-2.0-only)
 * The same rules govern Intel's Windows package firmware
 * (FirmwareVpuGen27.bin), so this tool validates BOTH OS images.
 *
 * Container layout (little-endian):
 *   [0x0000, 0x1000)  struct vpu_firmware_header  (pack(4), 204 bytes of fields)
 *   [0x1000, 0x2000)  version block (build stamp ASCII at +0x1000)
 *   [0x2000, EOF)     firmware image payload (image_size bytes, ends at EOF)
 *
 * Checks enforced (FAIL => nonzero exit), mirroring ivpu_fw_parse():
 *   file size, header_version==1, boot_params/fw_version/runtime/image
 *   addresses inside the Meteor Lake runtime window [0x84800000, +64 MiB),
 *   fw_version_size in (0, 4096], payload fits file, page alignment,
 *   runtime_size >= image_size, entry_point inside image, SHAVE NN <= 2 MiB,
 *   BOOT (api[0]) and JSM (api[4]) API major >= 3.
 * Warn-only (as in the kernel): missing version string, preemption buffers
 * outside [4 KiB, 32 MiB].
 *
 * SPDX-License-Identifier: GPL-2.0-only
 * Independent userspace transcription of GPL kernel driver logic.
 */

#define _POSIX_C_SOURCE 200809L
#include <errno.h>
#include <inttypes.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ != __ORDER_LITTLE_ENDIAN__
#error "vpu_fw_verify assumes a little-endian host (container is little-endian)"
#endif

/* ---- constants mirrored from drivers/accel/ivpu ---- */
#define VPU_FW_HEADER_VERSION   1u
#define VPU_FW_HEADER_SIZE      4096u
#define FW_VERSION_HEADER_SIZE  4096u
#define FW_FILE_IMAGE_OFFSET    (VPU_FW_HEADER_SIZE + FW_VERSION_HEADER_SIZE) /* 8192 */
#define VPU_FW_VERSION_SIZE     32u
#define VPU_FW_API_VER_NUM      16u
#define VPU_BOOT_API_VER_INDEX  0u
#define VPU_JSM_API_VER_INDEX   4u
#define FW_SHAVE_NN_MAX_SIZE    (2u * 1024u * 1024u)
#define FW_PREEMPT_BUF_MIN_SIZE 4096u
#define FW_PREEMPT_BUF_MAX_SIZE (32u * 1024u * 1024u)
#define PAGE_SZ                  4096u
#define FW_MIN_SIZE              FW_FILE_IMAGE_OFFSET

/* Meteor Lake (37xx) device runtime window: ivpu_hw.c :: memory_ranges_init() */
#define IVPU_37XX_RUNTIME_START 0x84800000ULL
#define IVPU_37XX_RUNTIME_SIZE  (64ULL * 1024 * 1024)

#pragma pack(push, 4)
struct vpu_firmware_header {
    uint32_t header_version;                    /* +0x00 */
    uint32_t image_format;                      /* +0x04 */
    uint64_t image_load_address;                /* +0x08 */
    uint32_t image_size;                        /* +0x10 */
    uint64_t entry_point;                       /* +0x14 (unaligned: pack(4)) */
    uint8_t  vpu_version[VPU_FW_VERSION_SIZE];  /* +0x1c */
    uint32_t compression_type;                  /* +0x3c */
    uint64_t firmware_version_load_address;     /* +0x40 */
    uint32_t firmware_version_size;             /* +0x48 */
    uint64_t boot_params_load_address;          /* +0x4c */
    uint32_t api_version[VPU_FW_API_VER_NUM];   /* +0x54 */
    uint32_t runtime_size;                      /* +0x94 */
    uint32_t shave_nn_fw_size;                  /* +0x98 */
    uint32_t preemption_buffer_1_size;          /* +0x9c */
    uint32_t preemption_buffer_2_size;          /* +0xa0 */
    uint32_t preemption_buffer_1_max_size;      /* +0xa4 */
    uint32_t preemption_buffer_2_max_size;      /* +0xa8 */
    uint32_t preemption_reserved[4];            /* +0xac */
    uint64_t ro_section_start_address;          /* +0xbc */
    uint32_t ro_section_size;                   /* +0xc4 */
    uint32_t reserved;                          /* +0xc8 */
};
#pragma pack(pop)

_Static_assert(sizeof(struct vpu_firmware_header) == 204, "header size");
_Static_assert(offsetof(struct vpu_firmware_header, entry_point) == 20, "entry_point @0x14");
_Static_assert(offsetof(struct vpu_firmware_header, vpu_version) == 28, "vpu_version @0x1c");
_Static_assert(offsetof(struct vpu_firmware_header, firmware_version_load_address) == 64, "fw_ver_load @0x40");
_Static_assert(offsetof(struct vpu_firmware_header, boot_params_load_address) == 76, "boot_params @0x4c");
_Static_assert(offsetof(struct vpu_firmware_header, api_version) == 84, "api_version @0x54");
_Static_assert(offsetof(struct vpu_firmware_header, runtime_size) == 148, "runtime_size @0x94");
_Static_assert(offsetof(struct vpu_firmware_header, shave_nn_fw_size) == 152, "shave_nn @0x98");

#define OK(...)   do { printf("  [ok]   "); printf(__VA_ARGS__); putchar('\n'); } while (0)
#define FAIL(...) do { printf("  [FAIL] "); printf(__VA_ARGS__); putchar('\n'); rep->fails++; } while (0)
#define WARN(...) do { printf("  [warn] "); printf(__VA_ARGS__); putchar('\n'); rep->warns++; } while (0)
#define INFO(...) do { printf("  [info] "); printf(__VA_ARGS__); putchar('\n'); } while (0)

struct report {
    char path[512];
    size_t file_size;
    uint32_t image_size;
    uint64_t image_load;
    uint64_t entry_point;
    uint64_t runtime_size;
    char vpu_version[VPU_FW_VERSION_SIZE + 1];
    char build_stamp[192];
    uint32_t api_boot;
    uint32_t api_jsm;
    int fails;
    int warns;
    int parsed;
};

static int in_range(uint64_t addr, uint64_t size, uint64_t start, uint64_t end)
{
    uint64_t fin;
    if (addr + size < addr)
        return 0; /* overflow */
    fin = addr + size;
    return addr >= start && fin <= end;
}

static const char *base_name(const char *path)
{
    const char *s = strrchr(path, '/');
    return s ? s + 1 : path;
}

static uint8_t *load_file(const char *path, size_t *out_size)
{
    struct stat st;
    FILE *f;
    uint8_t *buf;

    if (stat(path, &st) != 0) {
        fprintf(stderr, "stat(%s): %s\n", path, strerror(errno));
        return NULL;
    }
    if (st.st_size < 0 || (uint64_t)st.st_size > (1ULL << 31)) {
        fprintf(stderr, "%s: implausible size\n", path);
        return NULL;
    }
    f = fopen(path, "rb");
    if (!f) {
        fprintf(stderr, "fopen(%s): %s\n", path, strerror(errno));
        return NULL;
    }
    buf = malloc((size_t)st.st_size ? (size_t)st.st_size : 1);
    if (!buf) {
        fclose(f);
        fprintf(stderr, "out of memory\n");
        return NULL;
    }
    if (fread(buf, 1, (size_t)st.st_size, f) != (size_t)st.st_size) {
        fprintf(stderr, "short read on %s\n", path);
        free(buf);
        fclose(f);
        return NULL;
    }
    fclose(f);
    *out_size = (size_t)st.st_size;
    return buf;
}

static void read_ascii_block(const uint8_t *src, size_t max, char *dst, size_t dstsz)
{
    size_t i, o = 0;
    for (i = 0; i < max && o + 1 < dstsz; i++) {
        uint8_t c = src[i];
        if (c < 0x20 || c > 0x7e)
            break;
        dst[o++] = (char)c;
    }
    dst[o] = '\0';
}

static void scan_elfs(const uint8_t *b, size_t n)
{
    size_t i;
    int found = 0;

    for (i = 0; i + 4 <= n; i++) {
        if (b[i] == 0x7f && b[i + 1] == 'E' && b[i + 2] == 'L' && b[i + 3] == 'F') {
            unsigned cls = (i + 5 <= n) ? b[i + 4] : 0xffu;
            uint16_t et = 0, em = 0;
            int plausible = 0;
            if (i + 20 <= n) {
                memcpy(&et, b + i + 16, sizeof(et));
                memcpy(&em, b + i + 18, sizeof(em));
            }
            /* This container's real ELFs are ELF32 LE EXEC on SPARC (LEON core). */
            plausible = (cls == 1 && em == 2 && et >= 1 && et <= 4);
            found++;
            INFO("ELF magic at 0x%zx: EI_CLASS=%u e_type=%u e_machine=%u%s",
                 i, cls, (unsigned)et, (unsigned)em,
                 plausible ? " -> plausible ELF32/SPARC firmware ELF"
                           : " -> partial ident/fragment (not a loadable ELF)");
        }
    }
    if (!found)
        INFO("no ELF magic found in container");
}

static void verify_file(const char *path, struct report *rep)
{
    size_t n = 0;
    uint8_t *buf;
    const struct vpu_firmware_header *h;
    uint64_t rt_start = IVPU_37XX_RUNTIME_START;
    uint64_t rt_end = IVPU_37XX_RUNTIME_START + IVPU_37XX_RUNTIME_SIZE;
    uint64_t runtime_size;
    uint64_t payload_end;
    uint32_t eff_pb1, eff_pb2;

    memset(rep, 0, sizeof(*rep));
    snprintf(rep->path, sizeof(rep->path), "%s", path);

    printf("=== %s ===\n", path);
    buf = load_file(path, &n);
    if (!buf) {
        rep->fails++;
        return;
    }
    rep->file_size = n;
    INFO("file size: %zu bytes", n);

    if (n <= FW_FILE_IMAGE_OFFSET) {
        FAIL("file too small: %zu <= %u (header + version block)", n, FW_FILE_IMAGE_OFFSET);
        free(buf);
        return;
    }

    h = (const struct vpu_firmware_header *)buf;
    rep->parsed = 1;
    memcpy(rep->vpu_version, h->vpu_version, VPU_FW_VERSION_SIZE);
    rep->vpu_version[VPU_FW_VERSION_SIZE] = '\0';
    rep->image_size = h->image_size;
    rep->image_load = h->image_load_address;
    rep->entry_point = h->entry_point;
    rep->runtime_size = h->runtime_size;
    rep->api_boot = h->api_version[VPU_BOOT_API_VER_INDEX];
    rep->api_jsm = h->api_version[VPU_JSM_API_VER_INDEX];
    read_ascii_block(buf + VPU_FW_HEADER_SIZE,
                     n - VPU_FW_HEADER_SIZE > 191 ? 191 : n - VPU_FW_HEADER_SIZE,
                     rep->build_stamp, sizeof(rep->build_stamp));

    printf("  --- header fields (struct vpu_firmware_header, pack(4)) ---\n");
    if (h->header_version == VPU_FW_HEADER_VERSION)
        OK("header_version = %" PRIu32 " (required %u)", h->header_version,
           VPU_FW_HEADER_VERSION);
    else
        FAIL("header_version = %" PRIu32 " (required %u)", h->header_version,
             VPU_FW_HEADER_VERSION);
    INFO("image_format = 0x%" PRIx32 ", compression_type = %" PRIu32,
         h->image_format, h->compression_type);
    INFO("image_load_address = 0x%" PRIx64 ", image_size = %" PRIu32,
         h->image_load_address, h->image_size);
    INFO("entry_point = 0x%" PRIx64, h->entry_point);
    INFO("runtime_size (hdr) = %" PRIu32 " -> usable %" PRIu64,
         h->runtime_size, (h->runtime_size > (FW_FILE_IMAGE_OFFSET))
                              ? (uint64_t)h->runtime_size - FW_FILE_IMAGE_OFFSET
                              : 0);
    INFO("vpu_version[32] = \"%.32s\"", rep->vpu_version);
    INFO("firmware_version_load_address = 0x%" PRIx64 ", size = %" PRIu32,
         h->firmware_version_load_address, h->firmware_version_size);
    INFO("boot_params_load_address = 0x%" PRIx64, h->boot_params_load_address);
    INFO("api[BOOT@0] = %" PRIu32 ".%" PRIu32 "  api[JSM@4] = %" PRIu32 ".%" PRIu32,
         h->api_version[0] >> 16, h->api_version[0] & 0xffff,
         h->api_version[4] >> 16, h->api_version[4] & 0xffff);
    INFO("shave_nn_fw_size = %" PRIu32, h->shave_nn_fw_size);
    INFO("preempt p1 size/max = %" PRIu32 "/%" PRIu32
         "  p2 size/max = %" PRIu32 "/%" PRIu32,
         h->preemption_buffer_1_size, h->preemption_buffer_1_max_size,
         h->preemption_buffer_2_size, h->preemption_buffer_2_max_size);
    INFO("ro_section_start = 0x%" PRIx64 ", ro_section_size = %" PRIu32,
         h->ro_section_start_address, h->ro_section_size);
    if (rep->build_stamp[0])
        INFO("build stamp (+0x1000): %s", rep->build_stamp);
    else
        WARN("missing build stamp / version string at offset 0x1000");

    printf("  --- load-time validation (mirrors ivpu_fw_parse) ---\n");

    /* boot params: 4 KiB must live inside the runtime window */
    if (in_range(h->boot_params_load_address, PAGE_SZ, rt_start, rt_end))
        OK("boot_params 0x%" PRIx64 " + 4K inside runtime window [0x%" PRIx64
           ", 0x%" PRIx64 ")",
           h->boot_params_load_address, rt_start, rt_end);
    else
        FAIL("boot_params 0x%" PRIx64 " + 4K outside runtime window [0x%" PRIx64
             ", 0x%" PRIx64 ")",
             h->boot_params_load_address, rt_start, rt_end);

    /* fw version block: ALIGN(size,4K) must equal exactly 4K, addr in window */
    if (h->firmware_version_size > 0 && h->firmware_version_size <= PAGE_SZ)
        OK("firmware_version_size = %" PRIu32 " (ALIGN to 4K == 4K)",
           h->firmware_version_size);
    else
        FAIL("firmware_version_size = %" PRIu32 " (need 1..%u)",
             h->firmware_version_size, PAGE_SZ);
    if (in_range(h->firmware_version_load_address, PAGE_SZ, rt_start, rt_end))
        OK("fw_version 0x%" PRIx64 " + 4K inside runtime window",
           h->firmware_version_load_address);
    else
        FAIL("fw_version 0x%" PRIx64 " + 4K outside runtime window",
             h->firmware_version_load_address);

    /* runtime window implied by header runtime_size (kernel subtracts 2 x 4K) */
    if (h->runtime_size < FW_FILE_IMAGE_OFFSET) {
        FAIL("runtime_size %" PRIu32 " smaller than 2 x 4K bookkeeping", h->runtime_size);
        runtime_size = 0;
    } else {
        runtime_size = (uint64_t)h->runtime_size - FW_FILE_IMAGE_OFFSET;
        if (in_range(h->image_load_address, runtime_size, rt_start, rt_end))
            OK("runtime [0x%" PRIx64 ", 0x%" PRIx64 ") inside device window",
               h->image_load_address, h->image_load_address + runtime_size);
        else
            FAIL("runtime [0x%" PRIx64 ", 0x%" PRIx64 ") outside device window",
                 h->image_load_address, h->image_load_address + runtime_size);
    }

    /* payload must fit the file exactly-or-before EOF */
    payload_end = (uint64_t)FW_FILE_IMAGE_OFFSET + h->image_size;
    if (payload_end <= (uint64_t)n) {
        OK("payload [0x%x, 0x%" PRIx64 ") fits file (size %" PRIu32 ")",
           FW_FILE_IMAGE_OFFSET, payload_end, h->image_size);
        if (payload_end == (uint64_t)n)
            INFO("payload ends exactly at EOF (%zu bytes)", n);
        else
            INFO("%" PRIu64 " trailing bytes after payload",
                 (uint64_t)n - payload_end);
    } else {
        FAIL("payload end 0x%" PRIx64 " exceeds file size 0x%zx", payload_end, n);
    }

    /* page alignment */
    if ((h->image_load_address & (PAGE_SZ - 1)) == 0)
        OK("image_load_address page-aligned (4K)");
    else
        FAIL("image_load_address 0x%" PRIx64 " not page-aligned",
             h->image_load_address);
    if ((runtime_size & (PAGE_SZ - 1)) == 0)
        OK("derived runtime_size %" PRIu64 " page-aligned", runtime_size);
    else
        FAIL("derived runtime_size %" PRIu64 " not page-aligned", runtime_size);
    if (runtime_size >= (uint64_t)h->image_size)
        OK("runtime_size >= image_size");
    else
        FAIL("runtime_size %" PRIu64 " < image_size %" PRIu32, runtime_size,
             h->image_size);

    /* image payload inside runtime window */
    if (in_range(h->image_load_address, h->image_size, rt_start, rt_end))
        OK("image [0x%" PRIx64 ", 0x%" PRIx64 ") inside runtime window",
           h->image_load_address, h->image_load_address + h->image_size);
    else
        FAIL("image [0x%" PRIx64 ", 0x%" PRIx64 ") outside runtime window",
             h->image_load_address, h->image_load_address + h->image_size);

    /* entry point must sit inside the image (4 KiB probe) */
    if (in_range(h->entry_point, PAGE_SZ, h->image_load_address,
                 h->image_load_address + h->image_size))
        OK("entry_point 0x%" PRIx64 " inside image", h->entry_point);
    else
        FAIL("entry_point 0x%" PRIx64 " outside image [0x%" PRIx64 ", 0x%" PRIx64 ")",
             h->entry_point, h->image_load_address,
             h->image_load_address + h->image_size);

    /* SHAVE NN payload cap */
    if (h->shave_nn_fw_size <= FW_SHAVE_NN_MAX_SIZE)
        OK("shave_nn_fw_size %" PRIu32 " <= 2 MiB", h->shave_nn_fw_size);
    else
        FAIL("shave_nn_fw_size %" PRIu32 " > 2 MiB", h->shave_nn_fw_size);

    /* API compatibility: BOOT and JSM majors must be >= 3 */
    if ((h->api_version[VPU_BOOT_API_VER_INDEX] >> 16) >= 3)
        OK("BOOT API %" PRIu32 ".%" PRIu32 " (major >= 3)",
           h->api_version[VPU_BOOT_API_VER_INDEX] >> 16,
           h->api_version[VPU_BOOT_API_VER_INDEX] & 0xffff);
    else
        FAIL("BOOT API %" PRIu32 ".%" PRIu32 " (major < 3)",
             h->api_version[VPU_BOOT_API_VER_INDEX] >> 16,
             h->api_version[VPU_BOOT_API_VER_INDEX] & 0xffff);
    if ((h->api_version[VPU_JSM_API_VER_INDEX] >> 16) >= 3)
        OK("JSM API %" PRIu32 ".%" PRIu32 " (major >= 3)",
           h->api_version[VPU_JSM_API_VER_INDEX] >> 16,
           h->api_version[VPU_JSM_API_VER_INDEX] & 0xffff);
    else
        FAIL("JSM API %" PRIu32 ".%" PRIu32 " (major < 3)",
             h->api_version[VPU_JSM_API_VER_INDEX] >> 16,
             h->api_version[VPU_JSM_API_VER_INDEX] & 0xffff);

    /* preemption buffers: warn-only, same bounds the kernel applies */
    eff_pb1 = h->preemption_buffer_1_max_size ? h->preemption_buffer_1_max_size
                                              : h->preemption_buffer_1_size;
    eff_pb2 = h->preemption_buffer_2_max_size ? h->preemption_buffer_2_max_size
                                              : h->preemption_buffer_2_size;
    if (eff_pb1 < FW_PREEMPT_BUF_MIN_SIZE || eff_pb2 < FW_PREEMPT_BUF_MIN_SIZE)
        WARN("preemption buffers too small (p1=%" PRIu32 ", p2=%" PRIu32
             ", min %u) — kernel skips preemption setup",
             eff_pb1, eff_pb2, FW_PREEMPT_BUF_MIN_SIZE);
    else if (eff_pb1 > FW_PREEMPT_BUF_MAX_SIZE || eff_pb2 > FW_PREEMPT_BUF_MAX_SIZE)
        WARN("preemption buffers too big (p1=%" PRIu32 ", p2=%" PRIu32
             ", max %u) — kernel skips preemption setup",
             eff_pb1, eff_pb2, FW_PREEMPT_BUF_MAX_SIZE);
    else
        OK("preemption buffers p1=%" PRIu32 ", p2=%" PRIu32 " in [4K, 32M]",
           eff_pb1, eff_pb2);

    printf("  --- container contents ---\n");
    scan_elfs(buf, n);

    printf("  --- result: %d FAIL, %d WARN ---\n\n", rep->fails, rep->warns);
    free(buf);
}

static void print_comparison(const struct report *reps, int n)
{
    int i;

    printf("=== comparison (%d images) ===\n", n);
    printf("%-22s", "field");
    for (i = 0; i < n; i++)
        printf(" %-26.26s", base_name(reps[i].path));
    putchar('\n');

    printf("%-22s", "file size (B)");
    for (i = 0; i < n; i++)
        printf(" %-26zu", reps[i].file_size);
    putchar('\n');
    printf("%-22s", "image_size");
    for (i = 0; i < n; i++)
        printf(" %-26" PRIu32, reps[i].image_size);
    putchar('\n');
    printf("%-22s", "image_load");
    for (i = 0; i < n; i++)
        printf(" %-26" PRIx64, reps[i].image_load);
    putchar('\n');
    printf("%-22s", "entry_point");
    for (i = 0; i < n; i++)
        printf(" %-26" PRIx64, reps[i].entry_point);
    putchar('\n');
    printf("%-22s", "runtime_size");
    for (i = 0; i < n; i++)
        printf(" %-26" PRIu64, reps[i].runtime_size);
    putchar('\n');
    printf("%-22s", "vpu_version");
    for (i = 0; i < n; i++)
        printf(" %-26.26s", reps[i].vpu_version);
    putchar('\n');
    printf("%-22s", "BOOT API");
    for (i = 0; i < n; i++)
        printf(" %-26" PRIu32, reps[i].api_boot);
    putchar('\n');
    printf("%-22s", "JSM API");
    for (i = 0; i < n; i++)
        printf(" %-26" PRIu32, reps[i].api_jsm);
    putchar('\n');
    printf("%-22s", "build stamp");
    for (i = 0; i < n; i++)
        printf(" %-26.26s", reps[i].build_stamp);
    putchar('\n');
    printf("%-22s", "verdict");
    for (i = 0; i < n; i++)
        printf(" %-26s", reps[i].fails ? "FAIL" : "PASS");
    putchar('\n');
    putchar('\n');
}

static void usage(const char *argv0)
{
    fprintf(stderr,
            "usage: %s <firmware.bin> [more.bin ...]\n"
            "  Parses and validates Intel VPU/NPU firmware containers using the\n"
            "  same rules as linux/drivers/accel/ivpu/ivpu_fw.c (MTL 37xx window).\n"
            "  Exit 0 = every image passed, 1 = at least one FAIL, 2 = usage/IO.\n",
            argv0);
}

int main(int argc, char **argv)
{
    struct report reps[8];
    int n = 0, i, total_fails = 0, total_warns = 0;

    if (argc < 2 || strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
        usage(argv[0]);
        return argc < 2 ? 2 : 0;
    }

    printf("vpu_fw_verify — portable reimplementation of the Intel VPU firmware\n"
           "container parser (linux drivers/accel/ivpu/ivpu_fw.c rules)\n\n");

    for (i = 1; i < argc && n < (int)(sizeof(reps) / sizeof(reps[0])); i++) {
        verify_file(argv[i], &reps[n]);
        n++;
    }

    if (n >= 2)
        print_comparison(reps, n);

    for (i = 0; i < n; i++) {
        total_fails += reps[i].fails;
        total_warns += reps[i].warns;
    }

    printf("=== summary: %d image(s), %d total FAIL, %d total WARN -> %s ===\n",
           n, total_fails, total_warns, total_fails ? "FAIL" : "PASS");
    return total_fails ? 1 : 0;
}
