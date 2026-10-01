/*
 * Function: GetModuleHandleW
 * Address: 0040bda0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleW(lpModuleName);
  return pHVar1;
}


