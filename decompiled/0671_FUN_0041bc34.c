/*
 * Function: FUN_0041bc34
 * Address: 0041bc34
 * Size: 70 bytes
 * Calling Convention: __register
 */

void FUN_0041bc34(longlong *param_1)

{
  LPCWSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0041bc7a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0041bbc8(param_1,&local_8);
  lpFileName = (LPCWSTR)FUN_004071e4(local_8);
  GetFileAttributesW(lpFileName);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041bc81;
  puStack_14 = (undefined1 *)0x41bc79;
  FUN_00406b28(&local_8);
  return;
}


