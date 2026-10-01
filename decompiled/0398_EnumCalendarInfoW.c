/*
 * Function: EnumCalendarInfoW
 * Address: 0040bbe0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall
EnumCalendarInfoW(CALINFO_ENUMPROCW lpCalInfoEnumProc,LCID Locale,CALID Calendar,CALTYPE CalType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumCalendarInfoW(lpCalInfoEnumProc,Locale,Calendar,CalType);
  return BVar1;
}


