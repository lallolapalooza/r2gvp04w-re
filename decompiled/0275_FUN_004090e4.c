/*
 * Function: FUN_004090e4
 * Address: 004090e4
 * Size: 94 bytes
 * Calling Convention: __register
 */

void FUN_004090e4(int param_1)

{
  LPCWSTR lpFileName;
  HANDLE hFindFile;
  undefined4 *in_FS_OFFSET;
  _WIN32_FIND_DATAW *lpFindFileData;
  undefined4 uStack_268;
  undefined1 *puStack_264;
  undefined1 *puStack_260;
  _WIN32_FIND_DATAW local_258;
  int local_8;
  
  puStack_260 = (undefined1 *)0x4090f9;
  local_8 = param_1;
  FUN_00406c0c(param_1);
  puStack_264 = &LAB_00409142;
  uStack_268 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_268;
  lpFindFileData = &local_258;
  puStack_260 = &stack0xfffffffc;
  lpFileName = (LPCWSTR)FUN_004071e4(local_8);
  hFindFile = FindFirstFileW(lpFileName,lpFindFileData);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  *in_FS_OFFSET = uStack_268;
  puStack_260 = &LAB_00409149;
  puStack_264 = (undefined1 *)0x409141;
  FUN_00406b28(&local_8);
  return;
}


