/*
 * Function: FUN_00409588
 * Address: 00409588
 * Size: 44 bytes
 * Calling Convention: __register
 */

void FUN_00409588(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    piVar1 = (int *)*param_1;
    *param_1 = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    return;
  }
  (**(code **)(*param_2 + 4))();
  piVar1 = (int *)*param_2;
  *param_2 = (int)param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 8))();
  return;
}


