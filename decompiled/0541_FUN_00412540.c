/*
 * Function: FUN_00412540
 * Address: 00412540
 * Size: 63 bytes
 * Calling Convention: __register
 */

undefined1 FUN_00412540(uint param_1)

{
  if (0x10ffff < param_1) {
    return 2;
  }
  return *(undefined1 *)
          (DAT_0042c5d4 +
          (uint)*(ushort *)
                 (DAT_0042c5d0 +
                 ((uint)*(byte *)(DAT_0042c5cc + (param_1 >> 8)) * 0x10 + (param_1 >> 4 & 0xf)) * 2)
          + (param_1 & 0xf));
}


