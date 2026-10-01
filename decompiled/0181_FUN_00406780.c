/*
 * Function: FUN_00406780
 * Address: 00406780
 * Size: 36 bytes
 * Calling Convention: __register
 */

void FUN_00406780(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = param_1 + 1;
  do {
    *(int *)*piVar1 = *(int *)piVar1[1] + piVar1[2];
    piVar1 = piVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


