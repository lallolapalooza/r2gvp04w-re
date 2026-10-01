/*
 * Function: GetModuleHandleW
 * Address: 004027d8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004027d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleW(lpModuleName);
  return pHVar1;
}


