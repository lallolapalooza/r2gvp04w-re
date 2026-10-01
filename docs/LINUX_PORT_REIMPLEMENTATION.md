# Linux Reimplementation Study — `r2gvp04w_v2.exe` (Intel NPU Driver Package)

**Question asked:** *Can the installed software from the Windows package be reimplemented for
Linux, and what is its purpose?*

**Answer in one line:** The package's purpose is to make the Intel Meteor Lake NPU
(`8086:7D1D`, "Intel® AI Boost") usable from Windows applications; **the equivalent software
already exists, in full and open source, for Linux** — upstream kernel driver
`drivers/accel/ivpu/` + userspace stack `intel/linux-npu-driver`, and both are already
installed and *running on this machine*. What did *not* exist was a from-scratch,
OS-independent reimplementation of the shared firmware-container core — that is delivered
here as `linux-reimpl/vpu_fw_verify.c`, built and verified against **both** the Windows and
the Linux firmware images.

---

## 1. Purpose of the package

The Windows package (30 files, 330,125,828 B, driver version `31.0.100.1688`, built
2023-10-31) is Intel's **NPU driver stack for Windows 10/11 on Meteor Lake**. It enables
neural-network inference on the integrated NPU through two user-facing API surfaces:

- **Direct3D 12** — `npu_d3d12_umd.dll` exposes the adapter via DXCore as
  `DXCORE_HARDWARE_TYPE_ATTRIBUTE_NPU` + D3D12 core-compute/generic-ML attributes, so
  DirectML / D3D12-generative-compute workloads can dispatch to the NPU;
- **oneAPI Level Zero** — `npu_level_zero_umd.dll` + `ze_loader` for the SYCL/OpenVINO path.

Underneath, one kernel driver (`npu_kmd.sys`, WDM/KMD, LoadOrderGroup `Video`) owns the
device: DMA buffers, MSI interrupts, MMIO, and firmware download
(`FirmwareVpuGen27File` registry value → `firmware/FirmwareVpuGen27.bin`). A driver-side
JIT compiler chain (`vpux_driver_compiler`, `npu_dml_compiler`, `npu_dxil_frontend`,
SHAVE toolchain in `MVC_DEPEND/`) lowers graphs/shaders to the NPU's instruction set
(LEON SPARC control core + 20 SHAVE DSP cores running an RTEMS firmware). The INF/WHQL
catalogs + `Silentinstall.bat` wire it into Windows PnP.

In short: **without this package the NPU is invisible on Windows; with it, it is a
first-class D3D12/Level-Zero compute accelerator.** Full analysis:
[`r2gvp04w_v2_INSTALLED_SOFTWARE_DOCUMENTATION.md`](r2gvp04w_v2_INSTALLED_SOFTWARE_DOCUMENTATION.md)
(821 lines, 30-file inventory, PE/INF/firmware deep dives).

---

## 2. Is it already implemented for Linux? — Yes, completely

Research method (per request): web search + **cloning the Linux git tree** and Intel's
userspace repo, then cross-checking against this machine's live state.

### 2.1 Kernel mode driver → `drivers/accel/ivpu/` in upstream torvalds/linux

Cloned `https://github.com/torvalds/linux.git` (shallow, blobless, sparse) at commit
`fddfc3ec31799a932bb92f1b8a84cb3d1f963be9` (2026-09-26). Directory `drivers/accel/ivpu/`:

| Evidence | Content |
|---|---|
| `Kconfig` | `config DRM_ACCEL_IVPU` — "Intel NPU (Neural Processing Unit)… Meteor Lake or newer"; module name **`intel_vpu`** |
| `Makefile` | 17 objects: `ivpu_drv, ivpu_fw, ivpu_fw_log, ivpu_gem, ivpu_gem_userptr, ivpu_hw, ivpu_hw_btrs, ivpu_hw_ip, ivpu_ipc, ivpu_job, ivpu_jsm_msg, ivpu_mmu, ivpu_mmu_context, ivpu_ms, ivpu_pm, ivpu_sysfs, ivpu_trace_points` (+debugfs/coredump) |
| `vpu_boot_api.h` / `vpu_jsm_api.h` | Firmware boot ABI (`struct vpu_firmware_header`, pack(4)) and job-scheduler API — same container the Windows KMD consumes |
| `ivpu_fw.c` | `request_firmware("intel/vpu/vpu_37xx_v1.bin" …)` + full load-time validation (`ivpu_fw_parse`) |
| uapi `include/uapi/drm/ivpu_accel.h` | **14 ioctls**: `DRM_IOCTL_IVPU_{GET_PARAM,SET_PARAM,BO_CREATE,BO_INFO,SUBMIT,BO_WAIT,METRIC_STREAMER_*,CMDQ_CREATE,CMDQ_DESTROY,CMDQ_SUBMIT,BO_CREATE_FROM_USERPTR}` |
| `MAINTAINERS` | Entry with `F: drivers/accel/ivpu/`, `F: include/uapi/drm/ivpu_accel.h`, `S: Supported`, dri-devel@lists.freedesktop.org |
| `ivpu_hw.c :: memory_ranges_init()` | 37xx runtime window **`[0x84800000, +64 MiB)`** — the same window both firmware images load into |

