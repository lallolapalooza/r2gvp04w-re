/*
 * Function: FUN_0041c210
 * Address: 0041c210
 * Size: 38 bytes
 * Calling Convention: __register
 */

void FUN_0041c210(char param_1,HKEY param_2,LPCWSTR param_3,PHKEY param_4,REGSAM param_5,
                 DWORD param_6)

{
  if (param_1 == '\x02') {
    param_5 = param_5 | 0x100;
  }
  RegOpenKeyExW(param_2,param_3,param_6,param_5,param_4);
  return;
}


