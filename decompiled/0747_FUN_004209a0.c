/*
 * Function: FUN_004209a0
 * Address: 004209a0
 * Size: 123 bytes
 * Calling Convention: __register
 */

bool FUN_004209a0(void)

{
  int iVar1;
  HANDLE ProcessHandle;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE *TokenHandle;
  HANDLE local_14;
  _TOKEN_PRIVILEGES local_10;
  
  iVar1 = FUN_00419bc4();
  TokenHandle = &local_14;
  if (iVar1 == 2) {
    DVar3 = 0x28;
    ProcessHandle = GetCurrentProcess();
    BVar2 = OpenProcessToken(ProcessHandle,DVar3,TokenHandle);
    if (BVar2 == 0) {
      return false;
    }
    LookupPrivilegeValueW((LPCWSTR)0x0,L"SeShutdownPrivilege",&local_10.Privileges[0].Luid);
    local_10.PrivilegeCount = 1;
    local_10.Privileges[0].Attributes = 2;
    AdjustTokenPrivileges(local_14,0,&local_10,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
    DVar3 = GetLastError();
    if (DVar3 != 0) {
      return false;
    }
  }
  BVar2 = ExitWindowsEx(2,0);
  return (bool)('\x01' - (BVar2 == 0));
}


