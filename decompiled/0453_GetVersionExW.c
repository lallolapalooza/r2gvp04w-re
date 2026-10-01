/*
 * Function: GetVersionExW
 * Address: 0040bf48
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall GetVersionExW(LPOSVERSIONINFOW lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExW(lpVersionInformation);
  return BVar1;
}


