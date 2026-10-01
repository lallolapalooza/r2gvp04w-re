/*
 * Function: FUN_004160a8
 * Address: 004160a8
 * Size: 115 bytes
 * Calling Convention: __register
 */

undefined4 FUN_004160a8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 < *(int *)(param_4 + -4)) && (*(short *)(param_4 + -6) != 0x53)) {
    param_1 = *(int *)(param_4 + -4);
  }
  if (((*(int *)(param_4 + -0xc) != -1) && (param_2 + param_1 < *(int *)(param_4 + -0xc))) &&
     (iVar1 = param_2 + 1 + param_1, iVar1 <= *(int *)(param_4 + -0xc))) {
    iVar1 = (*(int *)(param_4 + -0xc) - iVar1) + 1;
    do {
      if (*(int *)(param_4 + -0x10) == 0) {
        return 1;
      }
      **(undefined2 **)(param_4 + -0x14) = 0x20;
      *(int *)(param_4 + -0x14) = *(int *)(param_4 + -0x14) + 2;
      *(int *)(param_4 + -0x10) = *(int *)(param_4 + -0x10) + -2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}


