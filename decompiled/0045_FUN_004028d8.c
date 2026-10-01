/*
 * Function: FUN_004028d8
 * Address: 004028d8
 * Size: 41 bytes
 * Calling Convention: __register
 */

WORD FUN_004028d8(void)

{
  WORD WVar1;
  _STARTUPINFOW local_48;
  
  local_48.cb = 0x44;
  GetStartupInfoW(&local_48);
  WVar1 = 10;
  if (((byte)local_48.dwFlags & 1) != 0) {
    WVar1 = local_48.wShowWindow;
  }
  return WVar1;
}


