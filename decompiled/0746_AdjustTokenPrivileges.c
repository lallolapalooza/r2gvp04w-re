/*
 * Function: AdjustTokenPrivileges
 * Address: 00420998
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall
AdjustTokenPrivileges
          (HANDLE TokenHandle,BOOL DisableAllPrivileges,PTOKEN_PRIVILEGES NewState,
          DWORD BufferLength,PTOKEN_PRIVILEGES PreviousState,PDWORD ReturnLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustTokenPrivileges
                    (TokenHandle,DisableAllPrivileges,NewState,BufferLength,PreviousState,
                     ReturnLength);
  return BVar1;
}


