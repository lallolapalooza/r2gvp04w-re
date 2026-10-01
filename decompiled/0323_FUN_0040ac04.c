/*
 * Function: FUN_0040ac04
 * Address: 0040ac04
 * Size: 57 bytes
 * Calling Convention: __register
 */

void FUN_0040ac04(void)

{
  DWORD DVar1;
  
  DVar1 = GetVersion();
  if ((((DVar1 & 0xff) != 5) || ((DVar1 & 0xff00) == 0)) && ((DVar1 & 0xff) < 6)) {
    DAT_00429980 = 0x409;
    return;
  }
  DAT_00429980 = 0x7f;
  return;
}


