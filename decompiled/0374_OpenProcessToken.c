/*
 * Function: OpenProcessToken
 * Address: 0040bac0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall OpenProcessToken(HANDLE ProcessHandle,DWORD DesiredAccess,PHANDLE TokenHandle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  return BVar1;
}


