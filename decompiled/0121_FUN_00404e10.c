/*
 * Function: FUN_00404e10
 * Address: 00404e10
 * Size: 125 bytes
 * Calling Convention: __register
 */

/* WARNING: Removing unreachable block (ram,0x00404e7d) */
/* WARNING: Removing unreachable block (ram,0x00404e45) */
/* WARNING: Removing unreachable block (ram,0x00404e4b) */
/* WARNING: Removing unreachable block (ram,0x00404e52) */
/* WARNING: Removing unreachable block (ram,0x00404e58) */
/* WARNING: Removing unreachable block (ram,0x00404e5e) */

void FUN_00404e10(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  *param_2 = param_1;
  uVar2 = *(uint *)(param_1 + -0x34);
  uVar1 = uVar2 >> 2;
  piVar3 = param_2;
  while( true ) {
    piVar3 = piVar3 + 1;
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) break;
    *piVar3 = 0;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)piVar3 = 0;
    piVar3 = (int *)((int)piVar3 + 1);
  }
  for (; *(int **)(param_1 + -0x30) != (int *)0x0; param_1 = **(int **)(param_1 + -0x30)) {
  }
  do {
    param_2 = *(int **)(*param_2 + -0x30);
  } while (param_2 != (int *)0x0);
  return;
}


