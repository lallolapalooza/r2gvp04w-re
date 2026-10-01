/*
 * Function: FUN_0040930c
 * Address: 0040930c
 * Size: 186 bytes
 * Calling Convention: __register
 */

void FUN_0040930c(longlong *param_1)

{
  LPCWSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  HANDLE hFile;
  int iVar1;
  DWORD dwFlags;
  undefined4 uStack_230;
  undefined1 *puStack_22c;
  undefined1 *puStack_228;
  int local_21c;
  int local_218;
  WCHAR local_212 [261];
  int local_8;
  
  puStack_228 = &stack0xfffffffc;
  local_218 = 0;
  local_21c = 0;
  local_8 = 0;
  puStack_22c = &LAB_004093c6;
  uStack_230 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_230;
  GetModuleFileNameW((HMODULE)0x0,local_212,0x105);
  FUN_0040723c(&local_218,param_1);
  iVar1 = local_218;
  FUN_00407278(&local_21c,(longlong *)local_212,0x105);
  FUN_00409234(local_21c,iVar1,&local_8);
  if (local_8 != 0) {
    dwFlags = 2;
    hFile = (HANDLE)0x0;
    lpLibFileName = (LPCWSTR)FUN_004071e4(local_8);
    LoadLibraryExW(lpLibFileName,hFile,dwFlags);
  }
  *in_FS_OFFSET = uStack_230;
  puStack_228 = &LAB_004093cd;
  puStack_22c = (undefined1 *)0x4093bd;
  FUN_00406b88(&local_21c,2);
  puStack_22c = (undefined1 *)0x4093c5;
  FUN_00406b28(&local_8);
  return;
}


