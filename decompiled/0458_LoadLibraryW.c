/*
 * Function: LoadLibraryW
 * Address: 0040bf90
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HMODULE __stdcall LoadLibraryW(LPCWSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryW(lpLibFileName);
  return pHVar1;
}


