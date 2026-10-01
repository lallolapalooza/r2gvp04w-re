/*
 * Function: FUN_00409024
 * Address: 00409024
 * Size: 87 bytes
 * Calling Convention: __register
 */

void FUN_00409024(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0040907b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (DAT_004279f8 == (longlong *)0x0) {
    FUN_00408d08(param_1,&local_8);
    FUN_00409088(local_8);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  FUN_0040723c(param_2,DAT_004279f8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00409082;
  puStack_18 = (undefined1 *)0x40907a;
  FUN_00406b28(&local_8);
  return;
}


