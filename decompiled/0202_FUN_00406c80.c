/*
 * Function: FUN_00406c80
 * Address: 00406c80
 * Size: 48 bytes
 * Calling Convention: __register
 */

void FUN_00406c80(int *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00406a94(param_3);
  if (param_2 != (longlong *)0x0) {
    FUN_0040465c(param_2,plVar1,param_3 << 1);
  }
  FUN_00406b4c(param_1);
  *param_1 = (int)plVar1;
  return;
}


