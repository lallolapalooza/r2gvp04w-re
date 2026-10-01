/*
 * Function: FUN_004204d0
 * Address: 004204d0
 * Size: 102 bytes
 * Calling Convention: __register
 */

undefined4 FUN_004204d0(char param_1,int param_2)

{
  bool bVar1;
  LPCWSTR lpFileName;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  char local_10 [8];
  BOOL local_8;
  
  puStack_20 = (undefined1 *)0x4204e6;
  bVar1 = FUN_00420484(param_1,local_10);
  if (!bVar1) {
    return 0;
  }
  puStack_24 = &LAB_0042052d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  lpFileName = (LPCWSTR)FUN_004071e4(param_2);
  local_8 = DeleteFileW(lpFileName);
  GetLastError();
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &DAT_00420534;
  puStack_24 = (undefined1 *)0x42052c;
  uVar2 = FUN_004204c0(local_10);
  return uVar2;
}


