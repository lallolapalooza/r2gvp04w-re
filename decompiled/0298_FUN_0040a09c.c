/*
 * Function: FUN_0040a09c
 * Address: 0040a09c
 * Size: 55 bytes
 * Calling Convention: __register
 */

void FUN_0040a09c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_00409dac(*(int **)(param_1[2] + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = 0;
  FUN_00405728((undefined4 *)*param_1);
  FUN_00409c08(param_1 + 2);
  return;
}


