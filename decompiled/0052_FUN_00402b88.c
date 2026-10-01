/*
 * Function: FUN_00402b88
 * Address: 00402b88
 * Size: 61 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402b88(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[1];
  piVar2 = (int *)*param_1;
  *piVar4 = (int)piVar2;
  piVar2[1] = (int)piVar4;
  if (piVar4 == piVar2) {
    piVar4 = piVar4 + -0x10a6dd;
    bVar3 = (byte)((uint)piVar4 >> 3) & 0x1f;
    puVar1 = &DAT_00429af4 + ((uint)piVar4 >> 8 & 0xff);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    if (*puVar1 == 0) {
      bVar3 = (byte)((uint)piVar4 >> 8) & 0x1f;
      _DAT_00429af0 = _DAT_00429af0 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      return;
    }
  }
  return;
}


