/*
 * Function: CloseHandle
 * Address: 0040bb38
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


