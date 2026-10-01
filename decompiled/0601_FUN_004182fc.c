/*
 * Function: FUN_004182fc
 * Address: 004182fc
 * Size: 58 bytes
 * Calling Convention: __register
 */

void FUN_004182fc(LCID param_1,LCTYPE param_2,int param_3,int *param_4,undefined4 param_5,
                 int param_6)

{
  FUN_004175b0(param_1,param_2,(longlong *)0x0,param_4);
  if (*param_4 == 0) {
    FUN_0040ab3c(*(undefined4 *)(param_6 + param_3 * 4),param_4);
  }
  return;
}


