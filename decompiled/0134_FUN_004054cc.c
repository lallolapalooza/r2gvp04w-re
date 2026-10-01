/*
 * Function: FUN_004054cc
 * Address: 004054cc
 * Size: 15 bytes
 * Calling Convention: __register
 */

int * FUN_004054cc(int *param_1,char param_2)

{
  if (param_2 < '\x01') {
    return param_1;
  }
  (**(code **)(*param_1 + -0x18))();
  return param_1;
}


