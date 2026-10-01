/*
 * Function: FUN_0041c0a0
 * Address: 0041c0a0
 * Size: 26 bytes
 * Calling Convention: __register
 */

bool FUN_0041c0a0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  FUN_004072d0(param_1,param_2);
  return param_2 < iVar1;
}


