/*
 * Function: RemoveDirectoryW
 * Address: 0040bff0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall RemoveDirectoryW(LPCWSTR lpPathName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RemoveDirectoryW(lpPathName);
  return BVar1;
}


