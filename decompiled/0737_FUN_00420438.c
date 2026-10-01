/*
 * Function: FUN_00420438
 * Address: 00420438
 * Size: 65 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420438(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00420479;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0042efb0 = _DAT_0042efb0 + 1;
  if (_DAT_0042efb0 == 0) {
    FUN_004202b0();
    FUN_00407970((int *)&DAT_0042ec3c,PTR_DAT_004011c0,0xdd);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


