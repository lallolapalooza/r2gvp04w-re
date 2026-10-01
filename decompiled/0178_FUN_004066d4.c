/*
 * Function: FUN_004066d4
 * Address: 004066d4
 * Size: 67 bytes
 * Calling Convention: __register
 */

void FUN_004066d4(undefined4 param_1,BSTR param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  OLECHAR *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (OLECHAR *)0x0;
  puStack_18 = &LAB_00406717;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0040ab3c(param_1,(int *)&local_8);
  FUN_004072b4(param_2,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0040671e;
  puStack_18 = (undefined1 *)0x406716;
  FUN_00406b28((int *)&local_8);
  return;
}


