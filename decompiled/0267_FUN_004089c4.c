/*
 * Function: FUN_004089c4
 * Address: 004089c4
 * Size: 127 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004089c4(void)

{
  DWORD DVar1;
  HMODULE pHVar2;
  char *pcVar3;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0042bc0c);
  _DAT_0042bc24 = 0x7f;
  DVar1 = GetVersion();
  DAT_0042bc08 = 5 < (DVar1 & 0xff);
  if ((bool)DAT_0042bc08) {
    pcVar3 = "GetThreadPreferredUILanguages";
    pHVar2 = GetModuleHandleW(L"kernel32.dll");
    _DAT_0042bbfc = GetProcAddress(pHVar2,pcVar3);
    pcVar3 = "SetThreadPreferredUILanguages";
    pHVar2 = GetModuleHandleW(L"kernel32.dll");
    _DAT_0042bc00 = GetProcAddress(pHVar2,pcVar3);
    pcVar3 = "GetThreadUILanguage";
    pHVar2 = GetModuleHandleW(L"kernel32.dll");
    _DAT_0042bc04 = GetProcAddress(pHVar2,pcVar3);
  }
  return;
}


