/*
 * Function: FUN_004078e0
 * Address: 004078e0
 * Size: 119 bytes
 * Calling Convention: __register
 */

int FUN_004078e0(int param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(param_2 + (byte)param_2[1] + 10);
  iVar3 = *(int *)(param_2 + (byte)param_2[1] + 6);
  if (((*param_2 == '\x16') && (1 < *(byte *)(piVar4 + iVar3 * 2))) &&
     (pcVar1 = *(code **)((int)(piVar4 + iVar3 * 2) + 5), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  else if (iVar3 != 0) {
    do {
      if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
        iVar3 = iVar3 + -1;
        do {
          if (**(char **)piVar4[2] != '\x0f') {
            iVar3 = FUN_004045f4(2);
            return iVar3;
          }
          FUN_0040a8a0((int *)(piVar4[3] + param_1));
          iVar5 = iVar3 + -1;
          bVar2 = 0 < iVar3;
          iVar3 = iVar5;
          piVar4 = piVar4 + 2;
        } while (iVar5 != 0 && bVar2);
        return param_1;
      }
      FUN_00407970((int *)(piVar4[1] + param_1),*(char **)*piVar4,1);
      piVar4 = piVar4 + 2;
      iVar5 = iVar3 + -1;
      bVar2 = 0 < iVar3;
      iVar3 = iVar5;
    } while (iVar5 != 0 && bVar2);
  }
  return param_1;
}


