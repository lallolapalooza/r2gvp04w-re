/*
 * Function: FUN_00409570
 * Address: 00409570
 * Size: 21 bytes
 * Calling Convention: __register
 */

int * FUN_00409570(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))();
    param_1 = piVar1;
  }
  return param_1;
}


