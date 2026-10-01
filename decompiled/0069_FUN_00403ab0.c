/*
 * Function: FUN_00403ab0
 * Address: 00403ab0
 * Size: 126 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00403ab0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar4;
  int iVar5;
  
  if (((999 < param_2) ||
      (iVar4 = param_4, uVar2 = FUN_00403a38((LPCVOID)(param_1 + -0x58),param_2,param_3,param_4),
      (char)uVar2 == '\0')) ||
     (iVar5 = param_4, uVar2 = FUN_00403a38((LPCVOID)(param_1 + -0x30),extraout_EDX,iVar4,param_4),
     (char)uVar2 == '\0')) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + -0x30);
  piVar3 = (int *)(param_1 + -0x58);
  if ((param_1 == *piVar3) &&
     ((piVar1 == (int *)0x0 ||
      ((iVar4 = param_4, uVar2 = FUN_00403a38(piVar1,extraout_EDX_00,iVar5,param_4),
       (char)uVar2 != '\0' &&
       (piVar3 = (int *)FUN_00403ab0(*piVar1,param_2 + 1,iVar4,param_4), (char)piVar3 != '\0'))))))
  {
    return CONCAT31((int3)((uint)piVar3 >> 8),1);
  }
  return 0;
}


