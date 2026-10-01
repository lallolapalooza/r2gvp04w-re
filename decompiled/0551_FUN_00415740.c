/*
 * Function: FUN_00415740
 * Address: 00415740
 * Size: 68 bytes
 * Calling Convention: __register
 */

/* WARNING: Removing unreachable block (ram,0x00415752) */

void FUN_00415740(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  if ((param_5 == 0) || (-1 < (int)param_5)) {
    FUN_00415408(0,param_1,param_3,param_4,param_5);
  }
  else {
    FUN_00415408(1,param_1,param_3,-param_4,-(param_5 + (param_4 != 0)));
  }
  return;
}


