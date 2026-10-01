/*
 * Function: FUN_00402c28
 * Address: 00402c28
 * Size: 102 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402c28(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = DAT_00429ae8;
  if (DAT_00429aec == 0) {
    return;
  }
  if ((*(byte *)(DAT_00429ae8 + -1) & 1) == 0) {
    DAT_00429ae8[-1] = DAT_00429ae8[-1] | 8;
    puVar2 = (undefined4 *)((int)puVar2 - DAT_00429aec);
    uVar3 = DAT_00429aec;
  }
  else {
    uVar3 = DAT_00429ae8[-1] & 0xfffffff0;
    if (0xb2f < uVar3) {
      FUN_00402b88(DAT_00429ae8);
      uVar3 = DAT_00429ae8[-1] & 0xfffffff0;
    }
    puVar2 = (undefined4 *)((int)DAT_00429ae8 - DAT_00429aec);
    uVar3 = uVar3 + DAT_00429aec;
  }
  puVar2[-1] = uVar3 + 3;
  *(uint *)((uVar3 - 8) + (int)puVar2) = uVar3;
  if (uVar3 < 0xb30) {
    return;
  }
  uVar3 = uVar3 - 0xb30 >> 8;
  uVar3 = (uVar3 - 0x3ff & -(uint)(uVar3 < 0x3ff)) + 0x3ff;
  puVar1 = (undefined4 *)(&DAT_00429b78)[uVar3 * 2];
  *puVar2 = &DAT_00429b74 + uVar3 * 2;
  puVar2[1] = puVar1;
  *puVar1 = puVar2;
  (&DAT_00429b78)[uVar3 * 2] = puVar2;
  if (puVar1 != &DAT_00429b74 + uVar3 * 2) {
    return;
  }
  (&DAT_00429af4)[(uVar3 & 0x1fffffff) >> 5 & 0xff] =
       (&DAT_00429af4)[(uVar3 & 0x1fffffff) >> 5 & 0xff] | 1 << ((byte)uVar3 & 0x1f);
  _DAT_00429af0 = _DAT_00429af0 | 1 << ((byte)(uVar3 * 8 >> 8) & 0x1f);
  return;
}


