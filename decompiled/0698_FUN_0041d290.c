/*
 * Function: FUN_0041d290
 * Address: 0041d290
 * Size: 72 bytes
 * Calling Convention: __register
 */

void FUN_0041d290(undefined4 param_1,int param_2,uint param_3,byte param_4,byte param_5)

{
  LPCWSTR lpFileName;
  DWORD dwDesiredAccess;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE hTemplateFile;
  
  hTemplateFile = (HANDLE)0x0;
  dwFlagsAndAttributes = 0x80;
  dwCreationDisposition = *(DWORD *)(&DAT_00428338 + (param_3 & 0xff) * 4);
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  dwShareMode = *(DWORD *)(&DAT_00428328 + (uint)param_4 * 4);
  dwDesiredAccess = *(DWORD *)(&DAT_0042831c + (uint)param_5 * 4);
  lpFileName = (LPCWSTR)FUN_004071e4(param_2);
  CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
              dwFlagsAndAttributes,hTemplateFile);
  return;
}


