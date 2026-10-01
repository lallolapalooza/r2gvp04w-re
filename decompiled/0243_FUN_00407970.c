/*
 * Function: FUN_00407970
 * Address: 00407970
 * Size: 283 bytes
 * Calling Convention: __register
 */

int * FUN_00407970(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 != 0) {
    cVar1 = *param_2;
    uVar4 = (uint)(byte)param_2[1];
    if (cVar1 == '\n') {
      if (param_3 < 2) {
        FUN_00406b4c(param_1);
      }
      else {
        FUN_00406bb8(param_1,param_3);
      }
    }
    else if (cVar1 == '\x12') {
      if (param_3 < 2) {
        FUN_00406b28(param_1);
      }
      else {
        FUN_00406b88(param_1,param_3);
      }
    }
    else if (cVar1 == '\v') {
      if (param_3 < 2) {
        FUN_00406b70(param_1);
      }
      else {
        FUN_00406be8(param_1,param_3);
      }
    }
    else if (cVar1 == '\f') {
      do {
        FUN_00407958();
        iVar6 = param_3 + -1;
        bVar2 = 0 < param_3;
        param_3 = iVar6;
      } while (iVar6 != 0 && bVar2);
    }
    else {
      piVar3 = param_1;
      if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00407970(piVar3,(char *)**(undefined4 **)(param_2 + uVar4 + 10),
                       *(int *)(param_2 + uVar4 + 6));
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          piVar3 = (int *)((int)piVar3 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else {
        if (cVar1 != '\x0e') {
          if (cVar1 == '\x0f') {
            do {
              FUN_00409570(piVar3);
              iVar6 = param_3 + -1;
              bVar2 = 0 < param_3;
              piVar3 = piVar3 + 1;
              param_3 = iVar6;
            } while (iVar6 != 0 && bVar2);
            return param_1;
          }
          if (cVar1 == '\x11') {
            do {
              FUN_004088c8(piVar3,(int)param_2);
              iVar6 = param_3 + -1;
              bVar2 = 0 < param_3;
              piVar3 = piVar3 + 1;
              param_3 = iVar6;
            } while (iVar6 != 0 && bVar2);
            return param_1;
          }
          if (cVar1 != '\x16') {
            piVar3 = (int *)FUN_004045f4(2);
            return piVar3;
          }
        }
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_004078e0((int)piVar3,param_2);
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          piVar3 = (int *)((int)piVar3 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
    }
  }
  return param_1;
}


