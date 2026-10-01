/*
 * Function: FUN_0042025c
 * Address: 0042025c
 * Size: 47 bytes
 * Calling Convention: __register
 */

void FUN_0042025c(uint param_1,int param_2,int param_3,int *param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_004071e4(*(int *)(&DAT_0042ec3c + (param_1 & 0xff) * 4));
  FUN_00420134(plVar1,param_2,param_3,param_4);
  return;
}


