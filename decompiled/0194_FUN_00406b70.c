/*
 * Function: FUN_00406b70
 * Address: 00406b70
 * Size: 21 bytes
 * Calling Convention: __register
 */

undefined4 * FUN_00406b70(undefined4 *param_1)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  if (bstrString != (BSTR)0x0) {
    *param_1 = 0;
    SysFreeString(bstrString);
  }
  return param_1;
}


