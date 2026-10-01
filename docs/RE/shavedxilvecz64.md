# shavedxilvecz64.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 18,459,912 bytes |
| PDB | `C:\Jenkins\workspace\build-windows12e88409\build\vecz\RelWithDebInfo\...\shavedxilvecz64.pdb` |
| Sources | `...\src\SHAVEComputeAorta\external\ComputeAorta\modules\vecz\source\*` |
| Import DLLs | KERNEL32, ADVAPI32, MSVCP140/VCRUNTIME140 (VCRuntime — not static CRT), 11 api-ms-win-crt-* |
| Functions | 59,042 total, 59,036 OK, 6 failed (2341 s) |
| Exports | 2 functional: `runDxilVeczPass`, `releaseDxilVeczBuffer` |

## Role
**VECZ — the SHAVE/Myriad vectorizer.** This is the "Vecz" component of the
**ComputeAorta** compiler stack (Movidius/Intel's SHAVE compute toolchain). It
vectorizes scalar DXIL/LLVM IR loops into SHAVE SIMD operations. The name
"shavedxilvecz" = *SHAVE DXIL vectorizer*.

Called from `npu_dxil_frontend`'s MoviTools pipeline (which has `DXILVeczLoweringPass`
and `VeczAnalysisPass` as its in-process client side).

## Export API (2 functional)
| Export | Body |
|---|---|
| `runDxilVeczPass` @ 0x59f70 | Entry: runs a vecz vectorization pass over an IR buffer |
| `releaseDxilVeczBuffer` @ 0xcaf0 | Frees a vecz result buffer: takes a global mutex (`_Mtx_lock(DAT_1810aa460)`), looks up the buffer in a **global hash table** (`DAT_1810aa4d8` head, bucket array, mask `DAT_1810aa500`), unlinks node, frees allocation |

Both reconstructed in `04_export_bodies.c`.

## Architecture (source-path + string evidence)
Pipeline under `modules/vecz/source/`:
- **Analysis**: `control_flow_analysis.cpp`, `memory_operations.cpp`, `vectorization_context.cpp`, `vector_target_info.cpp`
- **Transforms** (`transform/`): `vectorizer.cpp` (main), `scalarizer.cpp`,
  `builtin_inlining_pass.cpp`, `control_flow_conversion_pass.cpp`,
  `inline_post_vectorization_pass.cpp`, `instantiation_pass.cpp`, `passes.cpp`,
  `simplify_infinite_loop_pass.cpp`, `control_flow_boscc.cpp` (BOSCC = branch-on-scalar-condition-code, a SHAVE predication technique)
- Built as LLVM passes: RTTI shows `BackwardVectorizable`, `BackwardVectorizableButPreventsForwarding`;
  pass-manager strings (`Loop Pass Manager`, `CGSCC`, `Function Pass Manager`)
- Tuning flags (llc-style options embedded): `max interleave factor`, `max number of scalar
  registers`, "Aggressive vectorization", `allow-unroll-and-jam`, `all-scatter-gather-as-masked`,
  `available-load-scan-limit`, horizontal-reduction vectorization
- Largest function `FUN_180bc0380` (52,941 bytes) — the main vectorizer driver

## Status
Decompiled 59,036/59,042 (6 failures — LLVM template giants).
Evidence: `re_decompiled/shavedxilvecz64/`.
