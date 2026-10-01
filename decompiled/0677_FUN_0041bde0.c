/*
 * Function: FUN_0041bde0
 * Address: 0041bde0
 * Size: 66 bytes
 * Calling Convention: __register
 */

void FUN_0041bde0(int *param_1)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0041be22;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pWVar1 = GetCommandLineW();
  plVar2 = (longlong *)FUN_0041bd50((ushort *)pWVar1,&local_8);
  FUN_0040723c(param_1,plVar2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041be29;
  puStack_14 = (undefined1 *)0x41be21;
  FUN_00406b28(&local_8);
  return;
}


