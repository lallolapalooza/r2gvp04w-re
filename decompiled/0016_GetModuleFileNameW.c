/*
 * Function: GetModuleFileNameW
 * Address: 004027d0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall GetModuleFileNameW(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004027d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameW(hModule,lpFilename,nSize);
  return DVar1;
}


