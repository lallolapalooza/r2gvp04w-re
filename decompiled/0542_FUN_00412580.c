/*
 * Function: FUN_00412580
 * Address: 00412580
 * Size: 72 bytes
 * Calling Convention: __register
 */

bool FUN_00412580(ushort *param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)*param_1;
  if (uVar2 < 0x80) {
    if ((0x60 < (uVar2 | 0x20)) && ((uVar2 | 0x20) < 0x7b)) {
      return true;
    }
    bVar3 = false;
  }
  else if (uVar2 < 0x100) {
    bVar3 = (byte)(*(char *)(DAT_0042c5d4 + uVar2) - 5U) < 5;
  }
  else {
    cVar1 = FUN_00412540(uVar2);
    bVar3 = (byte)(cVar1 - 5U) < 5;
  }
  return bVar3;
}


