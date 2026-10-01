# npu_level_zero_umd.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 1,227,016 bytes |
| Timestamp | 1698793214 (2023-10-31) |
| PDB | `C:\Temp\oizlkabvmc\build\x64\Source\Umd\LevelZero\Release\npu_level_zero_umd.pdb` |
| Sources | `Source\Umd\LevelZero\{Callbacks\zeCallbacks.h, Compiler\zeGraphCompiler.h, DDI\Core\Functions\ze*Functions.hpp, DDI\Core\Objects\ze*.h, Parsers\zeDeviceBlobParsing.h}` |
| Functions | 3091 total, 3091 OK, 0 failed (71 s) |
| Import DLLs | KERNEL32(117), ADVAPI32(8), wer(5), SETUPAPI(4), **d3d12.dll(1), ext-ms-win-dxcore-l1-1-0(1), api-ms-win-dx-d3dkmt-l1-1-0(1)**, ole32, VERSION |

## Role
**Level Zero (L0) user-mode driver** — the oneAPI Level Zero DDI implementation for Intel NPU.
This is what the `ze_loader.dll` dispatches into for NPU devices. Single-entry style: 46
`zeGet*/zesGet*/zetGet*ProcAddrTable` exports (one per DDI table).

## Export API — 46 proc-addr-table exports
Three families:
- **`ze*` (core, 17 tables)**: VirtualMem, PhysicalMem, Mem, Sampler, Kernel, Module,
  ModuleBuildLog, Image, EventPool, Event, Fence, CommandList, CommandQueue, Context,
  Device, Driver, Global
- **`zes*` (sysman / device management, 17 tables)**: Ras, Psu, Fan, Led, Temperature,
  Frequency, Engine, Power, PerformanceFactor, Memory, Firmware, FabricPort, Diagnostics,
  Scheduler, Standby, Driver, Device
- **`zet*` (tools / tracing / metrics, 12 tables)**: TracerExp, MetricStreamer,
  MetricQueryPool, MetricQuery, MetricGroup, Metric, Debug, plus core-object tables
  (CommandList, Context, Device, Kernel, Module)

Each `zeGetXProcAddrTable` fills a struct of function pointers (zero-fill loop pattern
confirmed in `04_export_bodies.c`).

## Architecture (RTTI-derived)
- Same **SHASTA AdapterTraits template pattern** as the D3D12 UMD, namespace `ZE`:
  `ZE::KMB/LNL/MTL::AdapterTraits`
- `graph_compiler<AdapterTraits>` + `graph_compiler_base` + `graph_compiler_profiling`
  — compiles Level Zero modules/kernels to NPU graphs (backs `zeModuleBuildLog`,
  `zeGraphCompiler.h`)
- `SHASTA::transport<AdapterTraits, cmd_barrier/cmd_fence_signal, ...>` — command
  transport layer issuing barrier/fence commands to the driver (KMD interface)
- Error UX strings: `"Host blob parser error"`, `"Check compiler log"` — module build
  failures surface blob-parser and compiler-log errors
- Device discovery: SETUPAPI + DXCore/D3DKMT imports (device enumeration alongside GPU)

## Distinction vs npu_d3d12_umd
Both share the SHASTA template framework, WER reporting, and adapter traits (KMB/LNL/MTL),
but target different APIs: D3D12 MetaCommand DDI vs Level Zero compute/sysman/tools DDI.

## Status
Fully decompiled (3091/3091, 0 failures — fastest of the set).
Evidence: `re_decompiled/npu_level_zero_umd.dll/`.
