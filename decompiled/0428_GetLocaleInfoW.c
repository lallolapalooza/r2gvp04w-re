/*
 * Function: GetLocaleInfoW
 * Address: 0040bd68
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

int __stdcall GetLocaleInfoW(LCID Locale,LCTYPE LCType,LPWSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoW(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


