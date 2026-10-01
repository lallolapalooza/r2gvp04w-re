/*
 * Function: LoadLibraryA
 * Address: 0040addc
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040addc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


