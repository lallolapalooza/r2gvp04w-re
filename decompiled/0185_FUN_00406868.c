/*
 * Function: FUN_00406868
 * Address: 00406868
 * Size: 133 bytes
 * Calling Convention: __register
 */

void FUN_00406868(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  HANDLE pvVar1;
  LPCVOID lpBuffer;
  char *lpBuffer_00;
  DWORD DVar2;
  DWORD *lpNumberOfBytesWritten;
  DWORD *lpNumberOfBytesWritten_00;
  LPOVERLAPPED p_Var3;
  DWORD local_4;
  
  local_4 = param_3;
  if (DAT_00429054 != '\0') {
    if ((DAT_00429340 == -0x284e) && (DAT_00429348 != 0)) {
      (*DAT_00429358)(&DAT_0042933c);
    }
    lpNumberOfBytesWritten = &local_4;
    lpNumberOfBytesWritten_00 = &local_4;
    p_Var3 = (LPOVERLAPPED)0x0;
    DVar2 = 0x1d;
    lpBuffer_00 = s_Runtime_error_at_00000000_004279c1;
    pvVar1 = GetStdHandle(0xfffffff5);
    WriteFile(pvVar1,lpBuffer_00,DVar2,lpNumberOfBytesWritten,p_Var3);
    p_Var3 = (LPOVERLAPPED)0x0;
    DVar2 = 2;
    lpBuffer = (LPCVOID)FUN_004070e0(0x4068fc);
    pvVar1 = GetStdHandle(0xfffffff5);
    WriteFile(pvVar1,lpBuffer,DVar2,lpNumberOfBytesWritten_00,p_Var3);
    return;
  }
  if (DAT_00427026 == '\0') {
    MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_004279c1,s_Error_004279bb,0);
  }
  return;
}


