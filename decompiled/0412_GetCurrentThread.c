/*
 * Function: GetCurrentThread
 * Address: 0040bca0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HANDLE __stdcall GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


