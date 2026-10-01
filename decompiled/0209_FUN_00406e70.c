/*
 * Function: FUN_00406e70
 * Address: 00406e70
 * Size: 47 bytes
 * Calling Convention: __register
 */

BSTR * FUN_00406e70(BSTR *param_1,OLECHAR *param_2)

{
  BSTR bstrString;
  BSTR *ppOVar1;
  
  if (*param_1 != param_2) {
    if ((param_2 == (OLECHAR *)0x0) || (*(uint *)(param_2 + -2) >> 1 == 0)) {
      bstrString = *param_1;
      if (bstrString != (BSTR)0x0) {
        *param_1 = (BSTR)0x0;
        SysFreeString(bstrString);
      }
      return param_1;
    }
    param_1 = (BSTR *)SysReAllocStringLen(param_1,param_2,*(uint *)(param_2 + -2) >> 1);
    if (param_1 == (BSTR *)0x0) {
      ppOVar1 = (BSTR *)FUN_004045f4(1);
      return ppOVar1;
    }
  }
  return param_1;
}


