# npu_blob_parser.dll — Reverse Engineering Report

## Identity
| Field | Value |
|---|---|
| Size | 1,297,672 bytes |
| SHA256 | (see `re_baseline.txt`) |
| Timestamp | 1698793214 (2023-10-31) |
| PDB | `C:\Temp\oizlkabvmc\build\x64\Source\blobparser\Release\npu_blob_parser.pdb` |
| Sources (from debug strs) | `Source\blobparser\src\bp_parser.cpp`, `Source\blobparser\src\bp_parser_impl_mtl.cpp` |
| Functions | 4096 total, 4096 decompiled OK, 0 failed (169 s) |
| Imports | KERNEL32.dll only (134 imports) |

## Role
Parses **compiled NPU inference blobs** ("MappedInference"/"HostParsedInference") and exposes
tensor metadata + address-patch lists to the runtime. This is the component that answers
"what inputs/outputs does this blob need and where do its tensors live in device memory".

## Export API (11 exports, C ABI)
| # | Export | Purpose (from decompilation) |
|---|---|---|
| 1 | `bpParserCreate` | Allocates/initializes parser object (`FUN_180007700`: zero-fills ~0x130-byte object, constructs two 0x38-byte list heads) |
| 2 | `bpParserDestroy` | Teardown |
| 3 | `bpParserDumpBuffer` | Human-readable dump of parsed blob |
| 4 | `bpParserGetBuffer` | Returns pointer into the blob buffer |
| 5 | `bpParserGetInputCount` | Input tensor count |
| 6 | `bpParserGetInputTensorDesc` | Input tensor descriptor (v1) |
| 7 | `bpParserGetInputTensorDesc2` | Input tensor descriptor (v2, extended) |
| 8 | `bpParserGetOutputCount` | Output tensor count |
| 9 | `bpParserGetOutputTensorDesc` | Output tensor descriptor (v1) |
| 10 | `bpParserGetOutputTensorDesc2` | Output tensor descriptor (v2, extended) |
| 11 | `bpParserMergeInferences` | Merge multiple inferences (`bp_merged_inference_t`) |

## Internal architecture (from RTTI + decompilation)
- Namespace `bp`, implementation class `bp::bp_blob_parser_impl` / `bp::MTL::bp_parser_impl`
  (`MTL` = Meteor Lake platform trait, consistent with the SHASTA AdapterTraits pattern
  used across the UMDs).
- `bp::tensor_desc_t` has two flavors: `device_tensor` and `network_tensor` — device-level
  buffers vs per-network tensors.
- `bp::MTL::bp_parser_impl::get_address_patches` — walks patch entries (`0x21c…0x3c0` sites),
  binding host addresses into the blob before execution.
- Error enum `bp::__bp_result_t`: `BP_RESULT_ERROR_INVALID_ARGUMENT`,
  `BP_RESULT_ERROR_WRONG_INPUT_FORMAT`, `BP_RESULT_ERROR_LONG_NODE_NAME`,
  `BP_RESULT_ERROR_INTERNAL_ERROR`.
- Ties to the NPU NN runtime: RTTI shows `MvNCIInferenceMapper`, `MvNCINetwork`,
  `mvnci::nn::helper::ReferenceCounted` — links against the Myriad NCIE host API concepts.

## Diagnostic strings (behavioral evidence)
- `"This blob was built for the device %s and the revision %s"` — blob/device versioning check
- `"Buffer overflow in %s tensor of DMA[%u] on engine %u"` — DMA-engine tensor bounds check
- `"HostParsedInference: 0x…"`, `"MappedInference:"` — two inference encoding modes
- `".feederDescriptors_: skipped as it is used in inference_player"`
- Dump fields: `.tensor_mode`, `.tensor_size0/1`, `.tensor_start`, `shave_stacks`

## Assessment
Small, clean, self-contained parser. Fully understood; all 4096 functions decompiled
with zero failures. Evidence: `re_decompiled/npu_blob_parser/`
(`decompiled_all.c`, `03_function_index.tsv`, `04_export_bodies.c`).
