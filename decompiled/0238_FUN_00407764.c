/*
 * Function: FUN_00407764
 * Address: 00407764
 * Size: 79 bytes
 * Calling Convention: __register
 */

void FUN_00407764(int param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)(param_2 + (byte)param_2[1] + 10);
  iVar4 = *(int *)(param_2 + (byte)param_2[1] + 6);
  if (((*param_2 == '\x16') && ((char)piVar3[iVar4 * 2] != '\0')) &&
     (pcVar1 = *(code **)((int)(piVar3 + iVar4 * 2) + 1), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  else if (iVar4 != 0) {
    do {
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        FUN_004077b4((undefined4 *)(piVar3[1] + param_1),*(char **)*piVar3,1);
      }
      piVar3 = piVar3 + 2;
      iVar5 = iVar4 + -1;
      bVar2 = 0 < iVar4;
      iVar4 = iVar5;
    } while (iVar5 != 0 && bVar2);
  }
  return;
}


