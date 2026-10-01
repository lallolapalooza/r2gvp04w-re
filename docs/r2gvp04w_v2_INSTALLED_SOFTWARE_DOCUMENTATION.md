# Installed Software Documentation — r2gvp04w_v2.exe

**Subject:** Complete analysis of the software payload installed by `r2gvp04w_v2.exe`
**Product:** Intel(R) Vision Processing Driver for Windows — Package 1.4.9.3
**Driver/Package version:** `31.0.100.1688(Intel Vision Processing) (r2gvp04w_v2)`
**DriverVer:** 10/31/2023, 31.0.100.1688
**Target hardware:** Intel NPU (Meteor Lake MTL, PCI `VEN_8086` `DEV_7D1D` / `DEV_AD1D`) — marketed as **"Intel(R) AI Boost"** (Windows 11) / "Intel(R) Reserved Device" (Windows 10)
**Companion document:** `r2gvp04w_v2_FULL_DOCUMENTATION.md` (installer/Inno Setup reverse engineering)
**Analysis date:** 2026-09-26
**Payload root:** `/home/asdf/projects/r2gvp04w-re/extracted/code$GetExtractPath$/`

---

## Table of Contents

1. [Overview & Identification](#1-overview--identification)
2. [Extraction Methodology](#2-extraction-methodology)
3. [Complete File Inventory (30 files)](#3-complete-file-inventory-30-files)
4. [Installation Flow](#4-installation-flow)
5. [Driver INF Analysis — ivd64.inf](#5-driver-inf-analysis--ivd64inf)
6. [Extension INF Analysis — ivdextn64.inf](#6-extension-inf-analysis--ivdextn64inf)
7. [PE Module Analysis (16 DLL + 1 SYS)](#7-pe-module-analysis-16-dll--1-sys)
8. [Component Architecture & Data Flow](#8-component-architecture--data-flow)
9. [Kernel Mode Driver Deep Dive](#9-kernel-mode-driver-deep-dive)
10. [Code Signing & WHQL Certification](#10-code-signing--whql-certification)
11. [Firmware — FirmwareVpuGen27.bin](#11-firmware--firmwarevpugen27bin)
12. [SHAVE Toolchain — MVC_DEPEND](#12-shave-toolchain--mvc_depend)
13. [Level Zero Stack](#13-level-zero-stack)
14. [Third-Party Licenses](#14-third-party-licenses)
15. [Hardware & OS Support Matrix](#15-hardware--os-support-matrix)
16. [Caveats & Unresolved Items](#16-caveats--unresolved-items)

---

## 1. Overview & Identification

### 1.1 Installer (source of the payload)

| Property | Value |
|---|---|
| File | `r2gvp04w_v2.exe` |
| Size | 63,044,688 bytes |
| MD5 | `3ca32f906eb3975fdc93befd951ef4ea` |
| SHA256 | `cf767eea31debaa199b084cce06eb82443aa251d5963ef97030f5219b9fe28db` |
| Format | PE32 GUI i386, Inno Setup 5.5.7 (unicode), setup data at file offset `0x3b41dbc` (`"Inno Setup Setup Data (5.5.7) (u)"`) |
| Setup title | `version 31.0.100.1688(Intel Vision Processing) (r2gvp04w_v2)` |
| Password | none; 31 embedded languages; no GOG identifier |

### 1.2 What gets installed, in one paragraph

The installer drops a **Windows driver package for the Intel Meteor Lake NPU** plus an on-device
**AI compiler stack**. The core is a kernel driver (`npu_kmd.sys`, service name `npu`, device class
`ComputeAccelerator`) with two user-mode APIs: a **D3D12 user-mode driver** (`OpenAdapter12`) and a
**Level Zero driver** (`npu_level_zero_umd.dll`). Around those sit an offline/online compiler chain —
a DXIL frontend, a DML metacommand compiler (~109 MB), an OpenVINO-based VPU graph compiler
(~80 MB), a SHAVE assembler/compiler/linker toolchain (~101 MB across three DLLs), a SHAVE
vectorizer (~18 MB), plus oneTBB and the Level Zero loader/tracing/validation layers (installed into
`System32`). A 1.9 MB **device firmware image** (`FirmwareVpuGen27.bin` — RTEMS/LEON control
firmware with 20 SHAVE DSP cores) is registered via the device registry key. Installation happens by
running `Silentinstall.bat`, which calls `pnputil /add-driver ... /install` on the INFs.

**Totals:** 30 files, **330,125,828 bytes** (≈315 MB) extracted.

---

## 2. Extraction Methodology

The Inno Setup 5.5.7 payload is compressed (zlib/lzma via setup data blocks), so raw `strings` on
the installer yields nothing of the payload. Extraction used the dedicated tool:

```
# Tool: innoextract 1.9 (prebuilt official Linux binary — system package install unavailable,
# no root; downloaded to /tmp/opencode/innoextract/innoextract-1.9-linux/bin/amd64/innoextract)
innoextract -e -v -d /home/asdf/projects/r2gvp04w-re/extracted /home/asdf/Downloads/r2gvp04w_v2.exe
# → 30 files, exit code 0, ~315 MB (exact sum 330,125,828 bytes)
```

**Destination caveat:** innoextract reports every payload path under the virtual prefix
`code$GetExtractPath$`, i.e. the Inno `[Files]` entries use `DestDir={code:GetExtractPath}` — an
Inno Pascal `[Code]` function computed at install time. The **actual install directory is therefore
not statically knowable** from the archive alone (see §16).

**Analysis toolchain used:** `python3` + `pefile` (PE headers/exports/imports/signatures),
`readelf` (firmware ELFs), `openssl` (PKCS#7 signature blobs), `strings`/`xxd`, `ar` (static
libraries), innoextract 1.9 (container).

---

## 3. Complete File Inventory (30 files)

All paths relative to `extracted/code$GetExtractPath$/`. Timestamps are as stored in the archive.

| # | Path | Size (B) | SHA256 | Archive mtime |
|---|---|---:|---|---|
| 1 | `Silentinstall.bat` | 697 | `18fb631862c616432e17ea2e56c03ae18dcd5049abdc250d78d19088c8f3c606` | 2022-08-31 18:31 |
| 2 | `Driver/ivd64.inf` | 11,694 | `9743001df554fdf7261a254456aceb03923baaeef25e4c11ca38c229f3fa77a0` | 2023-12-06 09:23 |
| 3 | `Driver/ivd64.cat` | 22,095 | `dbf69fba54d58ba0d7bf4b67aaeee1e3714e7ef14c75d0c98995b2020ec2a283` | 2023-12-06 09:23 |
| 4 | `Driver/ivdextn64.inf` | 2,684 | `d0de7bcc7617d5fa5ac5ba25d3380d2b366c11191ac4ca273b03019649a391fc` | 2023-12-06 09:15 |
| 5 | `Driver/ivdextn64.cat` | 11,280 | `9a3a2402fc8657b748a1fafcf70f97f11caeb74d4add82d9840943ba83c00135` | 2023-12-06 09:15 |
| 6 | `Driver/npu_kmd.sys` | 536,328 | `24f1db6ef1dfd09f23c8b8d0e0948a853606d873768f061267d633827d9dff48` | 2023-12-06 09:23 |
| 7 | `Driver/npu_d3d12_umd.dll` | 2,233,096 | `74c88f986efdd40eb0bad692d0a1ba618db39556176868063ca7b8e78ff4573a` | 2023-12-06 09:23 |
| 8 | `Driver/npu_level_zero_umd.dll` | 1,227,016 | `df2737b0be2fca86356b9d2211cfb60ac87646aa8a6cc79b0a16d6f6f3482b92` | 2023-12-06 09:23 |
| 9 | `Driver/npu_blob_parser.dll` | 1,297,672 | `e8f01d556d1d81328bcd855820c6561efac6fe948aebe71f286f2d6dae00244b` | 2023-12-06 09:23 |
| 10 | `Driver/npu_dml_compiler.dll` | 108,934,920 | `0910414e19a74748347ba0c7fe11caf2b7ef31a0348a320ad9096a74a293f12c` | 2023-12-06 09:23 |
| 11 | `Driver/npu_dxil_frontend.dll` | 7,057,672 | `421629ae6adc31e9069690c49cd38f759b851e81c3f3e35f14f32012ea34adf2` | 2023-12-06 09:23 |
| 12 | `Driver/vpux_driver_compiler.dll` | 79,593,736 | `ab811c7f85c48eefb050fd7538ad3b27ad51caa238694bf579532a6006cb0782` | 2023-12-06 09:23 |
| 13 | `Driver/shavedxilvecz64.dll` | 18,459,912 | `177ad066d51dc6b693143558d361c8d7a8a0250b0c1516d105cabb243aa8ef56` | 2023-12-06 09:23 |
| 14 | `Driver/tbb12.dll` | 337,160 | `2450d13a89221163bdb5a5158807add51d4ddc419bb7988013e5a206dd8281ad` | 2023-12-06 09:23 |
| 15 | `Driver/tbbmalloc.dll` | 249,096 | `7ab201a611c96c0337a5eee76b853e90707f56db73b51081c37df307506bf4c1` | 2023-12-06 09:23 |
| 16 | `Driver/ze_loader.dll` | 469,256 | `afcf6bf4dd8a615aea004675279a170f8d7cd7bb094c72e4f0ee5111e93da0f9` | 2023-12-06 09:23 |
| 17 | `Driver/ze_tracing_layer.dll` | 508,168 | `ad01606e386af7e8e0d4ee7e435b79459cfa0faf10a60b172e346bb373504928` | 2023-12-06 09:23 |
| 18 | `Driver/ze_validation_layer.dll` | 304,904 | `29821fa7219f942f8b529cccd66aec7f67a770f07efd151f51a8b0434814e2c5` | 2023-12-06 09:23 |
| 19 | `Driver/firmware/FirmwareVpuGen27.bin` | 1,917,644 | `c0b380ccbb834a41f58c466082012978c5975812c79b29207b4a5c46329cac57` | 2023-12-06 09:23 |
| 20 | `Driver/third-party-programs.txt` | 193,266 | `1ec685604b0270d070b7e5b82200c2464cd0e9226ed95040fc780138ef14371e` | 2023-12-06 09:23 |
| 21 | `Driver/MVC_DEPEND/bin/moviAsm64.dll` | 7,488,264 | `4f29b3e3a2b9ea5bffd6748494df2efc748af6b181fd4563bbe31cfa709a4fa8` | 2023-12-06 09:23 |
| 22 | `Driver/MVC_DEPEND/bin/moviCompile64.dll` | 65,488,136 | `f5e164f0d9e02574ff94676f6bb799597640602ccdbb685724f241a8ed170c2e` | 2023-12-06 09:23 |
| 23 | `Driver/MVC_DEPEND/bin/moviLLD64.dll` | 27,904,776 | `7294c2c00727fef46f2a42c896eb409da2ed3bbf5eab89418ac52dcb749af9ef` | 2023-12-06 09:23 |
| 24 | `Driver/MVC_DEPEND/lib/mlibc_lite.a` | 294,828 | `c095f98d32fdb3a70f8222d56df5c67093f5c28fa72f920dddee656bf83248a2` | 2023-12-06 09:23 |
| 25 | `Driver/MVC_DEPEND/lib/mlibc_lite_ext.a` | 59,322 | `15ba085976a79268244209fcf9ca85a76ead2441dc216d88404285f7e0f95c4f` | 2023-12-06 09:23 |
| 26 | `Driver/MVC_DEPEND/lib/mlibcrt.a` | 281,228 | `9709791f5a1d13a25ccf550925ebe218d127eee694c6b6fcd04a4d3bd025f8c9` | 2023-12-06 09:23 |
| 27 | `Driver/MVC_DEPEND/lib/mlibcrt_mini.a` | 8,500 | `72dcb7fb68660b699b01f436f2c8e30c5d886797470edae5b917e134b8caea9b` | 2023-12-06 09:23 |
| 28 | `Driver/MVC_DEPEND/lib/mlibcxx.a` | 4,306,742 | `438399d2addd6e0ccf84e7bf812a6c0180a95c122653619c28976f5918fa4fb6` | 2023-12-06 09:23 |
| 29 | `Driver/MVC_DEPEND/lib/mlibm.a` | 922,244 | `4769ac96201c3fbd4c974151a631a42b8339b30ea26d8f54072375092bda54a3` | 2023-12-06 09:23 |
| 30 | `Driver/MVC_DEPEND/lib/mlibVecUtils.a` | 3,492 | `f5187ab1cf20466399352bccc02318e9af8fb63cd3294003e29f8c791b85d8aa` | 2023-12-06 09:23 |

**Grouped by size weight:**

| Group | Files | Bytes | Share |
|---|---:|---:|---:|
| Compiler stack (`npu_dml_compiler`, `vpux_driver_compiler`) | 2 | 188,528,656 | 57.1% |
| SHAVE toolchain (`moviCompile64`, `moviLLD64`, `moviAsm64`, `shavedxilvecz64`) | 4 | 119,341,088 | 36.1% |
| Everything else (driver, UMDs, L0 layers, firmware, libs, meta) | 24 | 22,256,084 | 6.7% |

Note: `Silentinstall.bat` carries an **older timestamp (2022-08-31)** than the rest of the package
(2023-12-06) — it is a reused template (see the "Serial IO" artifact in §4).

---

## 4. Installation Flow

### 4.1 Silentinstall.bat (verbatim logic)

```bat
@ECHO OFF
ECHO.
ECHO *** Installing Intel(R) Serial IO Driver ***        <-- stale text, see note

SET INSTALLPATH=%~dp0

pnputil.exe /add-driver "%INSTALLPATH%\Driver\*.inf" /subdirs /install

SET EXITCODE=%errorlevel%

IF %EXITCODE% EQU 0    GOTO EXIT0      ; success
IF %EXITCODE% EQU 259  GOTO EXIT259    ; ERROR_NO_MORE_ITEMS — best driver already installed
IF %EXITCODE% EQU 1641 GOTO EXIT1641   ; success, reboot initiating
IF %EXITCODE% EQU 3010 GOTO EXIT3010   ; success, reboot required
; any other code: no message (implicit fall-through to :END with no output)

:EXIT0    ECHO *** The driver installed successfully! ***
:EXIT259  ECHO *** Best driver version for your device is already installed! ***
:EXIT1641 ECHO *** Installation is complete and reboot will start soon! ***
:EXIT3010 ECHO *** Installation is complete but reboot is required! ***
```

**Key observations:**

- The banner says **"Intel(R) Serial IO Driver"** but the package installs the **Intel NPU
  driver** — a copy-paste artifact from an Intel Serial IO package template (consistent with the
  bat's 2022 timestamp predating the 2023 driver payload).
- `%~dp0` makes the script location-independent: whatever directory the installer extracts to,
  `Driver\*.inf` resolves relative to the bat itself.
- `/subdirs` picks up both `ivd64.inf` and `ivdextn64.inf` (and would also see
  `MVC_DEPEND/lib/*.a`, which are not INFs and are ignored); `/install` force-installs the driver
  on matching devices immediately rather than staging only.
- `pnputil` return codes are the standard ones: `259` = `ERROR_NO_MORE_ITEMS` (driver package
  already the best match), `1641` = `ERROR_SUCCESS_REBOOT_INITIATED`,
  `3010` = `ERROR_SUCCESS_REBOOT_REQUIRED`.
- **No error branch** for real failures (e.g. 5 = access denied, 87 = invalid parameter): the bat
  prints nothing and exits with that code.

### 4.2 Who runs the bat?

innoextract 1.9 does not expose the Inno `[Run]` section, and the `[Code]` script (which would
contain `GetExtractPath()` and any `Exec` call) is inside the compressed setup data. Whether the
installer **auto-executes** `Silentinstall.bat` (vs. the user running it manually) is therefore
**not statically confirmed** — see §16. The file layout (bat at payload root, everything else under
`Driver\`) is the classic Intel/Lenovo driver-package shape where a setup wrapper runs the bat.

---

## 5. Driver INF Analysis — ivd64.inf

`Driver/ivd64.inf` — 11,694 bytes, 325 lines. Copyright header: "Intel(R) Corporation (2022)".

### 5.1 Identity

```ini
[Version]
Signature   = "$WINDOWS NT$"
Provider    = "Intel Corporation"
ClassGUID   = {F01A9D53-3FF6-48D2-9F97-C8A7004BE10C}    ; Class = ComputeAccelerator
Class       = ComputeAccelerator
CatalogFile = ivd64.cat
DriverVer   = 10/31/2023,31.0.100.1688
PnpLockDown = 1
```

`Class=ComputeAccelerator` is the device-setup class for NPUs/accelerators (not Display,
not System). `PnpLockDown=1` marks the package as locked against PnP-time modification.

### 5.2 Destination directories

```ini
[DestinationDirs]
npu.Miniport_DS       = 13                       ; Driver store (dirid 13)
npu.d3d12_DS          = 13                       ; Driver store
npu.LevelZero_DS      = 13                       ; Driver store
npu.LevelZero_SYS32   = 11                       ; System32 (!)
npu.dxil_frontend_DS  = 13                       ; Driver store
npu.mcc_DS            = 13                       ; Driver store
npu.MvcDepend_bin_DS  = 13, MVC_DEPEND\bin       ; Driver store subdir
npu.MvcDepend_lib_DS  = 13, MVC_DEPEND\lib       ; Driver store subdir
npu.GraphCompiler_DS  = 13                       ; Driver store
npu.TPP_DS            = 13                       ; Driver store
npu.Firmware_Gen27_DS = 13, firmware             ; Driver store subdir
```

- **dirid 13** = Windows Driver Store (`%SystemRoot%\System32\DriverStore\FileRepository\<pkg>_...`),
  the modern default for driver payload files.
- **dirid 11** = `%SystemRoot%\System32` — used **only** for the three Level Zero layer DLLs
  (`ze_loader.dll`, `ze_validation_layer.dll`, `ze_tracing_layer.dll`), copied with
  `CopyFiles ... ,,,0x00000020` (flag `0x20` = `COPYFLG_IN_USE_REPLACE`-style copy-on-reboot
  behavior for shared system files). This lets any Level Zero application find the loader at the
  conventional System32 location independent of the driver package.

### 5.3 Models / OS decorations

```ini
[Manufacturer]
%Intel% = IntelNPU, NTamd64.10.0...22621, NTamd64.10.0...22000, NTamd64.10.0...18362

%NPU_7D1D_w11_22621% = mtl_w11_22621_DS, PCI\VEN_8086&DEV_7D1D
%NPU_AD1D_w11_22621% = mtl_w11_22621_DS, PCI\VEN_8086&DEV_AD1D
%NPU_7D1D_w11_22000% = mtl_w11_22000_DS, PCI\VEN_8086&DEV_7D1D
%NPU_AD1D_w11_22000% = mtl_w11_22000_DS, PCI\VEN_8086&DEV_AD1D
%NPU_7D1D_w10%       = mtl_w10_DS,       PCI\VEN_8086&DEV_7D1D
%NPU_AD1D_w10%       = mtl_w10_DS,       PCI\VEN_8086&DEV_AD1D
```

Three decorated installs (Windows build ranges):

| Decoration | OS | Install section |
|---|---|---|
| `NTamd64.10.0...18362` | Windows 10 1903+ (build ≥18362) | `mtl_w10_DS` |
| `NTamd64.10.0...22000` | Windows 11 21H2 (build ≥22000) | `mtl_w11_22000_DS` |
| `NTamd64.10.0...22621` | Windows 11 22H2 (build ≥22621) | `mtl_w11_22621_DS` |

Device IDs: `PCI\VEN_8086&DEV_7D1D` (Meteor Lake NPU) and `PCI\VEN_8086&DEV_AD1D` (sibling SKU).

### 5.4 Per-OS feature matrix (what files each OS model gets)

| File set | Description | Win10 (18362) | Win11 22000 | Win11 22621 |
|---|---|:---:|:---:|:---:|
| `npu.Miniport_DS` | `npu_kmd.sys` | ✅ | ✅ | ✅ |
| `npu.d3d12_DS` | `npu_d3d12_umd.dll` | ✅ | ✅ | ✅ |
| `npu.Firmware_Gen27_DS` | `firmware/FirmwareVpuGen27.bin` | ✅ | ✅ | ✅ |
| `npu.TPP_DS` | `third-party-programs.txt` | ✅ | ✅ | ✅ |
| `npu.LevelZero_DS` | `npu_level_zero_umd.dll`, `npu_blob_parser.dll` | — | ✅ | ✅ |
| `npu.LevelZero_SYS32` | `ze_loader`, `ze_validation_layer`, `ze_tracing_layer` → System32 | — | ✅ | ✅ |
| `npu.GraphCompiler_DS` | `vpux_driver_compiler.dll`, `tbb12.dll`, `tbbmalloc.dll` | — | ✅ | ✅ |
| `npu.dxil_frontend_DS` | `npu_dxil_frontend.dll`, `shavedxilvecz64.dll` | — | — | ✅ |
| `npu.MvcDepend_bin_DS` | `moviAsm64/moviCompile64/moviLLD64.dll` | — | — | ✅ |
| `npu.MvcDepend_lib_DS` | 7 × `MVC_DEPEND/lib/*.a` | — | — | ✅ |
| `npu.mcc_DS` | `npu_dml_compiler.dll` | — | — | ✅ |
| **FeatureScore** | | `FF` | `FF` | `FF` |

`FeatureScore = FF` on all three (0xFF = highest driver-rank override for the class, ensuring this
package wins over generic packages).

Also installed on all: `npu_blob_parser.dll` only via LevelZero set (Win11), and on Win10 only the
D3D12 path exists — i.e. **Win10 gets a minimal D3D12-only driver; 22000 adds Level Zero; 22621 adds
the full compiler stack** (matches the earlier INF analysis).

### 5.5 Kernel service registration

```ini
[npu_Service_Inst_DS]
ServiceType    = 1    ; SERVICE_KERNEL_DRIVER
StartType      = 3    ; SERVICE_DEMAND_START
ErrorControl   = 0    ; SERVICE_ERROR_IGNORE
LoadOrderGroup = Video
ServiceBinary  = %13%\npu_kmd.sys
```

Demand-start kernel service named **`npu`**, in the **Video** load-order group, error-ignored,
binary read from the Driver Store.

### 5.6 Registry values written (HKR = device software key)

| Value | Type | Data | Purpose |
|---|---|---|---|
| `FirmwareVpuGen27File` | REG_SZ | `%13%\firmware\FirmwareVpuGen27.bin` | Tells the KMD where the firmware image lives for download |
| `UserModeDriverName` | REG_MULTI_SZ | `"<>"`, then `%13%\npu_d3d12_umd.dll` ×3 | D3D12 UMD binding (GraphicsKrnl `UserModeDriverName` convention; three entries = D3D9/10/11-style slots reused) |
| `DXCoreAttributes` | REG_MULTI_SZ | `{D46140C4-ADD7-451B-9E56-06FE8C3B58ED}`, `{248E2800-A793-4724-ABAA-23A6DE1BE090}`, `{B71B0D41-1088-422F-A27C-0250B7D3A988}` | Per INF comment: `DXCORE_HARDWARE_TYPE_ATTRIBUTE_NPU`, `DXCORE_ADAPTER_ATTRIBUTE_D3D12_CORE_COMPUTE`, `DXCORE_ADAPTER_ATTRIBUTE_D3D12_GENERIC_ML` — makes the adapter enumerable via DXCore |
| `LevelZeroDriverPath` | REG_SZ | `%13%\npu_level_zero_umd.dll` | Locator for the Level Zero loader |
| `Interrupt Management\...\MSISupported` | DWORD | 1 | MSI interrupts enabled |
| `Interrupt Management\...\MessageNumberLimit` | DWORD | 8 | Max 8 MSI vectors |

(The commented-out `[npu_SoftwareDXCoreSettings_DS]` block shows an earlier variant registering
only the NPU hardware-type GUID.)

### 5.7 ETW instrumentation

Three manifest-based ETW providers are registered from the INF:

| Provider | Resource/Message/Parameter file | Channels |
|---|---|---|
| `Intel-NPU-Kmd` | `%13%\npu_kmd.sys` | Operational (0x2) |
| `Intel-NPU-LevelZero` | `%13%\npu_level_zero_umd.dll` | Operational (0x2), Analytic (0x3) |
| `Intel-NPU-D3D12` | `%13%\npu_d3d12_umd.dll` | Operational (0x2) |

Channel settings:

| Channel | Isolation | **Enabled** | Value | Max size | Retention |
|---|---|:---:|---:|---:|---|
| `*-Operational` (Kmd) | 2 (system) | **0** | 16 | 15,728,640 B (15 MB) | Circular, AutoBackup=1 |
| `*-Operational` (Umd) | 1 (application) | **0** | 16 | 15,728,640 B (15 MB) | Circular, AutoBackup=1 |
| `Intel-NPU-LevelZero/Analytic` | 1 (application) | **0** | 17 | 1,048,985,600 B | Sequential |

All channels ship **disabled** (`Enabled = 0`) — opt-in diagnostics via `wevtutil`/Event Viewer.
Quirk: the Analytic channel's `LoggingMaxSize` is `1048985600` (~1000.4 MB) while its comment says
"; 100 MB" — the value is 10× the comment.

### 5.8 Strings of note

- `DiskId = "Intel(R) NPU Driver for Windows"`
- Device friendly names (per OS):
  - Win11: `NPU_7D1D_w11_*` / `NPU_AD1D_w11_*` = **"Intel(R) AI Boost"**
  - Win10: `NPU_*_w10` = **"Intel(R) Reserved Device"**
- Trailing sentinel: `; Do not modify or copy the following line` / `; set SIGNING_KEY_VERSION=2`
  (build-system marker for Intel's package signing pipeline).

---

## 6. Extension INF Analysis — ivdextn64.inf

`Driver/ivdextn64.inf` — 2,684 bytes, 64 lines. A **Windows-declarative Extension INF** that
attaches OEM-specific component metadata to the base device without touching the primary driver.

```ini
[Version]
Class       = Extension
ClassGuid   = {e2f84ce7-8efa-411c-aa69-97454ca4cb57}
ExtensionId  = {460CE579-AC4B-4370-B8C5-1E40AF46B0AA}   ; INF comment: "Replace with your own GUID"
DriverVer   = 10/31/2023,31.0.100.1688
CatalogFile = ivdextn64.cat
PnpLockDown = 1
```

**Targets** (Windows 11 22H2 decoration only; the 18362 section is present but empty):

```ini
PCI\VEN_8086&DEV_7D1D&SUBSYS_50DD17AA
PCI\VEN_8086&DEV_7D1D&SUBSYS_50E317AA
PCI\VEN_8086&DEV_7D1D&SUBSYS_223417AA
PCI\VEN_8086&DEV_7D1D&SUBSYS_223517AA
PCI\VEN_8086&DEV_7D1D&SUBSYS_232617AA
```

- Subsystem vendor `17AA` = **Lenovo** — these are five Lenovo board/ODM subsystem IDs
  (50DD, 50E3, 2234, 2235, 2326) — i.e. this package is a **Lenovo-targeted build** of Intel's
  driver.
- The extension adds a component: `AddComponent = VEN_8086_DEV_7D1D_component` with
  `ComponentIds = MEP_VEN_8086_DEV_7D1D` (MEP = "Management/Extension Product" component identifier
  used by Windows Update/DELL-style component targeting).
- Friendly description: "Intel(R) AI Boost".
- The `ExtensionId` GUID appears verbatim with the INF's own OEM instruction comment still in
  place ("NOTE TO OEM: Replace..."), suggesting it was left at (or near) Intel's template value.
- The `ivdextn64.cat` (see §10) also references **"Wistron Corporation"** subsystem metadata —
  Wistron is the ODM that builds these Lenovo boards.

---

## 7. PE Module Analysis (16 DLL + 1 SYS)

All binaries are **PE32+ (x64)**. Metadata from `pefile` (full machine-readable dump:
`/tmp/opencode/pe_analysis.json`).

### 7.1 Master table

| File | Size (B) | Subsystem | Linker | PE timestamp | Product/File version | Exports | DllChars |
|---|---:|---|---|---|---|---:|---|
| `npu_kmd.sys` | 536,328 | **1 (Native)** | 14.36 | 2023-10-31 23:00:35 | 31.0.100.1688 | 0 | 0x4160 |
| `npu_d3d12_umd.dll` | 2,233,096 | 2 (GUI) | 14.36 | 2023-10-31 23:00:14 | 31.0.100.1688 | 1 | 0x4160 |
| `npu_level_zero_umd.dll` | 1,227,016 | 3 (CUI) | 14.36 | 2023-10-31 23:00:24 | 31.0.100.1688 | 46 | 0x4160 |
| `npu_blob_parser.dll` | 1,297,672 | 3 (CUI) | 14.36 | 2023-10-31 23:00:36 | 31.0.100.1688 | 11 | **0x41e0** |
| `npu_dml_compiler.dll` | 108,934,920 | 3 (CUI) | 14.36 | 2023-10-31 23:00:20 | 31.0.100.1688 | 17 | **0x41e0** |
| `npu_dxil_frontend.dll` | 7,057,672 | 3 (CUI) | 14.36 | 2023-10-31 22:54:01 | 31.0.100.1688 | 1 | **0x41e0** |
| `vpux_driver_compiler.dll` | 79,593,736 | 2 (GUI) | 14.29 | 2023-10-31 22:39:50 | 2023.0.2-1-… | 17 | 0x4160 |
| `shavedxilvecz64.dll` | 18,459,912 | 3 (CUI) | 14.36 | 2023-08-14 14:26:01 | 11.1.3 | 2 | 0x4160 |
| `tbb12.dll` | 337,160 | 3 (CUI) | 14.29 | 2023-10-18 08:06:18 | oneTBB 2021.2 | 89 | 0x4160 |
| `tbbmalloc.dll` | 249,096 | 3 (CUI) | 14.29 | 2023-10-18 08:06:23 | oneTBB 2021.2 | 27 | 0x4160 |
| `ze_loader.dll` | 469,256 | 3 (CUI) | 14.29 | 2023-10-21 01:07:53 | L0 1.15.0 | 578 | 0x4160 |
| `ze_tracing_layer.dll` | 508,168 | 3 (CUI) | 14.29 | 2023-10-21 01:08:06 | L0 1.15.0 | 198 | 0x4160 |
| `ze_validation_layer.dll` | 304,904 | 3 (CUI) | 14.29 | 2023-10-21 01:08:14 | L0 1.15.0 | 61 | 0x4160 |
| `MVC_DEPEND/bin/moviAsm64.dll` | 7,488,264 | 3 (CUI) | 14.36 | 2023-09-21 10:22:47 | 1.13.16 64-bit | 2 | **0x0160** |
| `MVC_DEPEND/bin/moviCompile64.dll` | 65,488,136 | 3 (CUI) | 14.36 | 2023-09-21 14:27:59 | 00.114.11.4207 | 2 | **0x0160** |
| `MVC_DEPEND/bin/moviLLD64.dll` | 27,904,776 | 3 (CUI) | 14.36 | 2023-09-21 11:35:50 | 3.0.9 | 2 | **0x0160** |

**DllCharacteristics decoding:** `0x4160` = `HIGH_ENTROPY_VA|DYNAMIC_BASE|NX_COMPAT|GUARD_CF`;
`0x41e0` = same **+ `FORCE_INTEGRITY`** (code-integrity enforced — the three compiler/parser
binaries); `0x0160` = `HIGH_ENTROPY_VA|DYNAMIC_BASE|NX_COMPAT` **without `GUARD_CF`** (the three
MVC toolchain DLLs ship without Control Flow Guard).

**Linker split:** `14.36` (VS 2022 v17.6 toolset) builds the Intel NPU driver family and MVC
toolchain; `14.29` (VS 2019 v16.11) builds oneTBB, the Level Zero trio, and the OpenVINO-based
graph compiler.

### 7.2 Export surface per module (what each exposes)

| Module | Exports (count) | Key symbols |
|---|---:|---|
| `npu_d3d12_umd.dll` | 1 | **`OpenAdapter12`** — the D3D12 UMD entry point (called by D3D12 runtime per adapter) |
| `npu_dxil_frontend.dll` | 1 | **`OpenCompiler12`** — DXIL compiler frontend entry (D3D12 shader-compiler protocol) |
| `npu_level_zero_umd.dll` | 46 | `zeGet{CommandList,CommandQueue,Context,Device,Driver,EventPool,Event,Fence,Global,Image,Kernel,Mem,ModuleBuildLog,Module,PhysicalMem,Sampler,VirtualMem}ProcAddrTable`, `zesGet*` (17 sys-management tables: Device, Diagnostics, Driver, Engine, FabricPort, Fan, Firmware, Frequency, Led, Memory, PerformanceFactor, Power, Psu, Ras, Scheduler, Standby, Temperature), `zetGet*` (6 tooling tables) |
| `npu_dml_compiler.dll` | 17 | `CompileKernel`; `Composer{Allocate,Free,Compose,Reset,AddBarrier,AddCopyBuffer,AddDispatch,AddMarker,AddMetacommandExec,AddMetacommandInit,ReadyKernel}`; `Create/DestroyMetaCommandCompiler`, `CreateMetaCommandPlan`, `QueryMetaCommand`, `GetRequiredResourceSize` — **DirectML metacommand compiler** |
| `npu_blob_parser.dll` | 11 | `bpParser{Create,Destroy,DumpBuffer,GetBuffer,GetInputCount,GetInputTensorDesc,GetInputTensorDesc2,GetOutputCount,GetOutputTensorDesc,GetOutputTensorDesc2,MergeInferences}` — serialized-blob/tensor-metadata inspection |
| `vpux_driver_compiler.dll` | 17 | `vcl{CompilerCreate,CompilerDestroy,CompilerGetProperties,ExecutableCreate,ExecutableDestroy,ExecutableGetSerializableBlob,GetDecodedProfilingBuffer,LogHandleGetString,ProfilingCreate,ProfilingDestroy,ProfilingGetProperties,QueryNetwork,QueryNetworkCreate,QueryNetworkDestroy}` + `CreatePluginEngine{NPU,AUTO,BATCH}` — **OpenVINO VPU compiler "in driver"** (VCL = VPU Compiler Library) |
| `shavedxilvecz64.dll` | 2 | `runDxilVeczPass`, `releaseDxilVeczBuffer` — auto-vectorization pass over DXIL for SHAVE targets |
| `ze_loader.dll` | 578 | Full Level Zero API surface (`ze*`/`zes*`/`zet*`) — loader that dispatches to UMD |
| `ze_tracing_layer.dll` | 198 | `zelTracer*`, `zel*RegisterCallback`, `zelLoaderGetVersion`, plus pass-through proc-addr tables |
| `ze_validation_layer.dll` | 61 | Proc-addr tables + `zelLoaderGetVersion` — parameter/usage validation layer |
| `tbb12.dll` | 89 | oneTBB task scheduler (`tbb::detail::r1::*`) |
| `tbbmalloc.dll` | 27 | `scalable_malloc` family, `__TBB_malloc_safer_*`, RML pool API |
| `moviAsm64.dll` | 2 | `process`, `freeResults` — **Movidius SHAVE assembler** (orig. `moviAsmDll.dll`, v1.13.16) |
| `moviCompile64.dll` | 2 | `main`, `freeResults` — **Movidius SHAVE compiler** (`libmoviCompile`, v00.114.11.4207) |
| `moviLLD64.dll` | 2 | `process`, `freeResults` — **Movidius SHAVE linker** (LLD-based, `lld` v3.0.9) |

The three `movi*` DLLs use the same trivial 2-export "worker" ABI (`process`/`main` +
`freeResults`) — they are compiler stages hosted inside the driver process (or a build daemon),
invoked by handle + buffer exchange, rather than conventional library APIs.

### 7.3 Version provenance highlights (from VERSIONINFO)

- `vpux_driver_compiler.dll`: `ProductVersion = 2023.0.2-1-e662b1a3301-HEAD-2023-10-31-21-15-45-1-DCI-caeaa561fd5`, `Comments = https://docs.openvino.ai/`, `OriginalFilename = vpux_driver_compiler.dll`, `InternalName = vpux_driver_compiler` → built from **OpenVINO master-ish snapshot** the same day as the driver (2023-10-31).
- `shavedxilvecz64.dll`: `FileVersion 11.1.3`, `InternalName Vecz`, product name "Intel(R) Movidius(TM) VPU Driver".
- `moviAsm64.dll`: `OriginalFilename moviAsmDll.dll`, `Commit ID 33f3f75e` (2023-09-21).
- `moviCompile64.dll`: `InternalName libmoviCompile`, `OriginalFilename moviCompile.dll`.
- `moviLLD64.dll`: `InternalName lld` (LLVM linker), `OriginalFilename moviLLDDll.dll`.
- `tbb12/tbbmalloc`: `FileVersion 2021.2`, oneTBB, © 2005-2023 Intel.
- `ze_*` trio: `FileVersion 1.15.0`, "oneAPI Level Zero … for Windows(R)".
- Core `npu_*` family: uniformly `31.0.100.1688`, ProductName "Intel(R) NPU Driver" (blob parser: "Intel(R) NPU Blob Parser"), © 2023.

### 7.4 Import dependencies (runtime linkage picture)

| Module | Imported DLLs (highlights) |
|---|---|
| `npu_kmd.sys` | `ntoskrnl.exe` (134 imports), `ksecdd.sys` (8: BCrypt hash APIs + `SecLookupAccountSid`), `HAL.dll` (2) |
| `npu_d3d12_umd.dll` | `KERNEL32` (100), `ADVAPI32` (ETW: `ControlTraceW/EnableTraceEx2/EventRegister/…`), `SETUPAPI` (`CM_Get_Device_ID_List*`, `CM_Open_DevNode_Key`), `wer.dll` (WER crash reports), `ole32`, `VERSION` |
| `npu_level_zero_umd.dll` | `KERNEL32` (117), `ext-ms-win-dxcore-l1-1-0` (`DXCoreCreateAdapterFactory`), `api-ms-win-dx-d3dkmt-l1-1-0` (`D3DKMTQueryAdapterInfo`), `d3d12.dll` (ord 101), `SETUPAPI`, `ADVAPI32` (ETW), `wer.dll` |
| `vpux_driver_compiler.dll` | `tbb12.dll`, `KERNEL32`, `ADVAPI32`, `SHLWAPI` |
| `shavedxilvecz64.dll` | `MSVCP140`, `VCRUNTIME140/140_1`, UCRT api-sets (needs **VC++ 2015-2022 runtime**) |
| `ze_loader.dll` | `CFGMGR32.dll` (device enumeration), `ADVAPI32`, `KERNEL32`, `ole32` |
| `movi*`, `npu_blob_parser`, `npu_dml_compiler`, `npu_dxil_frontend` | `KERNEL32` only (+`ADVAPI32/VERSION/SHELL32/SHLWAPI/USER32/ole32` for moviCompile & dml) |

Notable: `npu_d3d12_umd.dll` and `npu_level_zero_umd.dll` both import the **WER (Windows Error
Reporting)** API (`WerReportCreate/AddDump/AddFile/SetParameter/Submit`) — in-situ crash reporting
for user-mode driver faults, and both register their own ETW sessions via `ADVAPI32` trace APIs.

---

## 8. Component Architecture & Data Flow

```
                        ┌──────────────────────────────────────────────┐
                        │                 Application                  │
                        │  (D3D12 compute  /  Level Zero  /  OpenVINO) │
                        └───────┬──────────────────┬───────────────────┘
                                │                  │
              D3D12 runtime     │                  │      ze_loader.dll (System32, L0 1.15.0)
        (via UserModeDriverName)│                  │        ├─ ze_tracing_layer.dll
                                ▼                  ▼        └─ ze_validation_layer.dll
                 ┌──────────────────────┐   ┌──────────────────────────┐
                 │ npu_d3d12_umd.dll    │   │ npu_level_zero_umd.dll   │
                 │  OpenAdapter12       │   │  46× *ProcAddrTable      │
                 │  DXCore: HW type NPU │◄──┤  DXCoreCreateAdapterFactory│
                 └──────────┬───────────┘   │  D3DKMTQueryAdapterInfo  │
                            │               └───────────┬──────────────┘
        shader/metacommand   │                           │
                            ▼                           │
   ┌────────────────────────────────────┐               │
   │ Compiler chain (driver-side JIT)   │               │
   │ ├ npu_dxil_frontend.dll            │               │
   │ │   OpenCompiler12 (DXIL in)       │               │
   │ ├ shavedxilvecz64.dll              │               │
   │ │   runDxilVeczPass (vectorize)    │               │
   │ ├ npu_dml_compiler.dll  (~109 MB)  │               │
   │ │   Composer*/MetaCommand*         │               │
   │ ├ vpux_driver_compiler.dll (~80 MB)│◄── tbb12/tbbmalloc
   │ │   vcl* / CreatePluginEngineNPU   │               │
   │ └ npu_blob_parser.dll              │               │
   │     bpParser* (tensor blobs)       │               │
   ├────────────────────────────────────┤               │
   │ SHAVE toolchain (MVC_DEPEND/bin):  │               │
   │   moviCompile64 → moviAsm64        │               │
   │             → moviLLD64            │               │
   │ SHAVE target libs (MVC_DEPEND/lib):│               │
   │   mlibc*/mlibcxx/mlibm/VecUtils    │               │
   └──────────────────┬─────────────────┘               │
                      │ compiled SHAVE/NN binaries      │
                      ▼                                 ▼
        ┌─────────────────────────────────────────────────────┐
        │               npu_kmd.sys  (service "npu")          │
        │   Video group · demand-start · ComputeAccelerator   │
        │   MSI ≤8 vectors · ETW Intel-NPU-Kmd                │
        │   FirmwareVpuGen27File ──► firmware download        │
        └──────────────────────┬──────────────────────────────┘
                               │ MMIO / MSI / firmware mailbox
                               ▼
        ┌─────────────────────────────────────────────────────┐
        │        Intel Meteor Lake NPU  (8086:7D1D/AD1D)      │
        │  "Intel(R) AI Boost" — LEON RT core + 20 SHAVE DSPs │
        │  runs FirmwareVpuGen27.bin (RTEMS)                  │
        └─────────────────────────────────────────────────────┘
```

**Two API surfaces, one driver:** D3D12 (`OpenAdapter12`, mesh-shader-style compute through
DXCore) and Level Zero (`zeGet*ProcAddrTable`, the oneAPI SYCL/OpenVINO path). Both UMDs talk to
the same KMD; both feed the same compiler chain (DXIL frontend for D3D12 shaders, VPU compiler for
Level Zero graphs, DML compiler for DirectML metacommands).

---

## 9. Kernel Mode Driver Deep Dive — npu_kmd.sys

- **536,328 bytes**, PE32+ x64, **subsystem 1 (Native)** — kernel-mode driver, linked 14.36,
  timestamp 2023-10-31 23:00:35, `DllCharacteristics 0x4160` (CFG+ASLR+NX+high-entropy).
- **No exports** (standard WDM/KMD model: `DriverEntry` only, dispatched via IRP major functions).
- **Imports:**
  - `ntoskrnl.exe` (134): full modern-KMD surface —
    *Memory:* `ExAllocatePool2`, `ExAllocatePoolWithQuotaTag`, MDL APIs (`IoAllocateMdl`,
    `MmAllocatePagesForMdlEx`, `MmMapLockedPagesSpecifyCache`, `MmProbeAndLockPages`),
    contiguous allocation (`MmAllocateContiguousMemory[SpecifyCache]`, `MmFreeContiguousMemory`,
    `MmGetPhysicalAddress`) — characteristic of a device driver managing DMA-capable buffers;
    *sync/threads:* DPC/timer/semaphore/mutex/guarded-mutex APIs, `PsCreateSystemThread`,
    `KeDelayExecutionThread`; *PnP:* `IoRegisterDeviceInterface`, `IoRegisterPlugPlayNotification`,
    `IoGetDeviceProperty`, `IoBuildDeviceIoControlRequest`; *registry:* `RtlCreateRegistryKey`,
    `RtlQueryRegistryValues`, `RtlWriteRegistryValue` (reads `FirmwareVpuGen27File` etc.);
    *ETW:* `EtwRegister/EtwWriteTransfer/EtwSetInformation` (feeds `Intel-NPU-Kmd`);
    *security:* ACL/SECURITY_DESCRIPTOR APIs + `SeQueryInformationToken`;
    *stability:* `KeRegisterBugCheckReasonCallback` / `KeDeregisterBugCheckReasonCallback`
    (NPU state dumped on BSOD), `KeInvalidateAllCaches`/`KeInvalidateRangeAllCaches`;
    *service control:* `ZwLoadDriver`/`ZwUnloadDriver`;
    *cache-local string utils:* `strncpy_s`, `wcscpy_s`, `sprintf`, `strstr`.
  - `ksecdd.sys` (8): `BCryptOpenAlgorithmProvider/CreateHash/HashData/FinishHash/…` +
    `SecLookupAccountSid` — kernel-mode hashing (integrity measurement of firmware/driver blobs)
    and SID-based access checks.
  - `HAL.dll` (2): `KeQueryPerformanceCounter`, `KeStallExecutionProcessor` — timing/calibration.
- **Service config** (from INF §5.5): demand-start, error-ignore, `LoadOrderGroup = Video`,
  binary `%13%\npu_kmd.sys`.

---

## 10. Code Signing & WHQL Certification

### 10.1 Authenticode (every PE)

- **All 16 DLLs + `npu_kmd.sys` are Authenticode-signed.**
- Every PE carries a certificate table of exactly **15,112 bytes** (identical blob *size*;
  per-file cert-blob SHA256s differ — each file is signed individually, not shared).
- Leaf certificate: **"Intel Corporation"**, signed by **Sectigo Public Code Signing CA R36**,
  chained to **Sectigo Public Code Signing Root R46** (not the old Verisign/WS Symantec chain).

### 10.2 WHQL catalogs

| Catalog | Covers | Signer |
|---|---|---|
| `ivd64.cat` (22,095 B) | 26 unique file hashes (the primary package: both INFs, all 16 PEs + `npu_kmd.sys`, firmware, `.a` libs, `third-party-programs.txt`) | **"Microsoft Windows Hardware Compatibility Publisher"**, issuer *Microsoft Windows Third Party Component CA 2012* (DER PKCS#7) |
| `ivdextn64.cat` (11,280 B) | `ivdextn64.inf` + 5 hardware-ID entries + "Wistron Corporation" subsystem metadata | same Microsoft WHQL publisher |

`ivdextn64.cat` internals: bundle ID `aa50686e-d31e-40a6-aa90-e593d1dd5f75`, submission ID
`29989970_13741673494061908_1152921505697052269`, targets
`_v100_X64_Vb`, `_v100_X64_21H2`, `_v100_X64_22H2` (WHQL target OS list for Windows 11 22H2 era).

**Summary:** the package is both Intel-code-signed *and* Microsoft WHQL-signed — it installs on
64-bit Windows 10/11 without test-signing mode or driver-block prompts (assuming an up-to-date
driver-blocklist bypass for this submission).

### 10.3 Peculiarity

The `FORCE_INTEGRITY` (`0x80`) flag is set on exactly three binaries — `npu_blob_parser.dll`,
`npu_dml_compiler.dll`, `npu_dxil_frontend.dll` — the ones that consume **untrusted compiler
inputs** (DXIL bytecode / serialized graphs / blob containers). Windows enforces page-hash code
integrity on these images at load, mitigating tampering of the compiler frontends. The three MVC
toolchain DLLs conversely lack `GUARD_CF`.

---

## 11. Firmware — FirmwareVpuGen27.bin

**1,917,644 bytes**, SHA256 `c0b380ccbb834a41f58c466082012978c5975812c79b29207b4a5c46329cac57`.
Registered under the device key as `FirmwareVpuGen27File` = `%13%\firmware\FirmwareVpuGen27.bin`;
downloaded to the NPU by `npu_kmd.sys` at device start.

### 11.1 Container header (first 0x2000 bytes)

| Offset | Value | Meaning |
|---|---|---|
| +0x00, +0x04 | `1`, `1` | format/version words |
| +0x08 | `0x84802000` | load address |
| +0x10 | `0x1d22cc` | payload length = **file size − 0x2000** (exact) |
| +0x14 | `0x84803000` | load address |
| +0x1c | `"0.0.0"` | firmware version string |
| +0x40 | `0x84801000` | load address |
| +0x48 | `0x58` | — |
| +0x4c | `0x84800000` | base address of config region |
| +0x98 | `0x1740` | = size of embedded `.shaveAppElfs` section (exact) |
| +0x9c | `0x5000` | — |
| +0xa0 | `0x7be000` | — |
| +0x1000 | build stamp (ASCII) | see below |

**Build stamp:**

```
20231031*MTL_CLIENT_SILICON-release*2101*ci_tag_mtl_pv2_vpu_rc_20231031_2101*cb0b783368d
```

→ **Meteor Lake client silicon, release build 2101, CI tag `mtl_pv2_vpu_rc_20231031_2101`,
commit `cb0b783368d`, built 2023-10-31** — same date as the driver's DriverVer/PE timestamps.

### 11.2 Structure

Four ELF-magic occurrences exist, but only **two are real ELFs**:

1. **Offsets `0x4ca0` / `0x145d8`** — *not* valid ELFs: partial 16-byte `7fELF…` ident headers
   immediately followed by ASCII fragments (`"lnn"`, `".text"`, address `0x84800fa0`) and CRT
   strings (`"Stack smashing detected at 0x%08x! Aborting program."`,
   `"system/crt/src/stack_protection.c"`). These are **mini program descriptors** for auxiliary
   "LNN" modules with embedded section names — custom container entries, not standard ELF.
2. **ELF1 at file offset `0x22000` (139,264)** — the main firmware image.
3. **ELF2 at file offset `0x32000` (204,800)** — the embedded SHAVE application (identical to
   ELF1's `.shaveAppElfs` section, whose file offset is `0x010000` relative to ELF1).

#### ELF1 (main image)

- **ELF32 little-endian EXEC, Machine = SPARC (`2`)** — the **LEON** (SPARC V8-compatible) core
  used in Movidius/Intel VPUs. Entry `0x85002000`.
- 13 program headers, 109 section headers; section-header table ends **exactly** at EOF (ELF1
  spans `0x22000` → end of file).
- Key sections:

| Section | Type | VMA | Size | Content |
|---|---|---|---:|---|
| `.mss_config_data` | NOBITS | `0x84800000` | 0x1000 | MSS config region (matches header +0x4c) |
| `.fw_version` | NOBITS | `0x84801000` | 0x1000 | version blob (built at runtime) |
| `.shaveAppElfs` | PROGBITS | `0x85000000` | **0x1740** | embedded SHAVE ELF (ELF2, see below) |
| `.lrt.text` | PROGBITS | `0x85002000` | 0x90d70 | **LRT = LEON Real-Time** code (~593 KB) |
| `.lnn.text` | PROGBITS | `0x850b3000` | 0x470c0 | **LNN = LEON NN runtime** code (~291 KB) |
| `.lrt.rtemsroset` / `.lnn.rtemsroset` | PROGBITS | — | 0xa8/0x78 | **RTEMS** init sets (confirms RTEMS RTOS) |
| `.lnn.stack` | NOBITS | `0x85108120` | 0x1b000 | LNN stack (112 KB) |
| `.lrt.stack` | NOBITS | `0x851311e0` | **0x16cebe0** | LRT stack (~23 MB!) |
| `S.shvNN0..19.data/.stack` | PROGBITS/NOBITS | `0x2e000000`–`0x2e3fec00` | stacks 0x1400 each | **20 SHAVE DSP cores** × (data + 5 KB stack) |
| `S.shvNN0..19.code` | PROGBITS | `0x85000000` | 0 | per-core code slots (filled at load) |
| `.ddr.data` | PROGBITS | `0x86800000` | 0x100 | DDR-resident data |
| `.pipePrint_{lrt,lnn,shv}` | NOBITS/PROGBITS | `0x88700000` | 0x20c0 each | debug print pipes |
| `.ipcMss.desc*` / `.ipcCss.desc*` | NOBITS | `0x94800000` / `0x94a00000` | 0x200000 | IPC descriptor rings (MSS = main system, CSS = compute subsystem) |
| `.xlinkMss.desc*` / `.xlinkCss.desc*` | NOBITS | `0x94c00000` / `0x94d00000` | 0x100000 | cross-link descriptor rings |
| `.symtab`/`.strtab`/`.shstrtab` | — | — | 0x1e540 / 0x34e2a / 0x619 | full symbol table retained |

- LOAD segments map: SHAVE data/stack windows at `0x2e000000+` (4 windows), config at
  `0x84800000/0x84801000`, main code **RWE** at `0x85000000` (file bytes `0x123344`,
  memsz `0x17fffc0`), DDR at `0x86800000`, pipes at `0x88700000`, IPC rings at `0x94800000+`.
- Embedded source-path strings: `leon/main.c`, `leon/Init.c`, `nn/…/nn_fifo.cpp`,
  `nnActEntry.cpp`, `actShvx_…`, `system/crt/src/stack_protection.c` — Jenkins build path
  `firmware.vpu.client/vpu2/application/vpuFirmware/vpu_fw`.

#### ELF2 (SHAVE application)

- Small ELF32 LE EXEC (SPARC machine id reused for SHAVE), entry `0`, 7 sections:
  `.dyn.text` @ `0x1c000000` (0xd80 B), `.dyn.data` @ `0x1d000000` (0x80 B), `.dyn.bss`,
  symtab with **48 symbols** — names include `SHAVE_APP_TEXT_VMA_ADDRESS`,
  `memcpy_specific65_asm`, `_EP_setheap`, `nn::common_runtime::fifo` (C++).
- It is the **SHAVE DSP payload** loaded at `0x85000000` (`.shaveAppElfs` VMA), dynamically
  relocated by the LEON-side loader; its section-header end (5,952 B) equals its file size
  `0x1740` exactly.

**In short:** the firmware is a custom TLV/ELF container wrapping an **RTEMS-on-LEON control
firmware** (LRT + LNN runtimes, 20 SHAVE core slots, IPC rings for MSS/CSS) plus a small embedded
**SHAVE neural-network application ELF** — versioned `0.0.0`, built 2023-10-31 for Meteor Lake PV2
VPU silicon.

---

## 12. SHAVE Toolchain — MVC_DEPEND

Two subdirectories installed under the Driver Store:

### 12.1 `MVC_DEPEND/bin` — Movidius compiler trio (100,881,176 B)

| DLL | Size | Version | Role |
|---|---:|---|---|
| `moviCompile64.dll` | 65,488,136 | 00.114.11.4207 | SHAVE C/C++ compiler (`libmoviCompile`) |
| `moviLLD64.dll` | 27,904,776 | 3.0.9 | SHAVE linker (`lld` fork) |
| `moviAsm64.dll` | 7,488,264 | 1.13.16 | SHAVE assembler (`moviAsmDll`) |

All expose the same 2-function worker ABI (`process`/`main` + `freeResults`), linked 14.36,
built 2023-09-21, signed by Intel/Sectigo, **no `GUARD_CF`**.

### 12.2 `MVC_DEPEND/lib` — SHAVE target static libraries (5,876,358 B)

Seven `ar` archives (verified `current ar archive`, SHAVE-target object members such as
`shave_malloc.o`, `shave_crtinit.o`, C++ ABI objects in `mlibcxx.a`):

| Archive | Size | Contents |
|---|---:|---|
| `mlibcxx.a` | 4,306,742 | SHAVE C++ runtime/ABI (largest) |
| `mlibm.a` | 922,244 | math library |
| `mlibc_lite.a` | 294,828 | minimal C library (Newlib-derived, see §14) |
| `mlibcrt.a` | 281,228 | C runtime |
| `mlibc_lite_ext.a` | 59,322 | lite extensions |
| `mlibcrt_mini.a` | 8,500 | minimal CRT |
| `mlibVecUtils.a` | 3,492 | vector intrinsics utils |

These are the **link-time target libraries** the `movi*` toolchain uses when the driver
JIT-compiles SHAVE kernels on the client machine (on-device compilation, no precompiled binary
dependency on a separate VPU SDK).

---

## 13. Level Zero Stack

| Component | Version | Role | Destination |
|---|---|---|---|
| `ze_loader.dll` | 1.15.0 | API loader/dispatcher (578 exports), enumerates drivers via `CFGMGR32` | **System32** |
| `ze_tracing_layer.dll` | 1.15.0 | API call tracing (198 exports, `zelTracer*`) | **System32** |
| `ze_validation_layer.dll` | 1.15.0 | Parameter/usage validation (61 exports) | **System32** |
| `npu_level_zero_umd.dll` | 31.0.100.1688 | Intel NPU UMD (46 proc-addr tables: ze/zes/zet) | Driver Store |
| `npu_blob_parser.dll` | 31.0.100.1688 | blob/tensor introspection for L0 modules | Driver Store |

The UMD also pulls the adapter in through **DXCore** (`DXCoreCreateAdapterFactory`) and
**D3DKMT** (`D3DKMTQueryAdapterInfo`), and imports `d3d12.dll` ord 101 — the Level Zero driver is
built atop the same D3D12 adapter discovery machinery.

---

## 14. Third-Party Licenses

`Driver/third-party-programs.txt` — **193,266 bytes, 1,052 lines**, standard Intel TPP header.
**12 license entries** (numbering has a known Intel-format quirk: `9.` appears three times):

| # (line) | License | Maps to |
|---|---|---|
| 1 (L8) | **GPLv3 w/GCC Runtime Library exception** — "GCC C++ / libstdc++" | SHAVE C++ ABI (`mlibcxx.a`), GCC-built objects |
| 2 (L246) | **GCC Runtime Library Exception 3.1** to GPL 3.0 | GCC runtime libraries |
| 3 (L503) | **ISC License** | small permissive components (e.g. libucl-style/hashers) |
| 4 (L514) | **BSD 3-clause "New"** | third-party code in compiler stack |
| 5 (L533) | **Newlib Licenses** | `mlibc_lite*` — Newlib-derived C library for SHAVE |
| 6 (L540) | **RTEMS GPL2 with exception** | **the firmware RTOS** (§11 `.rtemsroset` sections) |
| 7 (L679) | **MIT License** | misc. (e.g. fp/cJSON-class components) |
| 8 (L696) | **BSD 2-clause "Simplified"** | misc. |
| 9 (L708) | **GNU LGPL v2.1 or later** | e.g. libelf-class components |
| 9 (L900) *(dup)* | **Apache License 2.0** | oneTBB?/Level Zero loader & layers, LLVM-derived bits |
| 9 (L973) *(dup)* | **Apache License 2.0 with Exceptions** | oneTBB 2021.2 (Apache-2.0 WITH LLVM-exception style terms) |
| 10 (L1038) | **University of Illinois/NCSA Open Source License** | LLVM-derived code (LLD fork `moviLLD64`, vecz) |

The license list corroborates the binary analysis: **RTEMS + Newlib** = firmware OS/C-library;
**GCC runtime exceptions** = GCC-built SHAVE libs; **NCSA/Apache** = LLVM-family toolchain
(moviLLD, DXIL vecz); **Apache+exceptions** = oneTBB / Level Zero components.

---

## 15. Hardware & OS Support Matrix

### 15.1 Hardware

| Item | Value |
|---|---|
| PCI device IDs | `VEN_8086&DEV_7D1D` (Meteor Lake NPU), `VEN_8086&DEV_AD1D` (sibling SKU) |
| Device class | `ComputeAccelerator` `{F01A9D53-3FF6-48D2-9F97-C8A7004BE10C}` |
| User-visible name | **"Intel(R) AI Boost"** (Win11) / "Intel(R) Reserved Device" (Win10) |
| Extension-INF targets | 5 Lenovo subsystem IDs: `SUBSYS_50DD17AA`, `50E317AA`, `223417AA`, `223517AA`, `232617AA` (ODM: Wistron) |
| Silicon | Meteor Lake client (`MTL_CLIENT_SILICON`), firmware Gen27 |
| Interrupts | MSI, up to 8 vectors, `MSISupported=1` |

### 15.2 Operating systems

| OS decoration | Build range | Feature tier |
|---|---|---|
| `NTamd64.10.0...18362` | Windows 10 1903 → (pre-22000) | **Minimal:** D3D12 UMD + KMD + firmware |
| `NTamd64.10.0...22000` | Windows 11 21H2 | **+ Level Zero** (+ loader/layers in System32, + graph compiler) |
| `NTamd64.10.0...22621` | Windows 11 22H2 | **+ full compiler stack** (DXIL frontend, DML compiler, SHAVE toolchain) |

All three: `FeatureScore = FF`, WHQL catalog targets `_v100_X64_Vb/_21H2/_22H2`.

---

## 16. Caveats & Unresolved Items

1. **Install directory is dynamic.** All `[Files]` destinations go through
   `{code:GetExtractPath}` (an Inno Pascal `[Code]` function). The extracted tree here mirrors
   the payload, but the absolute runtime path (e.g. `{tmp}`, `{app}`, or a versioned directory)
   cannot be determined from the archive alone — it lives in the compressed `[Code]` script.
2. **Auto-execution of `Silentinstall.bat` not statically confirmed.** innoextract 1.9 does not
   emit the `[Run]` section, and the `[Code]` script is compressed. Evidence (bat at payload root,
   `%~dp0`-relative logic, `pnputil /install`) strongly implies a wrapper runs it, but this was
   not proven from the binary.
3. **`Silentinstall.bat` failure path is silent** for any `pnputil` exit code other than
   0/259/1641/3010 (no error message printed).
4. **ETW Analytic channel comment/value mismatch** (`LoggingMaxSize = 1048985600` annotated
   "; 100 MB" — actually ≈1000 MB). All ETW channels ship disabled.
5. **`ExtensionId` GUID** in `ivdextn64.inf` still carries the template instruction comment;
   treated as Intel-template value (Lenovo/OEM customization surface).
6. **Deeper RE not performed on this pass:** no disassembly-level reversing of `npu_kmd.sys` or
   the compiler DLLs (out of scope for installed-software documentation; installer-level
   decompilation lives in the companion document / `decompiled/` directory).

---

*End of installed-software documentation. Machine-readable PE data: `/tmp/opencode/pe_analysis.json`.
Raw payload: `/home/asdf/projects/r2gvp04w-re/extracted/`. Installer RE: `r2gvp04w_v2_FULL_DOCUMENTATION.md`.*
