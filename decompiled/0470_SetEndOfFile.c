/*
 * Function: SetEndOfFile
 * Address: 0040c020
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


