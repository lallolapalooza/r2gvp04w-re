# npu_dml_compiler.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 108,934,920 bytes (largest target) |
| Timestamp | 1695306479 (2023-09-21) |
| PDB | `C:\Temp\oizlkabvmc\build\x64\Source\dml_compiler\npu_dml_compiler\Release\npu_dml_compiler.pdb` |
| Sources | `C:\Intel\VPU\dml_compiler\`, built from `...\dml_compiler\vpux-dml\src\vpux-dml\` (embeds the vpux compiler) |
| Import DLLs | KERNEL32, USER32, SHELL32, ole32, ADVAPI32, SHLWAPI |
| Functions | **194,373** total, 194,261 OK, 112 failed (8996 s) |

## Role
**DirectML metacommand compiler for Intel NPU** — takes D3D12 MetaCommand
descriptions (from `npu_d3d12_umd`'s `D3D12MetaCommandCompiler`) and compiles them
into NPU kernel submissions. Built on the **vpux compiler stack** (paths show it links
`vpux-dml`, the DirectML-on-VPU bridge) — this is why its function corpus overlaps
heavily with `vpux_driver_compiler` (top functions nearly identical sizes, e.g.
668,948 vs 668,965 bytes).

## Export API (20 exports, C ABI)
### MetaCommand lifecycle (matches `npu_d3d12_umd`'s call sites)
`CreateMetaCommandCompiler`, `DestroyMetaCommandCompiler`, `QueryMetaCommand`,
`CreateMetaCommandPlan`, `GetRequiredResourceSize`

### Composer (execution-graph builder)
`ComposerAllocate`, `ComposerFree`, `ComposerReset`, `ComposerCompose`,
`ComposerAddBarrier`, `ComposerAddCopyBuffer`, `ComposerAddDispatch`,
`ComposerAddMarker`, `ComposerAddMetacommandInit`, `ComposerAddMetacommandExec`,
`ComposerReadyKernel`, `CompileKernel`

Plus `entry` + 2 TLS callbacks.

## Architecture (string/RTTI evidence)
- `CMVC::typed_metacommand_factory<MVC::metacommand_quantized_matrix_multiply_t>::CreateMetaCommandFromPlan`
  — typed metacommand factories (quantized matmul is a first-class NPU op)
- Kernel orchestration entities: `ActKernelRange`, `ActKernelInvocation`, `ActKernelTask`
  (+count fields) — DML-style activation-kernel ranges piped into composer dispatches
- Tensor plumbing: `ActivationParameterTensor{,Desc,Layout,Requirements,Resource}`
- Multi-cluster tiling: messages about "invalid multi-cluster strategy" for
  activation/weights/output/instruction-list tensors — NPU cluster distribution logic
- Kernel splitting: `"Split kernel into {1} small kernels"`, subgraph replacement with
  `newPerm` — graph partitioning for NPU execution
- vpux dialect types present: `vpux/compiler/dialect/{IE,VPU}/...`, `vpucostmodel`
  (cost-model driven scheduling)

## Status
Decompiled 194,261/194,373 (112 failures — 0.06%, LLVM/MLIR template giants).
Evidence: `re_decompiled/dml/` (`decompiled_all.c` ≈ 1 GB class, `04_export_bodies.c`).
