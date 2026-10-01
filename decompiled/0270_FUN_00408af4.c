/*
 * Function: FUN_00408af4
 * Address: 00408af4
 * Size: 33 bytes
 * Calling Convention: __register
 */

LPCWSTR FUN_00408af4(LPCWSTR param_1)

{
  for (; (*param_1 != L'\0' && (*param_1 != L'\\')); param_1 = CharNextW(param_1)) {
  }
  return param_1;
}


