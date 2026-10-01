/*
 * Function: FUN_00407abc
 * Address: 00407abc
 * Size: 459 bytes
 * Calling Convention: __register
 */

void FUN_00407abc(int param_1,int param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  piVar9 = (int *)(param_3 + (byte)param_3[1] + 10);
  iVar8 = piVar9[-1];
  if (((*param_3 == '\x16') && (2 < *(byte *)(piVar9 + iVar8 * 2))) &&
     (pcVar2 = *(code **)((int)(piVar9 + iVar8 * 2) + 9), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,param_2,pcVar2,param_3,0,0);
  }
  else {
    iVar4 = 0;
    iVar7 = piVar9[-2];
    if (iVar8 != 0) {
      piVar11 = piVar9 + iVar8 * 2;
      iVar5 = iVar8;
      do {
        if (piVar9[iVar5 * 2 + -2] == 0) {
          iVar8 = iVar8 + -1;
          piVar12 = piVar9 + iVar5 * 2;
          break;
        }
        iVar5 = iVar5 + -1;
        piVar12 = piVar11;
      } while (iVar5 != 0);
      do {
        piVar10 = piVar9;
        if (((piVar12 != piVar11) && (*piVar12 != 0)) &&
           ((*piVar9 == 0 || ((uint)piVar12[1] <= (uint)piVar9[1])))) {
          LOCK();
          UNLOCK();
          piVar10 = piVar12;
          piVar12 = piVar9;
        }
        uVar6 = piVar10[1] - iVar4;
        if (uVar6 != 0 && iVar4 <= piVar10[1]) {
          FUN_0040465c((longlong *)(iVar4 + param_2),(longlong *)(iVar4 + param_1),uVar6);
        }
        iVar5 = piVar10[1];
        pcVar3 = *(char **)*piVar10;
        cVar1 = *pcVar3;
        if (cVar1 == '\x0f') {
          if (piVar10 < piVar12) {
            FUN_00409588((int *)(iVar5 + param_1),*(int **)(iVar5 + param_2));
            iVar4 = 4;
          }
          else {
            FUN_0040a8cc((int *)(iVar5 + param_1),*(int **)(iVar5 + param_2));
            iVar4 = 4;
          }
        }
        else {
          if (piVar12 < piVar10) {
LAB_00407b9d:
            FUN_004045f4(2);
            return;
          }
          if (cVar1 == '\n') {
            FUN_00406e98((int *)(iVar5 + param_1),*(longlong **)(iVar5 + param_2));
            iVar4 = 4;
          }
          else if (cVar1 == '\v') {
            FUN_00406e70((BSTR *)(iVar5 + param_1),*(OLECHAR **)(iVar5 + param_2));
            iVar4 = 4;
          }
          else if (cVar1 == '\x12') {
            FUN_00406dfc((int *)(iVar5 + param_1),*(longlong **)(iVar5 + param_2));
            iVar4 = 4;
          }
          else if (cVar1 == '\f') {
            FUN_00407a98((char)iVar5 + (char)param_1,iVar5 + param_2);
            iVar4 = 0x10;
          }
          else if (cVar1 == '\r') {
            uVar6 = (uint)(byte)pcVar3[1];
            iVar4 = *(int *)(pcVar3 + uVar6 + 2);
            FUN_00407ee4((BSTR *)(iVar5 + param_1),(int *)(iVar5 + param_2),
                         (char *)**(undefined4 **)(pcVar3 + uVar6 + 10),*(int *)(pcVar3 + uVar6 + 6)
                        );
          }
          else {
            if (cVar1 != '\x0e') {
              if (cVar1 == '\x11') {
                FUN_0040890c((int *)(iVar5 + param_1),*(int *)(iVar5 + param_2),(int)pcVar3);
                iVar4 = 4;
                goto LAB_00407c63;
              }
              if (cVar1 != '\x16') goto LAB_00407b9d;
            }
            iVar4 = *(int *)(pcVar3 + (byte)pcVar3[1] + 2);
            FUN_00407abc(iVar5 + param_1,iVar5 + param_2,pcVar3);
          }
        }
LAB_00407c63:
        iVar4 = iVar4 + piVar10[1];
        piVar9 = piVar10 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (iVar7 - iVar4 != 0 && iVar4 <= iVar7) {
      FUN_0040465c((longlong *)(iVar4 + param_2),(longlong *)(iVar4 + param_1),iVar7 - iVar4);
    }
  }
  return;
}


