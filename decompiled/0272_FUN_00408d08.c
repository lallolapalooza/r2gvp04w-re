/*
 * Function: FUN_00408d08
 * Address: 00408d08
 * Size: 542 bytes
 * Calling Convention: __register
 */

void FUN_00408d08(int param_1,int *param_2)

{
  short *psVar1;
  LSTATUS LVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_230;
  undefined1 *puStack_22c;
  undefined1 *puStack_228;
  WCHAR local_21e [261];
  DWORD local_14;
  HKEY local_10;
  longlong *local_c;
  int local_8;
  
  puStack_228 = (undefined1 *)0x408d1f;
  local_8 = param_1;
  FUN_00406c0c(param_1);
  puStack_22c = &LAB_00408f2d;
  uStack_230 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_230;
  if (local_8 == 0) {
    puStack_228 = &stack0xfffffffc;
    GetModuleFileNameW((HMODULE)0x0,local_21e,0x105);
  }
  else {
    puStack_228 = &stack0xfffffffc;
    psVar1 = (short *)FUN_004071e4(local_8);
    FUN_00408ac0(local_21e,0x105,psVar1);
  }
  if (local_21e[0] != L'\0') {
    local_c = (longlong *)0x0;
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Embarcadero\\Locales",0,0xf0019,&local_10);
    if (LVar2 != 0) {
      LVar2 = RegOpenKeyExW((HKEY)0x80000002,L"Software\\Embarcadero\\Locales",0,0xf0019,&local_10);
      if (LVar2 != 0) {
        LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\CodeGear\\Locales",0,0xf0019,&local_10);
        if (LVar2 != 0) {
          LVar2 = RegOpenKeyExW((HKEY)0x80000002,L"Software\\CodeGear\\Locales",0,0xf0019,&local_10)
          ;
          if (LVar2 != 0) {
            LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Borland\\Locales",0,0xf0019,&local_10
                                 );
            if (LVar2 != 0) {
              LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Borland\\Delphi\\Locales",0,0xf0019
                                    ,&local_10);
              if (LVar2 != 0) goto LAB_00408f17;
            }
          }
        }
      }
    }
    uVar3 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xfffffdc4;
    FUN_00408b18(local_21e,0x105);
    LVar2 = RegQueryValueExW(local_10,local_21e,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_14);
    if (LVar2 == 0) {
      local_c = (longlong *)FUN_004044b8(local_14);
      RegQueryValueExW(local_10,local_21e,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_c,&local_14);
      FUN_0040723c(param_2,local_c);
    }
    else {
      LVar2 = RegQueryValueExW(local_10,L"",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_14);
      if (LVar2 == 0) {
        local_c = (longlong *)FUN_004044b8(local_14);
        RegQueryValueExW(local_10,L"",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_c,&local_14);
        FUN_0040723c(param_2,local_c);
      }
    }
    *in_FS_OFFSET = uVar3;
    if (local_c != (longlong *)0x0) {
      FUN_004044d4((int)local_c);
    }
    RegCloseKey(local_10);
    return;
  }
LAB_00408f17:
  *in_FS_OFFSET = uStack_230;
  puStack_228 = &LAB_00408f34;
  puStack_22c = (undefined1 *)0x408f2c;
  FUN_00406b28(&local_8);
  return;
}


