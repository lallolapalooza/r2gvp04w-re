/*
 * Function: RegCloseKey
 * Address: 0040baf0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040baf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


