/*
 * Function: DeleteFileW
 * Address: 0040bbc8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall DeleteFileW(LPCWSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileW(lpFileName);
  return BVar1;
}