This is **not** a driver *port* — it is the production driver, GPL-2.0-only, maintained in
the mainline kernel, feature-equivalent to (and in maintenance terms ahead of) the Windows
`npu_kmd.sys` from 2023: job submission, MMU, preemption, IPC, coredump, metrics, PM/DVFS.

**Live on this machine:**

```
kernel:   7.0.0-34-generic (modinfo: version "1.0.0 7.0.0-34-generic", intree=Y)
module:   /lib/modules/7.0.0-34-generic/kernel/drivers/accel/ivpu/intel_vpu.ko.zst
aliases:  pci:v00008086d00007D1D…, pci:v00008086d0000AD1D…  (matches Windows INF IDs)
device:   00:0b.0 Processing accelerators [1200]: Intel Corporation Meteor Lake NPU [8086:7d1d]
          Subsystem Lenovo [17AA:50E1]   Kernel driver in use: intel_vpu
node:     /dev/accel/accel0  (crw-rw---- root:render — this user is in `render`)
sysfs:    /sys/class/accel/accel0 → DRIVER=intel_vpu, PCI_ID=8086:7D1D
firmware: /lib/firmware/intel/vpu/vpu_37xx_v1.bin.zst  (decompressed 2,434,260 B,
          sha256 db4775de4c8c…; MODULE_FIRMWARE vpu_{37xx,40xx,50xx,60xx}_v1.bin)
```

### 2.2 User mode stack → `github.com/intel/linux-npu-driver`

Cloned at npu-1.38.0 release snapshot (commits `aea583d`/`e111144`, 2026-09-10):

| Repo area | Role | Windows counterpart in the package |
|---|---|---|
| `umd/level_zero_driver/` → **`libze_intel_npu.so`** | Level Zero UMD (46× proc-addr table equivalent) | `npu_level_zero_umd.dll` |
| `umd/vpu_driver/` | low-level VPU device layer under the L0 driver | (folded into UMD) |
| `compiler/` → **`libopenvino_intel_npu_compiler.so`** | builds from `openvinotoolkit/openvino` + `openvinotoolkit/npu_compiler` (`compiler_source.cmake`), i.e. the VPUX compiler-in-driver | `vpux_driver_compiler.dll` (79.6 MB) |
| `firmware/bin/` | `vpu_37xx_v1.bin` (2,436,308 B), `vpu_40xx_v1.bin`, `vpu_50xx_v1.bin` + `v0.0`/`mtl_vpu` symlinks, `COPYRIGHT` | `firmware/FirmwareVpuGen27.bin` |
| `tools/intel-npu-smi/` | device management CLI | (no Windows equivalent in this package) |
| `linux/include/uapi/drm/` | ships/uses the DRM accel uapi | INF/ioctl contract equivalent |
| `docs/overview.md` | official stack diagram + build instructions | — |

