/*
 * Function: ResetEvent
 * Address: 0040c008
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall ResetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ResetEvent(hEvent);
  return BVar1;
}


