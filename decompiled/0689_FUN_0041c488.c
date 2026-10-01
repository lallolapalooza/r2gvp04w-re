/*
 * Function: FUN_0041c488
 * Address: 0041c488
 * Size: 250 bytes
 * Calling Convention: __register
 */

void FUN_0041c488(void)

{
  HMODULE pHVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  ushort *local_14;
  uint local_10;
  HKEY local_c;
  longlong *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (ushort *)0x0;
  local_8 = (longlong *)0x0;
  puStack_20 = &LAB_0041c582;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  pHVar1 = GetModuleHandleW(L"kernel32.dll");
  pcVar2 = (code *)FUN_0040bdc0();
  if (pcVar2 == (code *)0x0) {
    iVar3 = FUN_00419bc4();
    if (iVar3 == 2) {
      iVar3 = FUN_0041c210('\0',(HKEY)0x80000003,L".DEFAULT\\Control Panel\\International",&local_c,
                           1,0);
      if (iVar3 == 0) {
        FUN_0041c204(local_c,L"Locale",(int *)&local_8);
        RegCloseKey(local_c);
      }
    }
    else {
      iVar3 = FUN_0041c210('\0',(HKEY)0x80000001,L"Control Panel\\Desktop\\ResourceLocale",&local_c,
                           1,0);
      if (iVar3 == 0) {
        FUN_0041c204(local_c,L"",(int *)&local_8);
        RegCloseKey(local_c);
      }
    }
    FUN_004073a8((int *)&local_14,(longlong *)&LAB_0041c698,local_8);
    FUN_00404994(local_14,&local_10);
  }
  else {
    (*pcVar2)();
  }
  *in_FS_OFFSET = pHVar1;
  puStack_24 = &LAB_0041c589;
  FUN_00406b28((int *)&local_14);
  FUN_00406b28((int *)&local_8);
  return;
}


