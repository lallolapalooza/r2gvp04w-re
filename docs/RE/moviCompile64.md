# moviCompile64.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 65,488,136 bytes |
| Timestamp | 1695306479 (2023-09-21) |
| Subsystem | **3 (console)** — DLL with `main` export, i.e. also runnable as a CLI compiler |
| PDB | build-tree PDB (strings show `C:\Temp`, `C:\__clang_tmp` preamble litter) |
| Import DLLs | KERNEL32(157), ADVAPI32(8, CryptGenRandom + registry), VERSION(3) |
| Functions | 82,549 total, 82,517 OK, 32 failed (6034 s) |
| Exports | 3: `main` (0x75720-ish → 0x180075810), `freeResults`, `entry` |

## Role
**The SHAVE C/C++ compiler** — a full **clang/LLVM driver** retargeted to Movidius
SHAVE. This is the compiler half of the MVC_DEPEND toolchain (assembler = `moviAsm64`,
linker = `moviLLD64`).

Evidence of clang identity (embedded option tables verbatim from clang source):
- `<clang-cl compile-only options>`, `<clang driver internal options>`,
  `<clang ignored f group>`, `-force-attribute`, `clang_version` plist key
- **SHAVE-specific option groups**: `<f shave group>`, `<shave features group>`
- Target-CPU strings: **`8-M.Mainline`**, **`8.1-M.Mainline`** (Myriad 8 SHAVE cores)
- References `moviCompile.pdf` §11.2.1 (inline assembly & scheduling docs)
- Loop-vectorization pragma diagnostics (`#pragma clang loop vectorize(assume_safety)`) —
  same vecz flag set as `shavedxilvecz64.dll`

## Export API (3)
| Export | Role |
|---|---|
| `main` @ 0x180075810 | CLI entry when invoked as an executable-like compiler driver |
| `freeResults` @ 0x180075720 | Frees the global result list under mutex (same convention as moviAsm64/moviLLD64) |
| `entry` | CRT entry |

Bodies in `04_export_bodies.c`.

## Architecture notes
- Massive single-purpose compiler: `.text` = 50.7 MB, `.rdata` = 12.4 MB (huge
  diagnostic/option tables), 82,549 functions — largest `FUN_181f2e870` (67,711 B)
- Kernel32 imports include `CreateProcessW`, `CreateJobObjectW`, `AssignProcessToJobObject`,
  `SetProcessAffinityMask` — driver mode spawns/parallels compilation jobs
- Registry + `CryptGenRandom` (clang's random hash seed for AST/file hashing)
- Consumed by `npu_dxil_frontend` (its strings say "Asks moviCompile to generate
  stack overflow/stack usage instrumentation")

## Status
Decompiled 82,517/82,549 (32 failures — LLVM template giants; non-critical).
Evidence: `re_decompiled/movicomp/` (dir named for the job; binary = `moviCompile64.dll`).
