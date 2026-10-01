# ze_loader.dll — Reverse Engineering Report (bonus target)

## Identity
| Field | Value |
|---|---|
| Size | 469,256 bytes |
| PDB | `C:\project\build\bin\Release\ze_loader.pdb` (upstream Intel oneAPI layout, **not** the oizlkabvmc build tree) |
| Functions | 1939 total, 1939 OK, 0 failed (23 s) |
| Exports | **579** (the full flattened Level Zero API surface) |

## Role
**Official Intel Level Zero loader** — the dispatch library applications link against.
Resolves the real driver (`npu_level_zero_umd.dll`) and optional interception layers,
then exposes the entire `ze*` API directly to the application.

Note: this is the generic upstream oneAPI loader shipped inside the NPU driver package
(PDB under `C:\project\`), not NPU-specific code.

## Export API (579)
Full Level Zero API re-exported as loader thunks: `zeCommandListAppend{Barrier,LaunchKernel,...}`,
`zeMemAlloc`, `zeModuleBuild`, etc. — the loader forwards each call through the
layer chain (validation → tracing → driver).

## Layering / dispatch evidence (strings)
- Environment toggles: `ZE_ENABLE_LOADER_DEBUG_TRACE`, `ZE_ENABLE_LOADER_INTERCEPT`,
  `ZE_ENABLE_TRACING_LAYER`, `ZE_ENABLE_VALIDATION_LAYER`
- Registry: `Software\Intel\oneAPI\LevelZero\`, value `LevelZeroLoaderPath`
- Chain-building errors prove order: `"...function pointer null with validation layer"`,
  `"...with tracing layer"`, `"Free Library Failed for ze_tracing_layer with ..."` —
  loader stacks **validation → tracing → driver**
- Queries driver via `zeDriverGetApiVersion`; helper exports `zelLoaderGetVersion`,
  `zelLoaderDriverCheck`, `zelGetTracerApiProcAddrTable` (tracing hook-in)
- Code-signing manifest + `Intel Corporation` cert strings embedded

## Status
Bonus target. Fully decompiled 1939/1939. Evidence: `re_decompiled/ze_loader.dll/`.
