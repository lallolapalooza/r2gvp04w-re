/*
 * Function: FUN_0041b870
 * Address: 0041b870
 * Size: 10 bytes
 * Calling Convention: __register
 */

bool FUN_0041b870(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  uVar2 = param_1[1];
  param_1[1] = uVar2 + CARRY4(uVar1,param_2);
  return !CARRY4(uVar2,(uint)CARRY4(uVar1,param_2));
}


