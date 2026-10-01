/*
 * Function: SetEvent
 * Address: 0040c050
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall SetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEvent(hEvent);
  return BVar1;
}


