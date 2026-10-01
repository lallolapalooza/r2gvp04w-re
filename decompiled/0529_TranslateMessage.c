/*
 * Function: TranslateMessage
 * Address: 0040c300
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}


