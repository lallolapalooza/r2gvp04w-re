/*
 * Function: SetLastError
 * Address: 0040c080
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

void __stdcall SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x0040c080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}


