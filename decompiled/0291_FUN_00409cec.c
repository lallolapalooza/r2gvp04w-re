/*
 * Function: FUN_00409cec
 * Address: 00409cec
 * Size: 131 bytes
 * Calling Convention: __register
 */

void FUN_00409cec(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0x1f;
  piVar3 = (int *)(param_1 + 8);
  do {
    iVar5 = 0;
    if (*piVar3 != 0) {
      iVar5 = *(int *)(*piVar3 + -4);
    }
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        puVar1 = *(undefined4 **)(*piVar3 + iVar4 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)(*piVar3 + iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (piVar3[0x1f] != 0) {
      iVar5 = *(int *)(piVar3[0x1f] + -4);
    }
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        puVar1 = *(undefined4 **)(piVar3[0x1f] + iVar4 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(piVar3[0x1f] + iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


