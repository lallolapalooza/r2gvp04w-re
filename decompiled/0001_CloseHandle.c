/*
 * Function: CloseHandle
 * Address: 00402748
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


