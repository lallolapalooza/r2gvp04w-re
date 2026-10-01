# npu_kmd.sys — Reverse Engineering Report (bonus target)

## Identity
| Field | Value |
|---|---|
| Size | 536,328 bytes |
| Type | Windows kernel-mode driver (PE, subsystem native) |
| PDB | `C:\Temp\oizlkabvmc\build\x64\Source\Kmd\core\Release\npu_kmd.pdb` |
| Imports | 139 imports (ntoskrnl/hal-class kernel APIs + BCrypt, SecLookupAccountSid) |
| Exports | 1 (`entry`) |
| Functions | 1122 total, 1122 OK, 0 failed (21 s) |

## Role
**Kernel-mode driver** for Intel NPU — owns the hardware: firmware loading, MMU/IOMMU
page tables, hardware queues, fence rings, interrupts, thermal throttling. The UMDs
(D3D12/Level Zero) talk to it through IOCTLs/D3DKMT-style submissions.

This is the KMD half of the UMD↔KMD pair; the UMD docs are `npu_d3d12_umd.md` and
`npu_level_zero_umd.md`.

## Kernel API usage (import evidence)
`IoBuildDeviceIoControlRequest`, `IoGetDeviceObjectPointer`, `IoGetDeviceProperty`,
`IoRegisterDeviceInterface`, `IoRegisterPlugPlayNotification`, `KeWaitForSingleObject/MultipleObjects`,
`MmUnlockPages`/`MmUnmapLockedPages`, BCrypt hash APIs (secure firmware measurement?).

## Subsystem map (from `Km*`/`Mmu*` symbol strings)
| Area | Symbols |
|---|---|
| Device lifecycle | `KmCreateDevice`, `LoadFirmwareFromFile`, `KmAllocVpuFirmware`, `KmAllocShaveNNFirmware` (two firmware images: VPU + SHAVE NN) |
| Queues/submission | `KmCreateHwQueue`, `KmSubmitCommandVirtual`, `__KmDoorbellRing_Kmb_WaitForJobRequestAck` |
| Fencing | `__KmFenceIdRing*` (WaitForFenceCompletion, IpcMessageHandler_HWS, HandleAdapterReset, RingDumpDetails) — fence-ID ring tracking LastSubmitted/LastCompleted/LastReported/LastAborted |
| Interrupts | `KmSetupInterruptHandlers`, thermal-throttling + timer-metric event handler setup/teardown |
| MMU | `__MmuAllocateStructs`, `__MmuFlushCD`, `__MmuPollCmdSyncAck`, `__MmuPollCr0Ack`, `KmPagingFlushTlb` (per-SubStreamId TLB flush with StartVA/EndVA logging) |
| Async/IPC | `__KmWaitForAsyncRequest{Ack,Completion}_{Mmio,Ipc}`, `__KmWaitForTimeout` |
| File I/O | `KmFileIoSubmitDeferredProcessingItem` (deferred firmware file reads) |

## Diagnostic strings (behavioral contracts)
- Fence accounting: `"Job ID or FenceRing Index: LastSubmitted = 0x%lx, LastCompleted = ..."`
- Error format convention: `npu_kmd!%s: [ERROR] ... NTSTATUS=0x%x ...`
- PNP: registers for **IPF ESIF** device/interface PNP notifications (Intel Platform
  Framework thermal/ESIF integration)

## Status
Bonus target (outside the original 9-DLL scope, added for parallel capacity).
Fully decompiled 1122/1122. Evidence: `re_decompiled/npu_kmd/`.
