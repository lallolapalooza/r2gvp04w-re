/*
 * Function: VerifyVersionInfoW
 * Address: 0040c0b0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall
VerifyVersionInfoW(LPOSVERSIONINFOEXW lpVersionInformation,DWORD dwTypeMask,
                  DWORDLONG dwlConditionMask)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerifyVersionInfoW(lpVersionInformation,dwTypeMask,dwlConditionMask);
  return BVar1;
}


