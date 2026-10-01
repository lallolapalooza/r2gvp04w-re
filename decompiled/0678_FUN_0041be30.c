/*
 * Function: FUN_0041be30
 * Address: 0041be30
 * Size: 81 bytes
 * Calling Convention: __register
 */

void FUN_0041be30(void)

{
  LPWSTR pWVar1;
  ushort *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0041be81;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pWVar1 = GetCommandLineW();
  for (puVar2 = (ushort *)FUN_0041bd50((ushort *)pWVar1,&local_8); *puVar2 != 0;
      puVar2 = (ushort *)FUN_0041bd50(puVar2,&local_8)) {
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041be88;
  puStack_18 = (undefined1 *)0x41be80;
  FUN_00406b28(&local_8);
  return;
}


