/*
 * Function: GetThreadLocale
 * Address: 0040bee0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


