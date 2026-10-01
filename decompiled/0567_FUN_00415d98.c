/*
 * Function: FUN_00415d98
 * Address: 00415d98
 * Size: 57 bytes
 * Calling Convention: __register
 */

longlong * FUN_00415d98(longlong *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00406f00((int)param_2);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  FUN_0040465c(param_2,param_1,uVar1 * 2);
  *(undefined2 *)((int)param_1 + uVar1 * 2) = 0;
  return param_1;
}


