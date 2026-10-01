/*
 * Function: FUN_0041c238
 * Address: 0041c238
 * Size: 494 bytes
 * Calling Convention: __register
 */

PVOID FUN_0041c238(DWORD param_1)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  int *TokenInformation;
  PVOID pvVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  HANDLE *ppvVar9;
  DWORD local_18;
  HANDLE local_14;
  int local_10;
  PSID local_c;
  byte local_5;
  
  iVar1 = FUN_00419bc4();
  if (iVar1 == 2) {
    local_5 = 0;
    BVar2 = AllocateAndInitializeSid
                      ((PSID_IDENTIFIER_AUTHORITY)&DAT_00428314,'\x02',0x20,param_1,0,0,0,0,0,0,
                       &local_c);
    if (BVar2 != 0) {
      *in_FS_OFFSET = &stack0xffffffcc;
      pcVar6 = (code *)0x0;
      DVar3 = GetVersion();
      if (4 < ((ushort)DVar3 & 0xff)) {
        GetModuleHandleW(L"advapi32.dll");
        pcVar6 = (code *)FUN_0040bdc0();
      }
      if (pcVar6 != (code *)0x0) {
        uVar8 = 0;
        iVar1 = (*pcVar6)();
        if (iVar1 != 0) {
          local_5 = 1 - (local_10 == 0);
        }
        *in_FS_OFFSET = uVar8;
        pvVar5 = FreeSid(local_c);
        return pvVar5;
      }
      ppvVar9 = &local_14;
      BVar2 = -1;
      DVar3 = 8;
      pvVar4 = GetCurrentThread();
      BVar2 = OpenThreadToken(pvVar4,DVar3,BVar2,ppvVar9);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        if (DVar3 != 0x3f0) {
          FUN_004063c0();
          goto LAB_0041c42a;
        }
        ppvVar9 = &local_14;
        DVar3 = 8;
        pvVar4 = GetCurrentProcess();
        BVar2 = OpenProcessToken(pvVar4,DVar3,ppvVar9);
        if (BVar2 == 0) {
          FUN_004063c0();
          goto LAB_0041c42a;
        }
      }
      uVar8 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffb8;
      local_18 = 0;
      BVar2 = GetTokenInformation(local_14,TokenGroups,(LPVOID)0x0,0,&local_18);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        if (DVar3 != 0x7a) {
          FUN_004063c0();
          FUN_004063c0();
          goto LAB_0041c42a;
        }
      }
      TokenInformation = (int *)FUN_004044b8(local_18);
      BVar2 = GetTokenInformation(local_14,TokenGroups,TokenInformation,local_18,&local_18);
      if (BVar2 != 0) {
        iVar1 = *TokenInformation;
        if (-1 < iVar1 + -1) {
          iVar7 = 0;
          do {
            BVar2 = EqualSid(local_c,(PSID)TokenInformation[iVar7 * 2 + 1]);
            if ((BVar2 != 0) && ((TokenInformation[iVar7 * 2 + 2] & 0x14U) == 4)) {
              local_5 = 1;
              break;
            }
            iVar7 = iVar7 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        *in_FS_OFFSET = uVar8;
        FUN_004044d4((int)TokenInformation);
        pvVar5 = (PVOID)CloseHandle(local_14);
        return pvVar5;
      }
      FUN_004063c0();
      FUN_004063c0();
    }
  }
  else {
    local_5 = 1;
  }
LAB_0041c42a:
  return (PVOID)(uint)local_5;
}


