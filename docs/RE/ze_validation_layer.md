# ze_validation_layer.dll — Reverse Engineering Report (bonus target)

## Identity
| Field | Value |
|---|---|
| Size | 304,904 bytes |
| PDB | `C:\project\build\bin\Release\ze_validation_layer.pdb` (upstream oneAPI layer) |
| Functions | 1177 total, 1177 OK, 0 failed (15 s) |
| Exports | 62 (proc-addr tables only) |

## Role
**Level Zero validation layer** — parameter/handle checking layer loaded by
`ze_loader.dll` when `ZE_ENABLE_VALIDATION_LAYER` is set. Wraps every L0 entry point
to validate arguments before passing calls down the chain.

## Export API (62)
62 `zeGet*/zesGet*/zetGet*ProcAddrTable` exports (including `*Exp` tables:
DeviceExp, DriverExp, FabricEdgeExp, FabricVertexExp, ImageExp, KernelExp, MemExp) —
these replace the driver's tables with validation-wrapped function pointers.

## Architecture (RTTI) — validation suites
| Class | Concern |
|---|---|
| `validation_layer::ZEParameterValidation` | argument/parameter checks (core `ze*`) |
| `validation_layer::ZEHandleLifetimeValidation` | use-after-free / invalid handle detection |
| `validation_layer::ZEValidationEntryPoints` | entry-point dispatch table |
| `ZESParameterValidation`, `ZESHandleLifetimeValidation`, `ZESValidationEntryPoints` | same for sysman `zes*` |
| `ZETParameterValidation`, `ZETHandleLifetimeValidation`, `ZETValidationEntryPoints` | same for tools `zet*` |

Largest functions: `FUN_1800012c0` (3408 bytes — likely the table-swapping setup),
plus per-family validators. Debug output helper: `write_double_translated_ansi_nolock`.

## Status
Bonus target. Fully decompiled 1177/1177. Evidence: `re_decompiled/ze_validation_layer.dll/`.
