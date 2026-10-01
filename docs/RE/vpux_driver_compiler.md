# vpux_driver_compiler.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 79,593,736 bytes |
| Timestamp | 1695306479 (2023-09-21) |
| PDB | build-tree PDB under `C:\Temp\oizlkabvmc\...` (leaks `C:\Jw\` dev tree) |
| Sources | `C:\jw\applications.ai.vpu-accelerators.vpux-plugin\src\{vpux_al, vpux_compiler}\...` — the **OpenVINO VPU plugin** |
| Import DLLs | KERNEL32, ADVAPI32, SHLWAPI, **tbb12.dll** (parallel compile) |
| Functions | **66,878** total, 66,787 OK, 91 failed (8804 s) |

## Role
**The NPU graph compiler** — the OpenVINO/oneAPI **vpux-plugin** compiled in driver
form. Takes neural-network models (IE/OPENVINO IR ops) and lowers them through MLIR
dialects to VPU/NPU assembly. This is the main "compile my model for the NPU"
component; `npu_dml_compiler` is its DirectML-facing sibling (shares the vpux core).

## Export API (20 exports, C ABI)

### VCL — Vision Compiler Library (driver compiler API,11 exports)
| Export | Purpose |
|---|---|
| `vclCompilerCreate` / `vclCompilerDestroy` | Compiler session lifecycle |
| `vclCompilerGetProperties` | Capabilities query |
| `vclExecutableCreate` / `vclExecutableDestroy` | Compiled-model handle lifecycle |
| `vclExecutableGetSerializableBlob` | Export compiled model to blob (the NPU executable) |
| `vclQueryNetwork` / `vclQueryNetworkCreate` / `vclQueryNetworkDestroy` | "Can this model be compiled?" probe |
| `vclProfilingCreate` / `vclProfilingDestroy` / `vclProfilingGetProperties` | Compile profiling |
| `vclGetDecodedProfilingBuffer` | Decode device profiling counters |
| `vclLogHandleGetString` | Log retrieval |

### Plugin engines (3 exports)
`CreatePluginEngineNPU`, `CreatePluginEngineAUTO`, `CreatePluginEngineBATCH` —
engine factories (NPU-specific / auto-selected / batched compilation modes).

Plus `entry` + 2 TLS callbacks.

## Architecture (source-path + string evidence)
Compiler core (`vpux_compiler/`):
- **MLIR dialect conversion**: `conversion/passes/VPUMI40XX2VPUASM/` — lowers
  **VPUMI40XX** (VPU MLIR intermediate for 40xx-series NPU) → **VPUASM** (VPU assembly)
  dialect; `symbolization_pattern.hpp`
- **Scheduling/tiling**: `core/{feasible_memory_scheduler, tiling, control_edge_generator}.hpp`
  — memory-constrained schedule with control edges
- **Ops**: `dialect/IE/ops_interfaces.hpp` (IE = inference-engine op interface),
  `dialect/VPU/attributes.hpp`, `opset/opset_version.cpp`
- **Cost model**: `thirdparty\vpucostmodel\` (tensors, inference preprocessing)
- **Config**: `vpux_al/src/config/{common,compiler,runtime}.cpp`

Validation strings show full op coverage with NPU-specific layout rules:
`IE::PadOp`, Eltwise/NHWC alignment checks, ZMajor Convolution, Expand/Interpolate/
AffineReshape legalization, `Sparsify/Desparsify` chains, spilling with strategies —
classic VPU graph-compiler diagnostics.

## Relationship to npu_dml_compiler
Both embed the vpux compiler core (near-identical largest-function sizes). Difference:
- `vpux_driver_compiler` = OpenVINO model path (IE ops → VPUASM), VCL API
- `npu_dml_compiler` = DirectML MetaCommand path (DML ops → composer/kernel), Composer API

## Status
Decompiled 66,787/66,878 (91 failures — 0.14%).
Evidence: `re_decompiled/vpux/` (`04_export_bodies.c` includes all 20 exports).
