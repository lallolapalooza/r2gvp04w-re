/*
 * Function: FUN_0040667c
 * Address: 0040667c
 * Size: 72 bytes
 * Calling Convention: __register
 */

void FUN_0040667c(undefined4 param_1,ushort param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  LPCWSTR local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (LPCWSTR)0x0;
  puStack_1c = &LAB_004066c4;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0040ab3c(param_1,(int *)&local_8);
  FUN_00407170(param_3,local_8,param_2);
  *in_FS_OFFSET = puStack_1c;
  puStack_18 = (undefined1 *)0x4066c3;
  FUN_00406b28((int *)&local_8);
  return;
}


