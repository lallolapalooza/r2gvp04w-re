/*
 * Function: FUN_0040890c
 * Address: 0040890c
 * Size: 58 bytes
 * Calling Convention: __register
 */

void FUN_0040890c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + -8) < 0) {
      FUN_004087b0(param_2,param_3,param_1);
      return;
    }
    LOCK();
    *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
    UNLOCK();
  }
  iVar2 = *param_1;
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 1;
      FUN_004088c8(param_1,param_3);
    }
  }
  *param_1 = param_2;
  return;
}


