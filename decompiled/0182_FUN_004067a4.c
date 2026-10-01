/*
 * Function: FUN_004067a4
 * Address: 004067a4
 * Size: 60 bytes
 * Calling Convention: __register
 */

void FUN_004067a4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int *piVar4;
  int iVar5;
  
  iVar5 = *param_1;
  piVar4 = param_1 + 1;
  do {
    piVar1 = (int *)*piVar4;
    iVar2 = piVar4[2];
    if ((short)iVar2 == 0) {
      FUN_00406b4c(piVar1);
      param_2 = extraout_EDX;
    }
    else if (iVar2 == 1) {
      FUN_00406b70(piVar1);
      param_2 = extraout_EDX_00;
    }
    else {
      if (iVar2 != 2) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)(piVar1,param_2);
        return;
      }
      FUN_00406b28(piVar1);
      param_2 = extraout_EDX_01;
    }
    piVar4 = piVar4 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


