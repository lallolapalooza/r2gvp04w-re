/*
 * Function: ExitWindowsEx
 * Address: 0040c270
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall ExitWindowsEx(UINT uFlags,DWORD dwReason)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExitWindowsEx(uFlags,dwReason);
  return BVar1;
}


