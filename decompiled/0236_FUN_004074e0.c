/*
 * Function: FUN_004074e0
 * Address: 004074e0
 * Size: 71 bytes
 * Calling Convention: __register
 */

void FUN_004074e0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (param_2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 + -1;
    if (iVar2 < param_2 + -1) {
      iVar1 = iVar2;
    }
  }
  if (param_3 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 - iVar1;
    if (param_3 < iVar2 - iVar1) {
      iVar3 = param_3;
    }
  }
  FUN_00406c80(param_4,(longlong *)(iVar1 * 2 + param_1),iVar3);
  return;
}


