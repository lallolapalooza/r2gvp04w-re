/*
 * Function: FUN_00420fb4
 * Address: 00420fb4
 * Size: 213 bytes
 * Calling Convention: __register
 */

void FUN_00420fb4(undefined4 param_1,undefined4 param_2,LPDWORD param_3)

{
  LPWSTR lpCommandLine;
  undefined4 *in_FS_OFFSET;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  LPSECURITY_ATTRIBUTES lpThreadAttributes;
  BOOL BVar1;
  DWORD DVar2;
  LPVOID lpEnvironment;
  LPCWSTR lpCurrentDirectory;
  _STARTUPINFOW *lpStartupInfo;
  _PROCESS_INFORMATION *lpProcessInformation;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  _PROCESS_INFORMATION local_5c;
  _STARTUPINFOW local_4c;
  int local_8;
  
  puStack_6c = &stack0xfffffffc;
  local_8 = 0;
  puStack_70 = &LAB_00421089;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  FUN_00407430(&local_8,4);
  FUN_004048f8((double *)&local_4c,0x44,0);
  local_4c.cb = 0x44;
  lpProcessInformation = &local_5c;
  lpStartupInfo = &local_4c;
  lpCurrentDirectory = (LPCWSTR)0x0;
  lpEnvironment = (LPVOID)0x0;
  DVar2 = 0;
  BVar1 = 0;
  lpThreadAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  lpProcessAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  lpCommandLine = (LPWSTR)FUN_004071e4(local_8);
  BVar1 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,lpProcessAttributes,lpThreadAttributes,BVar1,
                         DVar2,lpEnvironment,lpCurrentDirectory,lpStartupInfo,lpProcessInformation);
  if (BVar1 == 0) {
    FUN_00420bdc(0x6a);
  }
  CloseHandle(local_5c.hThread);
  do {
    FUN_00420f88();
    DVar2 = MsgWaitForMultipleObjects(1,&local_5c.hProcess,0,0xffffffff,0x4ff);
  } while (DVar2 == 1);
  FUN_00420f88();
  GetExitCodeProcess(local_5c.hProcess,param_3);
  CloseHandle(local_5c.hProcess);
  *in_FS_OFFSET = param_2;
  FUN_00406b28(&local_8);
  return;
}


