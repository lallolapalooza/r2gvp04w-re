/*
 * Function: FUN_00415bac
 * Address: 00415bac
 * Size: 102 bytes
 * Calling Convention: __register
 */

void FUN_00415bac(undefined4 param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  longlong *local_8;
  
  puStack_18 = (undefined1 *)0x415bc6;
  FUN_00407764((int)&local_c,PTR_DAT_00415b24);
  puStack_1c = &LAB_00415c12;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  local_c = param_1;
  FUN_00406b28((int *)&local_8);
  FUN_004093d8(&LAB_00415b6c,&local_c);
  FUN_00406dfc(param_2,local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00415c19;
  puStack_1c = (undefined1 *)0x415c11;
  FUN_004078e0((int)&local_c,PTR_DAT_00415b24);
  return;
}


