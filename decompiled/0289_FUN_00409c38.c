/*
 * Function: FUN_00409c38
 * Address: 00409c38
 * Size: 151 bytes
 * Calling Convention: __register
 */

void FUN_00409c38(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  uVar2 = param_2 * 4 + 8;
  if (iVar4 == 0) {
    puVar3 = (undefined4 *)FUN_00403844(uVar2);
  }
  else {
    iVar1 = *(int *)(iVar4 + -4);
    if (*(int *)(iVar4 + -8) == 1) {
      puVar3 = FUN_0040352c((int *)(iVar4 + -8),uVar2);
    }
    else {
      puVar3 = FUN_00402fb0(uVar2);
      iVar4 = iVar1;
      if (param_2 < iVar1) {
        iVar4 = param_2;
      }
      FUN_0040465c((longlong *)*param_1,(longlong *)(puVar3 + 2),iVar4 * 4);
      FUN_00409c08((int *)*param_1);
    }
    if (iVar1 < param_2) {
      FUN_004048f8((double *)(puVar3 + iVar1 + 2),(param_2 - iVar1) * 4,0);
    }
  }
  *puVar3 = 1;
  puVar3[1] = param_2;
  *param_1 = (int)(puVar3 + 2);
  return;
}


