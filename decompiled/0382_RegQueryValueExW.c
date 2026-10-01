/*
 * Function: RegQueryValueExW
 * Address: 0040bb20
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

LSTATUS __stdcall
RegQueryValueExW(HKEY hKey,LPCWSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,
                LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExW(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}


