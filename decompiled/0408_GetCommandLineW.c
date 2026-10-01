/*
 * Function: GetCommandLineW
 * Address: 0040bc70
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

LPWSTR __stdcall GetCommandLineW(void)

{
  LPWSTR pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = GetCommandLineW();
  return pWVar1;
}


