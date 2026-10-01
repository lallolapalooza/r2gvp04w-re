/*
 * Function: FUN_0040a8cc
 * Address: 0040a8cc
 * Size: 89 bytes
 * Calling Convention: __register
 */

void FUN_0040a8cc(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x40a8de;
  local_8 = param_2;
  FUN_004095e4(param_2);
  puStack_14 = &LAB_0040a925;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  piVar1 = FUN_0040a8a0(param_1);
  piVar2 = (int *)FUN_0040515c(local_8,(int)PTR_DAT_00401464);
  FUN_0040a834(piVar1,piVar2);
  *param_1 = (int)local_8;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040a92c;
  puStack_14 = (undefined1 *)0x40a924;
  FUN_00409570((int *)&local_8);
  return;
}


