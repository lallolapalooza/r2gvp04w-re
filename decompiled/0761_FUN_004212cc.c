/*
 * Function: FUN_004212cc
 * Address: 004212cc
 * Size: 77 bytes
 * Calling Convention: __register
 */

void FUN_004212cc(void)

{
  LPCWSTR lpText;
  undefined4 *in_FS_OFFSET;
  wchar_t *lpCaption;
  UINT uType;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_00421319;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00406e44(&local_8,0x421330);
  uType = 0x10;
  lpCaption = L"Setup";
  lpText = (LPCWSTR)FUN_004071e4(local_8);
  MessageBoxW((HWND)0x0,lpText,lpCaption,uType);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00421320;
  puStack_10 = (undefined1 *)0x421318;
  FUN_00406b28(&local_8);
  return;
}


