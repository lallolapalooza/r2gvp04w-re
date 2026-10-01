/*
 * Function: GetLastError
 * Address: 0040add4
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040add4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


