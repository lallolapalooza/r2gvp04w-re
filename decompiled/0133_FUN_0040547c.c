/*
 * Function: FUN_0040547c
 * Address: 0040547c
 * Size: 53 bytes
 * Calling Convention: __register
 */

int * FUN_0040547c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_004054ab;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + -0x1c))();
  *in_FS_OFFSET = uStack_20;
  return param_1;
}


