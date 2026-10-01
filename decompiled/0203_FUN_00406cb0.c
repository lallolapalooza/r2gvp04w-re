/*
 * Function: FUN_00406cb0
 * Address: 00406cb0
 * Size: 35 bytes
 * Calling Convention: __register
 */

BSTR FUN_00406cb0(BSTR param_1,OLECHAR *param_2,UINT param_3)

{
  BSTR bstrString;
  BSTR pOVar1;
  
  if (param_3 == 0) {
    if (*(BSTR *)param_1 != (BSTR)0x0) {
      param_1[0] = L'\0';
      param_1[1] = L'\0';
      SysFreeString(*(BSTR *)param_1);
    }
    return param_1;
  }
  pOVar1 = SysAllocStringLen(param_2,param_3);
  if (pOVar1 != (BSTR)0x0) {
    bstrString = *(BSTR *)param_1;
    *(BSTR *)param_1 = pOVar1;
    SysFreeString(bstrString);
    return pOVar1;
  }
  pOVar1 = (BSTR)FUN_004045f4(1);
  return pOVar1;
}


