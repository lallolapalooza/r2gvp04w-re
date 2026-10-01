/*
 * Function: GetFullPathNameW
 * Address: 0040bd20
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall
GetFullPathNameW(LPCWSTR lpFileName,DWORD nBufferLength,LPWSTR lpBuffer,LPWSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameW(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}


