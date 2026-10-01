/*
 * Function: FUN_00404b90
 * Address: 00404b90
 * Size: 54 bytes
 * Calling Convention: __register
 */

void FUN_00404b90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  if (DAT_004279ba == '\0') {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  else {
    FUN_00404b54(param_1,param_2,param_3);
  }
  return;
}


