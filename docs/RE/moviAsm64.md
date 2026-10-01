# moviAsm64.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 35,389,696 bytes (in `MVC_DEPEND/bin/`) |
| Functions | 8847 total, 8828 OK, 19 failed (1156 s) |
| Import DLLs | KERNEL32.dll only (102) |
| Exports | `freeResults` (ord 1), `process` (ord 2) — plus TLS callbacks & entry |

## Role
**Movidius SHAVE assembler** — self-identifies as
`"Movidius Assembler (moviAsm) v…"`, usage string:
`Usage: moviAsm [<options>] <inputFile> [-o <outputFile>]`.
Assembles SHAVE/Myriad assembly to object code; shipped as a DLL so the compiler stack
(moviCompile64 / npu_dxil_frontend) can invoke it in-process, while also supporting CLI use.

## Export API (2 functional exports)
| Export | Body |
|---|---|
| `process` @ 0x20270 | 65-byte thunk → `FUN_18002c8e0()` (the real driver entry) |
| `freeResults` @ 0x20260 | clears the global result list under mutex (`FUN_180615fe4` lock; doubly-linked-list head `DAT_180705300/08` reset; unlock) |

Both reconstructed in `04_export_bodies.c`. `entry`/`tls_callback_0/1` are CRT boilerplate
(security cookie, TLS callback walk with `guard_dispatch_icall`).

## Architecture (RTTI-derived)
- Classes: `Assembler`, **`Myriad2Assembler`** (the SHAVE ISA implementation)
- Structured diagnostics: `Log::ERR_INVALID_OPCODE`, `ERR_INVALID_SYMBOL`,
  `ERR_DUPLICATE_SYMBOL_DEFINITION`, `ERR_SYMBOL_NOT_DEFINED`,
  `ERR_SYMBOLS_FROM_DIFFERENT_SECTIONS`, `ERR_INVALID_RELOCBASE_ARGUMNET` (sic),
  `ERR_UNKNOWN_PREPROCESSOR_DIRECTIVE`, `ERR_INVALID_PREPREOCESSOR_DIRECTIVE` (sic),
  `WARN_DEPRECATED_DIRECTIVE`, `NOTE_SYMBOL` — a full typed diagnostic hierarchy
- Version token `RAW_MOVIASM_VERSION`

## CLI surface (string evidence)
- `-D <symbolName>[:<symbolValue>]` — preprocessor symbol define
- `-o:[folder|file]` output spec; `-o` with multi-output restriction
- `-g`, `-keepOutput`, `-list`, `-noCompressedNOPs`, `-noFinalSlotCompression`,
  `-noSlotAllPromo`, `-noSPrefixing`, `-relocBase`
- Log prefixes: `moviAsm: ERROR/INFO/NOTE/WARNING:`
- Note: binary embeds `moviAsmDll.dll` string (internal module name)

## Status
Decompiled 8828/8847 (19 failures). Note: `04_export_bodies.c` contains CRT `process`
overloads too (export name `process` collides with `__crt_stdio_*::process` symbols —
the authoritative thunk is Function 56 @ 0x20270).
Evidence: `re_decompiled/moviAsm64/`.
