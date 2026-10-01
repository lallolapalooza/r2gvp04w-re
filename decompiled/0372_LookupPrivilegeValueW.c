/*
 * Function: LookupPrivilegeValueW
 * Address: 0040baa8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall LookupPrivilegeValueW(LPCWSTR lpSystemName,LPCWSTR lpName,PLUID lpLuid)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040baa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LookupPrivilegeValueW(lpSystemName,lpName,lpLuid);
  return BVar1;
}


