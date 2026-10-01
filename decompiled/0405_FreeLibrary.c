/*
 * Function: FreeLibrary
 * Address: 0040bc40
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


