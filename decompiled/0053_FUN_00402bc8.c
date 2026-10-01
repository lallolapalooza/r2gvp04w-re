/*
 * Function: FUN_00402bc8
 * Address: 00402bc8
 * Size: 94 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402bc8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = param_2 - 0xb30U >> 8;
  uVar2 = (uVar2 - 0x3ff & -(uint)(uVar2 < 0x3ff)) + 0x3ff;
  puVar1 = (undefined4 *)(&DAT_00429b78)[uVar2 * 2];
  *param_1 = &DAT_00429b74 + uVar2 * 2;
  param_1[1] = puVar1;
  *puVar1 = param_1;
  (&DAT_00429b78)[uVar2 * 2] = param_1;
  if (puVar1 != &DAT_00429b74 + uVar2 * 2) {
    return;
  }
  (&DAT_00429af4)[(uVar2 & 0x1fffffff) >> 5 & 0xff] =
       (&DAT_00429af4)[(uVar2 & 0x1fffffff) >> 5 & 0xff] | 1 << ((byte)uVar2 & 0x1f);
  _DAT_00429af0 = _DAT_00429af0 | 1 << ((byte)(uVar2 * 8 >> 8) & 0x1f);
  return;
}


