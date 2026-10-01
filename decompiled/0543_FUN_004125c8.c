/*
 * Function: FUN_004125c8
 * Address: 004125c8
 * Size: 67 bytes
 * Calling Convention: __register
 */

bool FUN_004125c8(ushort *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if (uVar2 < 0x80) {
    return uVar2 - 0x30 < 10;
  }
  if (uVar2 < 0x100) {
    cVar1 = *(char *)(DAT_0042c5d4 + uVar2);
  }
  else {
    cVar1 = FUN_00412540(uVar2);
  }
  return (byte)(cVar1 - 0xdU) < 3;
}


