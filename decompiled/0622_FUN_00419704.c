/*
 * Function: FUN_00419704
 * Address: 00419704
 * Size: 35 bytes
 * Calling Convention: __register
 */

void FUN_00419704(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  uVar2 = FUN_00405108(piVar1,(int)PTR_PTR_00412e00);
  if ((char)uVar2 != '\0') {
    (**(code **)*piVar1)(piVar1,param_1);
  }
  return;
}


