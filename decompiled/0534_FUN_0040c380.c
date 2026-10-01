/*
 * Function: FUN_0040c380
 * Address: 0040c380
 * Size: 57 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c380(void)

{
  BOOL BVar1;
  _OSVERSIONINFOW local_114;
  
  local_114.dwOSVersionInfoSize = 0x114;
  BVar1 = GetVersionExW(&local_114);
  if (BVar1 != 0) {
    _DAT_00427a80 = local_114.dwPlatformId;
    _DAT_00427a78 = local_114.dwMajorVersion;
    _DAT_00427a7c = local_114.dwMinorVersion;
  }
  return;
}


