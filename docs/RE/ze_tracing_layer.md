# ze_tracing_layer.dll — Reverse Engineering Report (bonus target)

## Identity
| Field | Value |
|---|---|
| Size | 508,168 bytes |
| PDB | `C:\project\build\bin\Release\ze_tracing_layer.pdb` |
| Source | `C:\project\source\layers\tracing\tracing_imp.cpp` (upstream oneAPI layer) |
| Functions | 1334 total, 1334 OK, 0 failed (25 s) |
| Exports | 201 (5 tracer-control + ~196 proc-addr-table entries) |

## Role
**Level Zero tracing layer** — callback-based API interception layer loaded by
`ze_loader.dll` when `ZE_ENABLE_TRACING_LAYER` is set. Records prologue/epilogue
callbacks around every L0 API call (used by tools like VTune/ITT for API timing).

## Export API (201)
- Tracer control: `zelTracerCreate`, `zelTracerDestroy`, `zelTracerSetEnabled`,
  `zelTracerSetPrologues`, `zelTracerSetEpilogues`
- `zelGetTracerApiProcAddrTable`
- Plus a full set of L0 proc-addr tables (`zeGet*ProcAddrTable` incl. Exp tables:
  `zeGetDeviceExp`, `zeGetDriverExp`, `zeGetFabricEdgeExp`, `zeGetFabricVertexExp`) —
  the wrapped/duplicating tables the loader substitutes into the dispatch chain.
- Per-API registration: `zelTracerCommandListAppend{Barrier,LaunchKernel,ImageCopy,...}RegisterCallback`
  — one register-callback export per traceable API.
- TLS callbacks (`tls_callback_0/1`) for CRT init.

## Architecture (RTTI)
Classes `tracing_layer::APITracer`, `APITracerImp`, `APITracerContext`,
`APITracerContextImp`, handle type `zel_tracer_handle_t`.
Threading: `FreeLibraryWhenCallbackReturns`, `WaitForThreadpoolTimerCallbacks` —
safe teardown while callbacks are in flight.

## Status
Bonus target. Fully decompiled 1334/1334. Evidence: `re_decompiled/ze_tracing_layer.dll/`.
