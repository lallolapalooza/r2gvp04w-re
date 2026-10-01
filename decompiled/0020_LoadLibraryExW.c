/*
 * Function: LoadLibraryExW
 * Address: 004027f0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HMODULE __stdcall LoadLibraryExW(LPCWSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004027f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryExW(lpLibFileName,hFile,dwFlags);
  return pHVar1;
}


