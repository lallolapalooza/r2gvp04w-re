# Reverse-engineering status: `r2gvp04w_v2.exe` binaries

State of the 30-file Lenovo/Intel NPU installer package (`r2gvp04w_v2.exe` = 31.0.100.1688)
as extracted under `extracted/code$GetExtractPath$/`.

## RE coverage (2026-09-27)

**14 binaries fully decompiled with Ghidra 12.1 headless and documented.**
All outputs live under `re_decompiled/<name>/` (`decompiled_all.c`, `03_function_index.tsv`,
`04_export_bodies.c`, `00_summary.txt`); per-binary reports under [`docs/RE/`](RE/).

| Binary | Functions (ok / fail) | Report |
|---|---|---|
| `npu_dml_compiler.dll` | 194,261 / 112 | [RE/npu_dml_compiler.md](RE/npu_dml_compiler.md) |
| `vpux_driver_compiler.dll` | 66,787 / 91 | [RE/vpux_driver_compiler.md](RE/vpux_driver_compiler.md) |
| `moviCompile64.dll` (SHAVE clang) | 82,517 / 32 | [RE/moviCompile64.md](RE/moviCompile64.md) |
| `moviLLD64.dll` (LLD fork) | 43,892 / 11 | [RE/moviLLD64.md](RE/moviLLD64.md) |
| `moviAsm64.dll` (SHAVE assembler) | 8,828 / 19 | [RE/moviAsm64.md](RE/moviAsm64.md) |
| `shavedxilvecz64.dll` (vecz vectorizer) | 59,036 / 6 | [RE/shavedxilvecz64.md](RE/shavedxilvecz64.md) |
| `npu_dxil_frontend.dll` (DXIL→LLVM) | 12,720 / 8 | [RE/npu_dxil_frontend.md](RE/npu_dxil_frontend.md) |
| `npu_d3d12_umd.dll` | 2,915 / 3 | [RE/npu_d3d12_umd.md](RE/npu_d3d12_umd.md) |
| `npu_level_zero_umd.dll` | 3,091 / 0 | [RE/npu_level_zero_umd.md](RE/npu_level_zero_umd.md) |
| `npu_blob_parser.dll` | 4,096 / 0 | [RE/npu_blob_parser.md](RE/npu_blob_parser.md) |
| `npu_kmd.sys` (kernel driver) | 1,122 / 0 | [RE/npu_kmd.md](RE/npu_kmd.md) |
| `ze_loader.dll` (upstream L0 loader) | 1,939 / 0 | [RE/ze_loader.md](RE/ze_loader.md) |
| `ze_tracing_layer.dll` | 1,334 / 0 | [RE/ze_tracing_layer.md](RE/ze_tracing_layer.md) |
| `ze_validation_layer.dll` | 1,177 / 0 | [RE/ze_validation_layer.md](RE/ze_validation_layer.md) |

**Total: ~485,000 functions decompiled, 484,760 OK (99.9% success), 406 failures.**
~320 MB of proprietary machine code — instructions disassembled and decompiled.

## Not RE'd (remaining)

| Item | State |
|---|---|
| installer stub (`r2gvp04w_v2.exe` itself) | only extracted; deploy logic not analyzed |
| firmware **payload** inside `FirmwareVpuGen27.bin` | container reimplemented; the LEON/RTEMS code image inside not RE'd |
| `tbb12.dll` / `tbbmalloc.dll` | upstream Intel TBB (open source) — skipped deliberately |

## Still true from the earlier pass

- Linux ships only precompiled Intel SHAVE ELFs; no local new-code emission
- Open-source reading covered the Linux twins (`openvinotoolkit/npu_compiler` @ `0b38f7d4`, `ivpu` kernel source)
- Firmware container reimplemented from first principles in `linux-reimpl/vpu_fw_verify.c`

Companion docs: [`LINUX_PORT_REIMPLEMENTATION.md`](LINUX_PORT_REIMPLEMENTATION.md), per-binary reports in [`RE/`](RE/)
