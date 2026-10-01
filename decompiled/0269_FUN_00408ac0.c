/*
 * Function: FUN_00408ac0
 * Address: 00408ac0
 * Size: 52 bytes
 * Calling Convention: __register
 */

void FUN_00408ac0(short *param_1,int param_2,short *param_3)

{
  short sVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    for (; 0 < param_2; param_2 = param_2 + -1) {
      sVar1 = *param_3;
      *param_1 = sVar1;
      if (sVar1 == 0) {
        return;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    if (param_2 == 0) {
      param_1[-1] = 0;
    }
  }
  return;
}


