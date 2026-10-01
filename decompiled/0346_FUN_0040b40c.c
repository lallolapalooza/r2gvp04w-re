/*
 * Function: FUN_0040b40c
 * Address: 0040b40c
 * Size: 733 bytes
 * Calling Convention: __register
 */

FARPROC FUN_0040b40c(void)

{
  HMODULE hLibModule;
  HMODULE pHVar1;
  int iVar2;
  LPCSTR pCVar3;
  int *extraout_EDX;
  int *piVar4;
  undefined4 *puVar5;
  FARPROC unaff_EDI;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  FARPROC pFVar9;
  byte bVar10;
  uint *in_stack_00000004;
  int *in_stack_00000008;
  undefined4 local_5c [3];
  LPCSTR local_50;
  uint local_4c;
  LPCSTR local_48;
  HMODULE local_44;
  FARPROC local_40;
  DWORD local_3c;
  uint local_38;
  LPCSTR local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  bVar10 = 0;
  puVar8 = &DAT_00427a28;
  puVar6 = &local_38;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  local_38 = *in_stack_00000004;
  local_34 = (LPCSTR)FUN_0040b8bc();
  local_30 = (int *)FUN_0040b8cc();
  local_2c = FUN_0040b8dc();
  local_28 = FUN_0040b8ec();
  local_24 = FUN_0040b8ec();
  local_20 = FUN_0040b8ec();
  local_1c = in_stack_00000004[7];
  puVar5 = &DAT_00427a48;
  puVar7 = local_5c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
  }
  local_50 = local_34;
  if ((local_38 & 1) == 0) {
    local_8 = local_5c;
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)&local_8);
    return unaff_EDI;
  }
  local_c = (int)in_stack_00000008 - local_2c;
  hLibModule = (HMODULE)*local_30;
  if (local_c < 0) {
    local_c = local_c + 3;
  }
  local_c = local_c >> 2;
  puVar8 = (uint *)(local_c * 4 + local_28);
  local_4c = (uint)((*puVar8 & 0x80000000) == 0);
  if (local_4c == 0) {
    pCVar3 = (LPCSTR)(*puVar8 & 0xffff);
    piVar4 = local_30;
    local_48 = pCVar3;
  }
  else {
    pCVar3 = (LPCSTR)*puVar8;
    iVar2 = FUN_0040b8fc();
    piVar4 = extraout_EDX;
    local_48 = (LPCSTR)(iVar2 + 2);
  }
  pFVar9 = (FARPROC)0x0;
  if ((DAT_0042c590 != (code *)0x0) &&
     (pFVar9 = (FARPROC)(*DAT_0042c590)(local_5c,piVar4,pCVar3,0,local_5c), pFVar9 != (FARPROC)0x0))
  goto LAB_0040b6be;
  if (hLibModule == (HMODULE)0x0) {
    if (DAT_0042c590 != (code *)0x0) {
      hLibModule = (HMODULE)(*DAT_0042c590)();
    }
    if (hLibModule == (HMODULE)0x0) {
      hLibModule = LoadLibraryA(local_50);
    }
    if (hLibModule == (HMODULE)0x0) {
      local_3c = GetLastError();
      if (DAT_0042c594 != (code *)0x0) {
        hLibModule = (HMODULE)(*DAT_0042c594)();
      }
      if (hLibModule == (HMODULE)0x0) {
        local_10 = local_5c;
        RaiseException(0xc06d007e,0,1,(ULONG_PTR *)&local_10);
        return unaff_EDI;
      }
    }
    pHVar1 = (HMODULE)FUN_0040ad94();
    if (hLibModule == pHVar1) {
      FreeLibrary(hLibModule);
    }
    else if ((in_stack_00000004[6] != 0) &&
            (local_14 = LocalAlloc(0x40,8), local_14 != (undefined4 *)0x0)) {
      local_14[1] = in_stack_00000004;
      *local_14 = DAT_00427a24;
      DAT_00427a24 = local_14;
    }
  }
  local_44 = hLibModule;
  if (DAT_0042c590 != (code *)0x0) {
    pFVar9 = (FARPROC)(*DAT_0042c590)();
  }
  if (pFVar9 == (FARPROC)0x0) {
    if ((((in_stack_00000004[5] == 0) || (in_stack_00000004[7] == 0)) ||
        (piVar4 = (int *)((int)&hLibModule->unused + hLibModule[0xf].unused), *piVar4 != 0x4550)) ||
       (((piVar4[2] != local_1c || ((HMODULE)piVar4[0xd] != hLibModule)) ||
        (pFVar9 = *(FARPROC *)(local_24 + local_c * 4), pFVar9 == (FARPROC)0x0)))) {
      pFVar9 = GetProcAddress(hLibModule,local_48);
      goto LAB_0040b66f;
    }
  }
  else {
LAB_0040b66f:
    if (pFVar9 == (FARPROC)0x0) {
      local_3c = GetLastError();
      if (DAT_0042c594 != (code *)0x0) {
        pFVar9 = (FARPROC)(*DAT_0042c594)();
      }
      if (pFVar9 == (FARPROC)0x0) {
        local_18 = local_5c;
        RaiseException(0xc06d007f,0,1,(ULONG_PTR *)&local_18);
        pFVar9 = local_40;
      }
    }
  }
  *in_stack_00000008 = (int)pFVar9;
LAB_0040b6be:
  if (DAT_0042c590 != (code *)0x0) {
    local_3c = 0;
    local_44 = hLibModule;
    local_40 = pFVar9;
    (*DAT_0042c590)();
  }
  return unaff_EDI;
}


