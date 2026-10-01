/*
 * Function: GetLastError
 * Address: 004027b0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004027b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


