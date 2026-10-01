/*
 * Function: FUN_0040c41c
 * Address: 0040c41c
 * Size: 88 bytes
 * Calling Convention: __register
 */

void FUN_0040c41c(int param_1)

{
  LPCWSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x40c42f;
  SetErrorMode(0x8000);
  puStack_1c = &LAB_0040c492;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = &LAB_0040c474;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  lpLibFileName = (LPCWSTR)FUN_004071e4(param_1);
  LoadLibraryW(lpLibFileName);
  *in_FS_OFFSET = uStack_2c;
  return;
}


