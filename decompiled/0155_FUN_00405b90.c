/*
 * Function: FUN_00405b90
 * Address: 00405b90
 * Size: 98 bytes
 * Calling Convention: __register
 */

void FUN_00405b90(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x405ba5;
  FUN_00405554((int *)(param_1 + 0x18));
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x14) = param_2;
    *param_2 = param_2;
  }
  else {
    *param_2 = **(undefined4 **)(param_1 + 0x14);
    **(undefined4 **)(param_1 + 0x14) = param_2;
    *(undefined4 **)(param_1 + 0x14) = param_2;
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00405bf9;
  uStack_14 = 0x405bf1;
  FUN_00405580((undefined4 *)(param_1 + 0x18));
  return;
}


