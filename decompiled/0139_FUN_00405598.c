/*
 * Function: FUN_00405598
 * Address: 00405598
 * Size: 188 bytes
 * Calling Convention: __register
 */

uint FUN_00405598(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  BOOL BVar2;
  DWORD DVar3;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION p_Var4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  char *lpProcName;
  DWORD local_10;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION local_c;
  uint local_8;
  
  local_10 = 0;
  lpProcName = "GetLogicalProcessorInformation";
  uStack_1c = 0x4055b2;
  hModule = GetModuleHandleW(L"kernel32.dll");
  uStack_1c = 0x4055b8;
  pFVar1 = GetProcAddress(hModule,lpProcName);
  if (pFVar1 != (FARPROC)0x0) {
    uStack_1c = 0x4055cb;
    BVar2 = GetLogicalProcessorInformation((PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0,&local_10);
    if ((BVar2 == 0) && (DVar3 = GetLastError(), DVar3 == 0x7a)) {
      local_c = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)FUN_004044b8(local_10);
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      GetLogicalProcessorInformation(local_c,&local_10);
      p_Var4 = local_c;
      while( true ) {
        if (local_10 == 0) {
          *in_FS_OFFSET = uStack_1c;
          uVar5 = FUN_004044d4((int)local_c);
          return uVar5;
        }
        if (((short)p_Var4->Relationship == RelationCache) && ((p_Var4->u).Cache.Level == '\x01'))
        break;
        p_Var4 = p_Var4 + 1;
        local_10 = local_10 - 0x18;
      }
      local_8 = (uint)(p_Var4->u).Cache.LineSize;
      FUN_004063c0();
      return local_8;
    }
  }
  return 0x40;
}


