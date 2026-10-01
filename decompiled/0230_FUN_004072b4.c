/*
 * Function: FUN_004072b4
 * Address: 004072b4
 * Size: 14 bytes
 * Calling Convention: __register
 */

void FUN_004072b4(BSTR param_1,OLECHAR *param_2)

{
  UINT UVar1;
  
  UVar1 = 0;
  if (param_2 != (OLECHAR *)0x0) {
    UVar1 = *(UINT *)(param_2 + -2);
  }
  FUN_00406cb0(param_1,param_2,UVar1);
  return;
}


