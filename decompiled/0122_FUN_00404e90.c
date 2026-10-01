/*
 * Function: FUN_00404e90
 * Address: 00404e90
 * Size: 66 bytes
 * Calling Convention: __register
 */

void FUN_00404e90(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = param_1;
  do {
    piVar3 = param_1;
    if (piVar4 == (int *)0x0) goto LAB_00404eb0;
    iVar1 = *piVar4;
    piVar4 = *(int **)(iVar1 + -0x30);
  } while (*(int *)(iVar1 + -0x54) == 0);
  FUN_0040a880(param_1);
LAB_00404eb0:
  do {
    pcVar2 = *(char **)(*piVar3 + -0x4c);
    piVar3 = *(int **)(*piVar3 + -0x30);
    if (pcVar2 != (char *)0x0) {
      FUN_004078e0((int)param_1,pcVar2);
    }
  } while (piVar3 != (int *)0x0);
  FUN_0040570c(param_1);
  return;
}


