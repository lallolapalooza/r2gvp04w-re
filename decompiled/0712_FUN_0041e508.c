/*
 * Function: FUN_0041e508
 * Address: 0041e508
 * Size: 73 bytes
 * Calling Convention: __register
 */

void FUN_0041e508(ushort *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0041e551;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00415f70(param_1,param_2,param_3,&local_8);
  FUN_0041e4a8(local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041e558;
  puStack_1c = (undefined1 *)0x41e550;
  FUN_00406b28(&local_8);
  return;
}


