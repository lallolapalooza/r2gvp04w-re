/*
 * Function: GetCurrentProcess
 * Address: 0040bc88
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HANDLE __stdcall GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}


