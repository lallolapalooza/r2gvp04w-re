/*
 * Function: FUN_004175b0
 * Address: 004175b0
 * Size: 74 bytes
 * Calling Convention: __register
 */

void FUN_004175b0(LCID param_1,LCTYPE param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  WCHAR local_204 [256];
  
  iVar1 = GetLocaleInfoW(param_1,param_2,local_204,0x100);
  if (iVar1 < 1) {
    FUN_00406dfc(param_4,param_3);
  }
  else {
    FUN_00406c80(param_4,(longlong *)local_204,iVar1 + -1);
  }
  return;
}


