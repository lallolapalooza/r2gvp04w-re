/*
 * Function: FUN_00419b14
 * Address: 00419b14
 * Size: 95 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419b14(void)

{
  BOOL BVar1;
  _OSVERSIONINFOW local_114;
  
  _DAT_0042c834 = DAT_0042c6ec;
  _DAT_0042c838 = DAT_0042c6f0;
  _DAT_0042c83c = DAT_0042c6e8;
  local_114.dwOSVersionInfoSize = 0x114;
  BVar1 = GetVersionExW(&local_114);
  if (BVar1 != 0) {
    DAT_0042c830 = local_114.dwPlatformId;
    FUN_00407278((int *)&DAT_0042c840,(longlong *)local_114.szCSDVersion,0x80);
  }
  DAT_004282cc = 1;
  return;
}


