/*
 * Function: OpenThreadToken
 * Address: 0040bad8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall
OpenThreadToken(HANDLE ThreadHandle,DWORD DesiredAccess,BOOL OpenAsSelf,PHANDLE TokenHandle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenThreadToken(ThreadHandle,DesiredAccess,OpenAsSelf,TokenHandle);
  return BVar1;
}


