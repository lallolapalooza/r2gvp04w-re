/*
 * Function: FUN_00408b18
 * Address: 00408b18
 * Size: 448 bytes
 * Calling Convention: __register
 */

short * FUN_00408b18(short *param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  LPCWSTR pWVar3;
  LPCWSTR pWVar4;
  int iVar5;
  WCHAR local_46e;
  short asStack_46c [260];
  _WIN32_FIND_DATAW local_264;
  HANDLE local_14;
  short *local_10;
  int local_c;
  short *local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_1;
  hModule = GetModuleHandleW(L"kernel32.dll");
  if (((hModule == (HMODULE)0x0) ||
      (pFVar1 = GetProcAddress(hModule,"GetLongPathNameW"), pFVar1 == (FARPROC)0x0)) ||
     (iVar2 = (*pFVar1)(), iVar2 == 0)) {
    if (*local_8 == 0x5c) {
      if (local_8[1] != 0x5c) {
        return local_10;
      }
      pWVar3 = FUN_00408af4(local_8 + 2);
      if (*pWVar3 == L'\0') {
        return local_10;
      }
      pWVar3 = FUN_00408af4(pWVar3 + 1);
      if (*pWVar3 == L'\0') {
        return local_10;
      }
    }
    else {
      pWVar3 = local_8 + 2;
    }
    iVar2 = (int)pWVar3 - (int)local_8 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)(((int)pWVar3 - (int)local_8 & 1U) != 0);
    }
    if (iVar2 + 1 < 0x106) {
      FUN_00408ac0(&local_46e,iVar2 + 1,local_8);
      while (*pWVar3 != L'\0') {
        pWVar4 = FUN_00408af4(pWVar3 + 1);
        iVar5 = (int)pWVar4 - (int)pWVar3 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)(((int)pWVar4 - (int)pWVar3 & 1U) != 0);
        }
        if (0x105 < iVar5 + iVar2 + 1) {
          return local_10;
        }
        iVar5 = (int)pWVar4 - (int)pWVar3 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)(((int)pWVar4 - (int)pWVar3 & 1U) != 0);
        }
        FUN_00408ac0(&local_46e + iVar2,iVar5 + 1,pWVar3);
        local_14 = FindFirstFileW(&local_46e,&local_264);
        if (local_14 == (HANDLE)0xffffffff) {
          return local_10;
        }
        FindClose(local_14);
        iVar5 = lstrlenW(local_264.cFileName);
        if (0x105 < iVar5 + iVar2 + 2) {
          return local_10;
        }
        (&local_46e)[iVar2] = L'\\';
        FUN_00408ac0(asStack_46c + iVar2,0x104 - iVar2,local_264.cFileName);
        iVar5 = lstrlenW(local_264.cFileName);
        iVar2 = iVar2 + iVar5 + 1;
        pWVar3 = pWVar4;
      }
      FUN_00408ac0(local_8,local_c,&local_46e);
    }
  }
  else {
    FUN_00408ac0(local_8,local_c,&local_46e);
  }
  return local_10;
}


