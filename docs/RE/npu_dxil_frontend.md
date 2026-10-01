# npu_dxil_frontend.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 7,057,672 bytes |
| Timestamp | 1698793214 (2023-10-31) |
| PDB | `C:\Temp\oizlkabvmc\build\x64\Source\dxil_frontend\npu_dxil_frontend\src\...\npu_dxil_frontend.pdb` |
| Sources | `Source\dxil_frontend\src\{dxil_common\ProcessRootSignature.cpp, lib\dxil_frontend\{DXILLowering.cpp, barriers.cpp, SplitBarriersPass.cpp, GroupDispatcherLoop.cpp, warp_lowering.cpp, warps.cpp, lower_x86.cpp}, lib\npu_dxil_frontend\MoviToolsCompilePipeline.cpp}` |
| Functions | 12,728 total, 12,720 OK, 8 failed (1246 s) |
| Import DLLs | KERNEL32(150), ADVAPI32(3), USER32(1) |

## Role
**DXIL → NPU lowering frontend**: an embedded **LLVM toolchain** that takes DirectX
Shader Model 6 DXIL (compute shaders) and lowers it through Movidius-specific passes
toward the moviCompile/MoviTools pipeline for NPU execution. This is how D3D12 compute
shaders (and DirectML shaders) get compiled for the Intel NPU.

## Export (1)
`OpenCompiler12` @ 0x1c8a0 — versioned compiler-service entry:
- validates an out-param vtable slot (`*(p+0x18)`), sets errno `0x16` (EINVAL) via
  `FUN_180522560` if absent
- fills 9 function pointers (0x18…0x50) with compiler API implementations — a
  `ICompiler12`-style vtable handed to the caller (the D3D12 UMD's shader compiler).
Full body in `04_export_bodies.c`.

## Embedded LLVM (RTTI + strings)
- Full LLVM `cl::opt` option-parser machinery (`cl::opt<>`, `basic_parser<>`, `OptionValue`)
- Target-agnostic infrastructure: `TargetTransformInfo`, `V`-models via
  `MoviTTIImpl` (movi target transform info), `TargetArch/TargetWidth`
- LLVM pass classes present: `DXILLoweringPass`, `DXILVeczLoweringPass`
- **VECZ** = vectorizer: `__vecz_b_*` / `__vecz_[GLOB]*` function attribute handling,
  `VeczAnalysisPass`, `VeczInlineControlPass` (options documented in strings)
- `SwrJit` namespace passes: `Barriers`, `WarpLowering`, `Warps`, `SplitBarriersPass`,
  `SizeWarpSpillBufferPass` — SWR = software rasterizer-style warp emulation for NPU

## Lowering pipeline (source-path evidence)
1. `ProcessRootSignature.cpp` — parse D3D12 root signature
2. `DXILLowering.cpp` — DXIL ops → internal IR (`EmitBinaryOp`, `EmitLoad`,
   `EmitScalarLoads/Stores`, `EmitSimpleOp`, `addPayloadVar`)
3. `warps.cpp` / `warp_lowering.cpp` — logical warp → NPU lane mapping
4. `barriers.cpp` / `SplitBarriersPass.cpp` — barrier insertion/fixup
   (`barriers.{pre_,}fixup_{fills,phis}`, `barriers.splitblocks`)
5. `GroupDispatcherLoop.cpp` — workgroup dispatch loop generation
6. `lower_x86.cpp` — x86-specific lowering (compile-x86 path)
7. `MoviToolsCompilePipeline.cpp` — hands off to moviTools

## Cross-DLL contract
Strings prove it **calls moviCompile64.dll**:
- `"Asks moviCompile to generate stack overflow instrumentation; i18 == -3 on overflow."`
- `"Asks moviCompile to generate stack usage instrumentation."`
Option group: `"DXIL Frontend Options"`, `"Control behavior the moviTools pipeline."`
Debug leftovers: `C:\Intel\Rasty\DebugOutput`.

## Status
Decompiled 12,720/12,728 (8 failures — LLVM template giants; non-critical).
Evidence: `re_decompiled/npu_dxil_frontend/`.
