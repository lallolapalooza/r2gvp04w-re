This is a reverse engineering project for the r2gvp04w driver which has an intel NPU SHAVE compiler. The SHAVE compiler implements a custom ISA and is based on upstream LLVM. npunlock requires 
this driver. I think it's not very useful due to its low power of 50 gflops, and the fully open source toolchain for the NPU MAC arrays work fine and the MAC arrays can achieve up to several TFLOPS around 18 or more.

## Session archives

The agent sessions behind this work are checked in under [`session/`](session/):
`omp-session-archive.zip` (main export, with viewer) and `omp-npu-chats.zip`
(earlier archives grouped by topic). They are mirrored as release assets on
[`omp-session-archive`](https://github.com/lallolapalooza/r2gvp04w-re/releases/tag/omp-session-archive).
