/*
 * Function: FUN_00406738
 * Address: 00406738
 * Size: 71 bytes
 * Calling Convention: __register
 */

void FUN_00406738(int *param_1)

{
  undefined4 uVar1;
  BSTR pOVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = *param_1;
  piVar5 = param_1 + 1;
  do {
    uVar1 = *(undefined4 *)piVar5[1];
    pOVar2 = (BSTR)*piVar5;
    iVar3 = piVar5[2];
    if ((short)iVar3 == 0) {
      FUN_0040667c(uVar1,(ushort)((uint)iVar3 >> 0x10),(int *)pOVar2);
    }
    else if (iVar3 == 1) {
      FUN_004066d4(uVar1,pOVar2);
    }
    else {
      if (iVar3 != 2) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_00406724(uVar1,(int *)pOVar2);
    }
    piVar5 = piVar5 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


