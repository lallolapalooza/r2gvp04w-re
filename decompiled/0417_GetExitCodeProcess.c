/*
 * Function: GetExitCodeProcess
 * Address: 0040bcd8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall GetExitCodeProcess(HANDLE hProcess,LPDWORD lpExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetExitCodeProcess(hProcess,lpExitCode);
  return BVar1;
}


