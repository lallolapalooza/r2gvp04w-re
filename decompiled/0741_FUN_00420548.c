/*
 * Function: FUN_00420548
 * Address: 00420548
 * Size: 96 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00420548(char param_1,longlong *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  char local_10 [11];
  undefined1 local_5;
  
  puStack_20 = (undefined1 *)0x42055e;
  bVar1 = FUN_00420484(param_1,local_10);
  if (!bVar1) {
    return 0;
  }
  puStack_24 = &LAB_0042059e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  uVar2 = FUN_0041bc9c(param_2);
  local_5 = (undefined1)uVar2;
  GetLastError();
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &DAT_004205a5;
  puStack_24 = (undefined1 *)0x42059d;
  uVar2 = FUN_004204c0(local_10);
  return uVar2;
}


