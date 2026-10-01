/*
 * Function: FUN_00404bc8
 * Address: 00404bc8
 * Size: 31 bytes
 * Calling Convention: __register
 */

byte FUN_00404bc8(void)

{
  byte bVar1;
  
  bVar1 = (DAT_00429914 & 0x2000000) != 0;
  if ((DAT_00429914 & 0x4000000) != 0) {
    bVar1 = bVar1 | 2;
  }
  return bVar1;
}


