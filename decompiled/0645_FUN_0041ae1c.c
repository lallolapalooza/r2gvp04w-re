/*
 * Function: FUN_0041ae1c
 * Address: 0041ae1c
 * Size: 94 bytes
 * Calling Convention: __register
 */

void FUN_0041ae1c(int param_1,int param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  longlong *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_1c = &LAB_0041ae7a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00415a90(8,(int *)&local_8,param_3,*(uint *)(*(int *)(param_1 + 4) + 4 + param_2 * 0x10),0);
  FUN_004073a8(param_3,(longlong *)PTR_LAB_00427c04,local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041ae81;
  puStack_1c = (undefined1 *)0x41ae79;
  FUN_00406b28((int *)&local_8);
  return;
}


