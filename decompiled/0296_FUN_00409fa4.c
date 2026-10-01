/*
 * Function: FUN_00409fa4
 * Address: 00409fa4
 * Size: 134 bytes
 * Calling Convention: __register
 */

void FUN_00409fa4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -4);
  }
  if (iVar1 == 0) {
    FUN_00409c38((int *)(param_1 + 8),10);
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + -4);
    }
    if (iVar1 == *(int *)(param_1 + 4)) {
      iVar1 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 8) + -4);
      }
      FUN_00409c38((int *)(param_1 + 8),iVar1 * 2);
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 < iVar1) {
    FUN_0040465c((longlong *)(*(int *)(param_1 + 8) + param_2 * 4),
                 (longlong *)(*(int *)(param_1 + 8) + 4 + param_2 * 4),(iVar1 - param_2) * 4);
    *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4) = param_3;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4) = param_3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


