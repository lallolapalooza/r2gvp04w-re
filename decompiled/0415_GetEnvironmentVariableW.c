/*
 * Function: GetEnvironmentVariableW
 * Address: 0040bcc0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall GetEnvironmentVariableW(LPCWSTR lpName,LPWSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableW(lpName,lpBuffer,nSize);
  return DVar1;
}


