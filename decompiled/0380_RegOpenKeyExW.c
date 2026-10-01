/*
 * Function: RegOpenKeyExW
 * Address: 0040bb08
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

LSTATUS __stdcall
RegOpenKeyExW(HKEY hKey,LPCWSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExW(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}


