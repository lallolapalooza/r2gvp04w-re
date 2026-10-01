/*
 * Function: FUN_004087d4
 * Address: 004087d4
 * Size: 244 bytes
 * Calling Convention: __register
 */

void FUN_004087d4(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  double *pdVar5;
  int local_14;
  
  pdVar5 = (double *)0x0;
  if (param_1 != 0) {
    if (param_3 < 0) {
      param_5 = param_5 + param_3;
      param_3 = 0;
    }
    iVar1 = *(int *)(param_1 + -4);
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
    if (iVar1 - param_3 < param_5) {
      param_5 = iVar1 - param_3;
    }
    if (param_5 < 0) {
      param_5 = 0;
    }
    if (0 < param_5) {
      iVar1 = param_2 + (uint)*(byte *)(param_2 + 1);
      iVar2 = *(int *)(iVar1 + 2);
      piVar3 = *(int **)(iVar1 + 6);
      if (piVar3 == (int *)0x0) {
        local_14 = 0;
      }
      else {
        local_14 = *piVar3;
      }
      puVar4 = (undefined4 *)FUN_004044b8(param_5 * iVar2 + 8);
      *puVar4 = 1;
      puVar4[1] = param_5;
      pdVar5 = (double *)(puVar4 + 2);
      if (0 < param_5) {
        if (local_14 == 0) {
          FUN_0040465c((longlong *)(param_1 + param_3 * iVar2),(longlong *)pdVar5,param_5 * iVar2);
        }
        else {
          FUN_004048f8(pdVar5,param_5 * iVar2,0);
          FUN_00408120();
        }
      }
    }
  }
  FUN_004088c8(param_4,param_2);
  *param_4 = (int)pdVar5;
  return;
}


