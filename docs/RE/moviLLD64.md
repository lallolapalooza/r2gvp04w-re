# moviLLD64.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 27,904,776 bytes |
| PDB | (build-tree PDB, strings only show `C:\Temp` litter) |
| Import DLLs | KERNEL32, ADVAPI32 |
| Functions | 43,903 total, 43,892 OK, 11 failed (2707 s) |
| Exports | 2 functional: `freeResults`, `process` (same in-process-call convention as moviAsm64) |

## Role
**Movidius LLVM-based linker (LLD).** Self-identifies as a fork of **LLVM lld**:
- `"based on LLD"`, `"-bitcode_bundle unsupported because LLD wasn't built with libxar"`
- lld diagnostic templates verbatim: `^duplicate symbol: ... >>> defined at (\S+):(\d+)`,
  `^undefined symbol: >>> referenced by (.*):`, `>>> ignoring /lldmap`, references to
  `lld.llvm.org` URLs (`start-stop-gc`, `missingkeyfunction`)
- ELF/Mach-O/COFF driver internals: `macho::lld::LinkEditSection` RTTI,
  `<segment> <section> <boundary>` section-script syntax, `--gc-sections`, `-z nostart-stop-gc`

Links the SHAVE object files produced by `moviAsm64` (and the LLVM objects from
moviCompile/dxil_frontend) into final NPU executables/blobs.

## Export API (2 functional)
| Export | Body |
|---|---|
| `process` @ 0x1aa0... (`0x180061aa0`) | Drive one link invocation (in-process entry, same pattern as moviAsm64's) |
| `freeResults` @ 0x180061a90 | Global mutex (`DAT_181996750`), walks a **result linked list** (`DAT_181996740` head, `DAT_181996748` count), frees each node's heap buffer (allocator cookie check `0xfff` guard), resets list |

Both reconstructed in `04_export_bodies.c`.

## Architecture notes
- MSVC-CRT-free (imports only KERNEL32/ADVAPI32) — statically linked CRT, like the rest
  of the MVC_DEPEND toolchain
- Largest functions: `FUN_1814a4ef0` (53,665 B), `FUN_180b0d480` (51,689 B),
  `FUN_181333f90` (47,443 B) — the ELF/writer back-ends
- Diagnostics cover duplicate/undefined symbol reporting with file:line attribution —
  i.e. it retains line-table info from the assembler

## Status
Decompiled 43,892/43,903 (11 failures). Sibling of `moviAsm64` in `MVC_DEPEND/bin/`
(same export convention: `process`/`freeResults`).
Evidence: `re_decompiled/moviLLD64/`.
