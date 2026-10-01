/*
 * Function: GetTickCount
 * Address: 00402878
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