**Installed on this machine** (from that project's release page debs):

```
ii intel-level-zero-npu    1.38.0.20260910-34487311128~ubuntu26.04   → libze_intel_npu.so.1.38.0
ii intel-driver-compiler-npu 1.38.0.20260910-34487311128~ubuntu26.04 → libopenvino_intel_npu_compiler{,_loader}.so
ii intel-fw-npu            1.38.0.20260910-34487311128~ubuntu26.04   → /lib/firmware/intel/vpu/*.bin
ii libze1                  1.32.0-1~26.04~ppa1                       → libze_loader / tracing / validation layers
```

`docs/overview.md` states the package trio explicitly (`intel-fw-npu`, `intel-level-zero-npu`,
`intel-driver-compiler-npu`), documents building the driver and (optionally) the
compiler-in-driver, and `ls /dev/accel/accel0` is its own "is the device available" check —
which passes here.

### 2.3 Who provides the JIT compiler chain and SHAVE toolchain on Linux

**Intel does — but only one of them is software you can actually run here.** The JIT compiler
chain ships as the deb; the SHAVE *tools* are absent from Linux (their prebuilt outputs are
embedded in the compiler `.so` instead). Verified directly against the installed binaries:

| Piece | Linux artifact | Provider | Evidence |
|---|---|---|---|
| JIT compiler chain (VPUX compiler-in-driver) | `libopenvino_intel_npu_compiler.so` + `libopenvino_intel_npu_compiler_loader.so` | **Intel Corporation** — deb `intel-driver-compiler-npu` 1.38.0.20260910, source `github.com/intel/linux-npu-driver` `compiler/` (build paths baked into the binary: `drivers.vpu.linux.client/.../vpux_driver_compiler/src/vpux_compiler_l0/vcl_bridge.cpp`) | `apt-cache show` Maintainer: Intel Corporation; `dpkg -L` → the two `.so`s |
| SHAVE machine-code emission (`moviCompile`/`moviAsm`/`moviLLD`) | **not shipped on Linux, and no machine-code backend compiled into the `.so` either.** The `.so` only (a) contains *exec* code that shells out to `$MV_TOOLS_DIR/$MV_TOOLS_VERSION/linux64/bin/{moviCompile,moviAsm,sparc-myriad-rtems-6.3.0/bin/sparc-myriad-rtems-ld}` and (b) embeds **~796 prebuilt SHAVE activation kernel ELFs** (their `.comment` sections carry `Linker: Movidius Linker (moviLLD) v5.0.0 / based on LLD 19.1.7` — every one of the 792 banner occurrences lies *inside* an embedded ELF; none in `.so` code) | **Intel** (proprietary MoviTools; Windows ships them as `MVC_DEPEND/bin/*.dll`) | strings in installed `.so`: `Error: Environment variable 'MV_TOOLS_DIR' or 'MV_TOOLS_VERSION' is not set.`, `linux64/bin/moviCompile`, `linux64/bin/moviAsm`, `sparc-myriad-rtems-6.3.0/bin/sparc-myriad-rtems-ld`, `sw_layer.ll`, `Could not read compiled SHAVE ELF file`; dynamic imports `fork`/`posix_spawn`/`execve`; SHAVE backend markers (`SHAVEISD::CALL`, `SHAVE Assembly Printer`, `moviCompile -cc1`, all 344 sampled `moviAsm64.dll` strings) = **0 hits** → backend absent; no `movi*` binaries anywhere under `/` (only the Windows DLLs in our extracted package), `MV_TOOLS_DIR` unset |
| SHAVE **runtime** (code executing on the 20 SHAVE cores) | `/lib/firmware/updates/intel/vpu/vpu_{37,40,50}xx_v1.bin` | **Intel** — deb `intel-fw-npu` 1.38.0 | `dpkg -L intel-fw-npu` |

**Load chain (no OpenVINO package required):** `libze_intel_npu.so` (Level Zero UMD) `dlopen`s
`libopenvino_intel_npu_compiler_loader.so` → loads the real compiler on demand
(loader contains the `dlopen` + `libopenvino_intel_npu_compiler_l…` soname strings;
the UMD carries `ZE_INTEL_NPU_COMPILER_LOGLEVEL`). OpenVINO itself is *not* installed here
(`dpkg -l | grep openvino` → none) and the graph extension still compiles — the compiler is
self-contained (TBB/zstd/zlib are its only external deps).

**Windows vs Linux packaging difference:** Windows ships the SHAVE toolchain as standalone
DLLs/EXEs (`moviCompile64.dll` 65 MB, `moviAsm64.dll`, `moviLLD64.dll`, `MVC_DEPEND/{bin,lib}` —
used by both the VPUX compiler and the DirectML/DXIL paths). Linux ships **neither those tools
nor any in-process copy of them**: standard activation ops run from SHAVE ELFs that were
compiled with MoviTools *at Intel build time* and embedded as raw blobs in
`libopenvino_intel_npu_compiler.so`; a SHAVE kernel that is not in the prebuilt set goes through
the exec pipeline below, which needs MoviTools installed at `$MV_TOOLS_DIR` — unset on this
machine and not shipped by any deb, so that path fails with `Error: Environment variable
'MV_TOOLS_DIR' or 'MV_TOOLS_VERSION' is not set.`

**Consumers of the compiler on Linux:** the Level Zero graph extension (active on this machine)
and the OpenVINO NPU plugin (`libopenvino_intel_npu_npu_plugin.so`) if/when OpenVINO is installed.

#### Runtime emission pipeline (how a SHAVE ELF is actually produced)

Verified by reading the open-source driver code `src/vpux_compiler/src/utils/llvm_to_binary.cpp`
(pinned rev `0b38f7d4`) and matching every literal against the installed `.so`:

1. Open MLIR `ShaveCodeGen` lowers the fused op chain to the LLVM dialect;
   `translateToLLVMIR()` emits LLVM IR (`sw_layer.ll`) in a temp dir. ✅ open source
2. Exec proprietary `$MV_TOOLS_DIR/$MV_TOOLS_VERSION/linux64/bin/moviCompile -mcpu=<arch> -S -O3
   -mshave-preemption-checks=restore …` → `sw_layer.s` (SHAVE assembly). ❌ binary-only
3. Exec proprietary `moviAsm <arch> --cv --noSPrefixing` → `sw_layer.o`. ❌ binary-only
4. Exec proprietary `sparc-myriad-rtems-6.3.0/bin/sparc-myriad-rtems-ld` with the open linker
   script `sw_runtime_kernels/kernels/prebuild/shave_kernel.ld` + `mlibm.a/mlibcrt.a/mlibc*.a`
   → `a.out` SHAVE ELF. ❌ binary-only (linker); ✅ script/libs sources open
5. The ELF is read back into `ShaveBinaryResources` and embedded in the compiled blob.

For the standard activation set none of this runs: `act_shave_bin/*.elf` are prebuilt (committed
via Git LFS in the open repo) and embedded directly in the `.so`. **Verdict: the orchestration is
open source; the actual IR→SHAVE-instruction emitter is proprietary and not present on this
Linux system.**

#### Source availability: what is open vs proprietary

Verified by cloning the pinned trees (`openvinotoolkit/npu_compiler` @ `0b38f7d4`, tag
`npu_ud_2026_38_rc1` — the exact revision `compiler_source.cmake` fetches; `intel-staging/npu-compiler-llvm` @ `npu/main`):

| Piece | Source? | Where |
|---|---|---|
| MLIR SHAVE codegen (`src/ShaveCodeGen/`, incl. `adapt_llvm_funcs_for_shave.cpp` = the `AdaptLLVMFuncsForShave` string in our `.so`; `Shave` dialect; 987 shave/movi paths) | ✅ **Open** Apache-2.0 | `github.com/openvinotoolkit/npu_compiler` |
| SHAVE **kernel sources** + committed prebuilt ELFs (`sw_runtime_kernels/kernels/prebuild/act_shave_bin/*.elf`) | ✅ **Open** Apache-2.0 | same repo |
| LLVM fork used for IR (no SHAVE machine backend in `llvm/lib/Target`) | ✅ **Open** Apache-2.0 + LLVM exceptions | `github.com/intel-staging/npu-compiler-llvm` (submodule `thirdparty/llvm-project`) |
| **`moviCompile`/`moviLLD`/`moviAsm` ("MoviTools")** — C/asm → SHAVE machine code | ❌ **Proprietary binaries only** — grep.app: 0 public hits for `moviLLD`; no source repo anywhere | **(a)** auto-downloaded prebuilt from Intel Artifactory by `sw_runtime_kernels/kernels/cmake/mv_tools.cmake` (`ENABLE_SHAVE_BINARIES_BUILD`, `IE_NPU_FORCE_MV_TOOLS_PATH`); **(b)** Windows `MVC_DEPEND/` in driver packages — `github.com/hsfzxjy/npunlock` LICENSE: *"MoviTools and the Intel/Movidius libraries are external proprietary dependencies"*, README tells users to extract it from Lenovo package **31.0.100.1688 = this exact `r2gvp04w_v2.exe`**; **(c)** the shipped *link inputs* only — the `.so` holds path templates (`/mlibc.a`, `/mlibcrt.a`, `/mlibc_lgpl.a`, `/mlibm.a`) but zero `!<arch>` archive blobs and zero `.a` files on disk, so the tools/archives themselves are **absent** from this system |

Consequence: the graph-side SHAVE compiler, the kernel sources, the linker script and the
mlibc/libm *sources* are readable and rebuildable from GitHub, but the tool that actually turns
a `.cpp` into a SHAVE `.elf` — `moviCompile`/`moviAsm`/`sparc-myriad-rtems-ld` — is a
binary-only vendor tool that is not on this Linux box (as with the old `movidius/ncsdk`:
*"Non open source components may be downloaded during the installation"*). Compiling a *new*
SHAVE kernel on Linux therefore requires Intel's MoviTools at `$MV_TOOLS_DIR`; running the
standard activation set does not, because those ELFs ship prebuilt inside the `.so`.

### 2.4 Verdict per layer

| Layer | Windows package | Linux status |
|---|---|---|
| Kernel driver | `npu_kmd.sys` (536 KB, WHQL) | ✅ **Upstream, in-tree, running here** (`intel_vpu`, `drivers/accel/ivpu/`) |
| Level Zero UMD | `npu_level_zero_umd.dll` | ✅ **Installed** (`libze_intel_npu.so.1.38.0`) |
| Level Zero loader/layers | `ze_loader/tracing/validation.dll` (L0 1.15.0) | ✅ **Installed** (`libze1` 1.32.0 + tracing/validation) |
| Compiler-in-driver | `vpux_driver_compiler.dll` (79.6 MB) | ✅ **Installed** (`libopenvino_intel_npu_compiler.so`, open source via `openvinotoolkit/npu_compiler`) |
| Firmware | `FirmwareVpuGen27.bin` | ✅ **Installed** (`intel/vpu/vpu_37xx_v1.bin`, same container format — §4) |
| D3D12 UMD | `npu_d3d12_umd.dll` + `npu_dxil_frontend.dll` + `shavedxilvecz64.dll` | ⛔ **Not applicable** — D3D12/DXCore/DXIL are Windows-only APIs; the *function* (graph/shader execution) is covered by the Level Zero + OpenVINO path, which is Linux's native API for this device |
| DirectML metacommand compiler | `npu_dml_compiler.dll` (109 MB) | ⛔ **Not applicable** — DirectML is Windows-only; replaced by OpenVINO's NPU plugin |
| SHAVE offline toolchain | `MVC_DEPEND/{bin,lib}` movi* + `.a` (107 MB) | ⚠️ **Neither shipped nor present in-process on Linux** — no `movi*` binaries, no `!<arch>` archives, `MV_TOOLS_DIR` unset; only the prebuilt outputs ship: ~796 activation SHAVE ELFs embedded in `libopenvino_intel_npu_compiler.so` (moviLLD v5.0.0 banners inside them) + exec strings for the external pipeline (§2.3) |
| TBB runtime | `tbb12.dll`, `tbbmalloc.dll` | ✅ distro `libtbb12` |
| Installer/INF/WHQL | `Silentinstall.bat`, `ivd64.inf/.cat`, `ivdextn64.inf/.cat` | ✅ apt/deb packages + kernel `modalias` autoload + `/dev/accel/accel0` node (no INF concept in Linux) |
| Device telemetry | ETW channels `Intel-NPU-{Kmd,Umd}` | ✅ debugfs + `/sys/class/accel/accel0` + intel-npu-smi |

**Conclusion:** there is nothing left to "port" for the driver stack — Linux's
implementation is the reference open implementation. What follows is (a) the precise
file-by-file mapping of all 30 Windows files, and (b) the one genuinely missing artifact we
reimplemented from scratch: an OS-independent parser/verifier of the shared firmware
container.

---

## 3. Component-by-component mapping (all 30 files)

Paths are relative to `extracted/code$GetExtractPath$/` (sizes/SHA256 in
[§3 of the installed-software doc](r2gvp04w_v2_INSTALLED_SOFTWARE_DOCUMENTATION.md)).

| # | Windows file | Purpose (Windows) | Linux equivalent | Status |
|---|---|---|---|---|
| 1 | `Silentinstall.bat` (697 B) | Silent dpkg-like install driver via `pnputil` | `apt install intel-level-zero-npu intel-driver-compiler-npu intel-fw-npu` (or upstream in-tree kernel module, zero install) | ✅ replaced by packaging |
| 2 | `Driver/ivd64.inf` (11,694 B) | PnP identity, per-OS models, service `npu`, registry | PCI `modalias` → `intel_vpu` autoload; `Kconfig DRM_ACCEL_IVPU`; sysfs | ✅ replaced |
| 3 | `Driver/ivd64.cat` (22,095 B) | WHQL catalog, 26 hashes | Kernel/distro package signing; in-tree module signed by distro key | ✅ replaced |
| 4 | `Driver/ivdextn64.inf` (2,684 B) | Extension INF: DXCore attributes, `LevelZeroDriverPath` | N/A — no DXCore; L0 loader discovers drivers via `/usr/lib*/libze_intel_npu.so` + `ZE_ENABLE_EXTENSION_IMPL` conventions | ✅ not needed |
| 5 | `Driver/ivdextn64.cat` (11,280 B) | WHQL for extension INF | ditto | ✅ not needed |
| 6 | `Driver/npu_kmd.sys` (536,328 B) | Kernel driver: DMA, MSI, MMIO, FW download | **`drivers/accel/ivpu/`** → `intel_vpu.ko` (17 objs, uapi 14 ioctls) | ✅ **upstream, running** |
| 7 | `Driver/npu_d3d12_umd.dll` (2,233,096 B) | D3D12 UMD (`OpenAdapter12`), DXCore adapter | — (D3D12 is Windows-only; API surface replaced by Level Zero) | ⛔ not applicable, function covered by L0 path |
| 8 | `Driver/npu_level_zero_umd.dll` (1,227,016 B) | Level Zero UMD | **`libze_intel_npu.so.1.38.0`** ← `umd/level_zero_driver/` in intel/linux-npu-driver | ✅ installed |
| 9 | `Driver/npu_blob_parser.dll` (1,297,672 B) | `bpParser*` tensor-blob parsing for the D3D12/DML path | — (no `bpParser` symbols in the Linux repo; equivalent blob/graph ingestion lives inside the OpenVINO NPU compiler) | ⛔ Windows-path-specific |
| 10 | `Driver/npu_dml_compiler.dll` (108,934,920 B) | DirectML metacommand composer | — (DirectML is Windows-only; OpenVINO NPU plugin is the Linux workload entry point) | ⛔ not applicable |
| 11 | `Driver/npu_dxil_frontend.dll` (7,057,672 B) | `OpenCompiler12` DXIL → NPU compiler frontend | — (DXIL is a Windows shader IR) | ⛔ not applicable |
| 12 | `Driver/vpux_driver_compiler.dll` (79,593,736 B) | VPUX compiler-in-driver (`CreatePluginEngineNPU`) | **`libopenvino_intel_npu_compiler.so`** built from `openvinotoolkit/{openvino,npu_compiler}` | ✅ installed |
| 13 | `Driver/shavedxilvecz64.dll` (18,459,912 B) | DXIL vectorizer pass | — (DXIL-only pass) | ⛔ not applicable |
| 14 | `Driver/tbb12.dll` (337,160 B) | oneTBB 2021.2 runtime for compiler | distro `libtbb12` | ✅ replaced by distro |
| 15 | `Driver/tbbmalloc.dll` (249,096 B) | oneTBB scalable malloc | distro `libtbbmalloc2` | ✅ replaced by distro |
| 16 | `Driver/ze_loader.dll` (469,256 B) | Level Zero loader 1.15.0 | `libze_loader.so.1` (`libze1` 1.32.0) | ✅ installed |
| 17 | `Driver/ze_tracing_layer.dll` (508,168 B) | L0 tracing layer | `libze_tracing_layer.so.1` | ✅ installed |
| 18 | `Driver/ze_validation_layer.dll` (304,904 B) | L0 validation layer | `libze_validation_layer.so.1` | ✅ installed |
| 19 | `Driver/firmware/FirmwareVpuGen27.bin` (1,917,644 B) | NPU RTEMS/LEON firmware (MTL PV2, 2023-10-31) | `/lib/firmware/intel/vpu/vpu_37xx_v1.bin` (2,434,260 B, 2026-02-19) — **same container format**, §4 | ✅ installed, newer build |
| 20 | `Driver/third-party-programs.txt` (193,266 B) | Third-party license inventory | repo `LICENSE.md` / `third-party-programs.txt` (intel/linux-npu-driver ships the same file name) | ✅ replaced |
| 21 | `MVC_DEPEND/bin/moviAsm64.dll` (7,488,264 B) | Movidius SHAVE assembler | exec'd as `$MV_TOOLS_DIR/…/linux64/bin/moviAsm` in the non-prebuilt kernel pipeline (§2.3); **not present on this system** | ⚠️ absent (prop. tool; outputs embedded) |
| 22 | `MVC_DEPEND/bin/moviCompile64.dll` (65,488,136 B) | SHAVE C compiler | exec'd as `$MV_TOOLS_DIR/…/linux64/bin/moviCompile` (§2.3); **not present on this system** | ⚠️ same |
| 23 | `MVC_DEPEND/bin/moviLLD64.dll` (27,904,776 B) | SHAVE LLVM linker | exec'd as `$MV_TOOLS_DIR/…/sparc-myriad-rtems-6.3.0/bin/sparc-myriad-rtems-ld` (§2.3); **not present on this system** | ⚠️ same |
| 24 | `MVC_DEPEND/lib/mlibc_lite.a` (294,828 B) | SHAVE target libc | link input for the moviLLD step — the `.so` has only path templates (`/mlibc.a`, `/mlibcrt.a`, `/mlibc_lgpl.a`, `/mlibm.a`); no `!<arch>` blobs in the `.so`, no `.a` files on disk | ⚠️ absent (outputs embedded) |
| 25 | `MVC_DEPEND/lib/mlibc_lite_ext.a` (59,322 B) | SHAVE libc extension | same | ⚠️ same |
| 26 | `MVC_DEPEND/lib/mlibcrt.a` (281,228 B) | SHAVE CRT | same | ⚠️ same |
| 27 | `MVC_DEPEND/lib/mlibcrt_mini.a` (8,500 B) | SHAVE mini CRT | same | ⚠️ same |
| 28 | `MVC_DEPEND/lib/mlibcxx.a` (4,306,742 B) | SHAVE libc++ | same | ⚠️ same |
| 29 | `MVC_DEPEND/lib/mlibm.a` (922,244 B) | SHAVE math lib | same | ⚠️ same |
| 30 | `MVC_DEPEND/lib/mlibVecUtils.a` (3,492 B) | SHAVE vector utils | same | ⚠️ same |

**Score: 11 files have a direct installed/upstream Linux equivalent; 10 MoviTools files
(rows 21–30) provide only their build-time *outputs* — prebuilt SHAVE ELFs embedded in the
compiler `.so` — while the tools/archives themselves are proprietary and absent from Linux
runtime installs; 5 are Windows-only API surfaces (D3D12/DXIL/DirectML/blob-parser) whose
*function* is covered by the Linux Level Zero + OpenVINO path; 4 installer/meta files are
replaced by distro packaging.
0 files require reimplementation to use this NPU on Linux today.**

---

## 4. The from-scratch reimplementation: `linux-reimpl/vpu_fw_verify`

The one artifact of the package that is **OS-independent, hardware-independent, and
absent as a standalone tool on either platform** is the firmware-container parser/validator
(both KMDs embed it; on Windows it's buried in `npu_kmd.sys`, on Linux in `ivpu_fw.c`).
We reimplemented it from first principles — reading the ABI header and the kernel's
load-time validation, then writing an independent, portable C11 tool:

| Artifact | Detail |
|---|---|
| Source | [`../linux-reimpl/vpu_fw_verify.c`](../linux-reimpl/vpu_fw_verify.c) (~470 lines, single file, no deps) |
| Build | [`../linux-reimpl/Makefile`](../linux-reimpl/Makefile) — `gcc -std=c11 -O2 -Wall -Wextra -Werror`, **clean build, exit 0** |
| Reference | `drivers/accel/ivpu/vpu_boot_api.h` (`struct vpu_firmware_header`, `#pragma pack(push,4)`, 204-byte header) + `ivpu_fw.c :: ivpu_fw_parse()` + `ivpu_hw.c :: memory_ranges_init()` |
| Container layout | `[0x0000,0x1000)` header · `[0x1000,0x2000)` version/build-stamp block · `[0x2000,EOF)` payload (`image_size` bytes, ends exactly at EOF) |

Implemented checks (mirror `ivpu_fw_parse` 1:1):

1. file size > 8192 (`FW_FILE_IMAGE_OFFSET = VPU_FW_HEADER_SIZE(4096) + FW_VERSION_HEADER_SIZE(4096)`)
2. `header_version == 1`
3. `boot_params_load_address + 4K` inside MTL runtime window `[0x84800000, 0x88800000)`
4. `0 < firmware_version_size ≤ 4096` (so `ALIGN(x,4K) == 4K`) and its address in-window
5. derived `runtime_size = hdr.runtime_size − 8K`: in-window, page-aligned, `≥ image_size`
6. `0x2000 + image_size ≤ file size` (warns about trailing bytes)
7. `image_load_address` page-aligned; payload inside runtime window
8. `entry_point + 4K` inside `[image_load, image_load+image_size)`
9. `shave_nn_fw_size ≤ 2 MiB`
10. BOOT (`api[0]`) and JSM (`api[4]`) API **major ≥ 3** (indexes from `vpu_boot_api.h`/`vpu_jsm_api.h`)
11. preemption buffers in `[4K, 32M]` — **warn-only**, exactly as the kernel
12. scans the container for ELF magics and classifies real ELF32/SPARC (LEON) ELFs vs fragments

### Run evidence (this machine, exit code 0)

```text
$ make
cc -std=c11 -O2 -Wall -Wextra -Werror -o vpu_fw_verify vpu_fw_verify.c     # exit 0

$ ./vpu_fw_verify  FirmwareVpuGen27.bin  /lib-firmware/vpu_37xx_v1.bin  repo/vpu_37xx_v1.bin
```

| field | `FirmwareVpuGen27.bin` (Windows pkg) | `/lib/firmware/…/vpu_37xx_v1.bin` (this machine) | `intel/linux-npu-driver` repo fw |
|---|---|---|---|
| file size (B) | 1,917,644 | 2,434,260 | 2,436,308 |
| image_size | 1,909,452 | 2,426,068 | 2,428,116 |
| image_load | `0x84802000` | `0x84802000` | `0x84802000` |
| entry_point | `0x84803000` | `0x84803000` | `0x84803000` |
| runtime_size | 67,108,864 | 67,108,864 | 67,108,864 |
| vpu_version | `0.0.0` | `0.0.0` | `0.0.0` |
| BOOT API | 3.17 | 3.30 | 3.37 |
| JSM API | 3.15 | 3.34 | 3.41 |
| build stamp | `20231031*MTL_CLIENT_SILICON-release*2101*ci_tag_mtl_pv2_vpu_rc_20231031_2101*cb0b783368d` | `20260219*MTL_CLIENT_SILICON-NVR+NN-deployment*f693e2c0…` | `20260820*MTL_CLIENT_SILICON…` |
| payload @ `0x22000` / `0x32000` | ELF32/SPARC ×2 (+2 fragments) | ELF32/SPARC ×2 | ELF32/SPARC ×2 |
| **verdict** | **PASS** (0 FAIL, 0 WARN) | **PASS** (0 FAIL, 0 WARN) | **PASS** (0 FAIL, 0 WARN) |

```text
=== summary: 3 image(s), 0 total FAIL, 0 total WARN -> PASS ===
EXIT=0
```

**This proves three things:**

1. The Windows package's firmware and the Linux firmware are the **same container format**
   (identical load map `0x84802000`/`0x84803000`, identical 64 MiB runtime window, same
   version string convention, same LEON ELF payload layout) — i.e. the two OS drivers are
   drop-in equivalent at the firmware ABI level.
2. The Linux firmware is a **newer, actively maintained build** (2026-02-19 vs 2023-10-31;
   BOOT/JSM API 3.30/3.34 vs 3.17/3.15) — the Windows package in `r2gvp04w_v2.exe` is the
   frozen 2023 drop, Linux moves with `intel-fw-npu` releases.
3. Our from-scratch parser accepts all three under the *kernel's exact rules* — the
   hardware-independent core is genuinely reimplemented and verified on this machine, with
   no kernel headers, no Windows code, and no original sources copied.

---

## 5. Scope justification

Full reimplementation of the 315 MB proprietary Windows stack (`npu_dml_compiler` 109 MB,
`vpux_driver_compiler` 79.6 MB, `MVC_DEPEND` 107 MB…) was **explicitly out of scope** and
would be anti-productive:

- The hardware-independent core that those DLLs implement already exists as open source
  (`openvinotoolkit/openvino` + `openvinotoolkit/npu_compiler`, MIT/Apache-2.0) and is
  packaged as `intel-driver-compiler-npu` — installed here.
- The Windows-only API surfaces (D3D12/DXIL/DirectML) have no Linux consumer; porting them
  would produce dead code.
- The kernel driver — the actual "device enablement" component — is in upstream Linux,
  GPL-2.0, `S: Supported`, and already bound to this machine's NPU.

The deliverable of value is therefore: **mapping (§3) + evidence that the stack is complete
(§2) + an independent, verifiable implementation of the shared firmware-container core
(§4)**.

---

## 6. How to reproduce

```bash
# 1. kernel driver sources (sparse)
git clone --depth 1 --filter=blob:none --sparse https://github.com/torvalds/linux.git linux
git -C linux sparse-checkout set drivers/accel/ivpu
ls linux/drivers/accel/ivpu/            # Kconfig, Makefile, ivpu_*.c, vpu_*_api.h

# 2. userspace stack
git clone --depth 50 https://github.com/intel/linux-npu-driver.git

# 3. live device state
lsmod | grep intel_vpu; ls -l /dev/accel/accel0
readlink -f /sys/class/accel/accel0/device/driver
dpkg -l | grep -E 'intel-(level-zero|driver-compiler|fw)-npu'

# 4. our tool
cd linux-reimpl && make && ./vpu_fw_verify \
  "../extracted/code\$GetExtractPath\$/Driver/firmware/FirmwareVpuGen27.bin" \
  /tmp/opencode/vpu_37xx_v1.bin \
  /tmp/opencode/linux-src/linux-npu-driver/firmware/bin/vpu_37xx_v1.bin
echo $?    # 0
```

---

*Sources: torvalds/linux @ `fddfc3ec` (2026-09-26) files `Kconfig`, `Makefile`,
`ivpu_fw.c`, `ivpu_hw.c`, `vpu_boot_api.h`, `vpu_jsm_api.h`, uapi `ivpu_accel.h`,
`MAINTAINERS`; intel/linux-npu-driver @ `aea583d`/`e111144` (npu-1.38.0, 2026-09-10)
`README.md`, `docs/overview.md`, `compiler/compiler_source.cmake`, `firmware/bin/`;
this machine: `modinfo intel_vpu`, sysfs uevent, `dpkg -l`, `id`;
project docs: `r2gvp04w_v2_INSTALLED_SOFTWARE_DOCUMENTATION.md` (§3 inventory, §8
architecture, §11 firmware); web search results for upstream `drivers/accel/ivpu` and
`intel/linux-npu-driver` releases.*
