/*
 * Function: FUN_0041b968
 * Address: 0041b968
 * Size: 230 bytes
 * Calling Convention: __register
 */

int FUN_0041b968(short *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  if (param_1 != (short *)0x0) {
    iVar1 = *(int *)(param_1 + -2);
  }
  if (((iVar1 < 2) || (uVar2 = FUN_0041b8d0(*param_1), (char)uVar2 == '\0')) ||
     (uVar2 = FUN_0041b8d0(param_1[1]), (char)uVar2 == '\0')) {
    if ((iVar1 < 1) || (uVar2 = FUN_0041b8d0(*param_1), (char)uVar2 == '\0')) {
      if (0 < iVar1) {
        iVar4 = FUN_0041b8c8();
        iVar5 = iVar4 + 1;
        if ((iVar5 <= iVar1) && (param_1[iVar4] == 0x3a)) {
          if (param_2 == '\0') {
            return iVar5;
          }
          if (iVar1 <= iVar5) {
            return iVar5;
          }
          uVar2 = FUN_0041b8d0(param_1[iVar5]);
          if ((char)uVar2 == '\0') {
            return iVar5;
          }
          return iVar4 + 2;
        }
      }
      iVar4 = 0;
    }
    else if (param_2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 3;
    iVar5 = 0;
    if (2 < iVar1) {
      do {
        uVar2 = FUN_0041b8d0(param_1[iVar4 + -1]);
        if ((char)uVar2 == '\0') {
          iVar3 = FUN_0041b8c8();
          iVar4 = iVar4 + iVar3;
        }
        else {
          iVar5 = iVar5 + 1;
          iVar3 = iVar4;
          if (1 < iVar5) break;
          do {
            iVar4 = iVar3 + 1;
            if (iVar1 < iVar4) break;
            uVar2 = FUN_0041b8d0(param_1[iVar3]);
            iVar3 = iVar4;
          } while ((char)uVar2 != '\0');
        }
      } while (iVar4 <= iVar1);
    }
    iVar4 = iVar4 + -1;
  }
  return iVar4;
}


