/*
 * Function: FUN_0041b0f0
 * Address: 0041b0f0
 * Size: 84 bytes
 * Calling Convention: __register
 */

void FUN_0041b0f0(int param_1,UINT param_2)

{
  LPCWSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41b0ff;
  SetErrorMode(param_2);
  puStack_1c = &LAB_0041b162;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = &LAB_0041b144;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  lpLibFileName = (LPCWSTR)FUN_004071e4(param_1);
  LoadLibraryW(lpLibFileName);
  *in_FS_OFFSET = uStack_2c;
  return;
}


