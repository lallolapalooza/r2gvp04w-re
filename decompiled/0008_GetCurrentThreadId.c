/*
 * Function: GetCurrentThreadId
 * Address: 00402780
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


