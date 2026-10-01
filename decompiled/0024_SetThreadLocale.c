/*
 * Function: SetThreadLocale
 * Address: 00402810
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}


