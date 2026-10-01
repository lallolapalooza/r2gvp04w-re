/*
 * Function: FUN_004095e4
 * Address: 004095e4
 * Size: 11 bytes
 * Calling Convention: __register
 */

void FUN_004095e4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}


