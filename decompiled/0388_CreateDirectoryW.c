/*
 * Function: CreateDirectoryW
 * Address: 0040bb68
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall CreateDirectoryW(LPCWSTR lpPathName,LPSECURITY_ATTRIBUTES lpSecurityAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateDirectoryW(lpPathName,lpSecurityAttributes);
  return BVar1;
}


