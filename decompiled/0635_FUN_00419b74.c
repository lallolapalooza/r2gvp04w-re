/*
 * Function: FUN_00419b74
 * Address: 00419b74
 * Size: 68 bytes
 * Calling Convention: __register
 */

void FUN_00419b74(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x419b84;
  FUN_00405778(DAT_0042c82c,0xffffffff);
  puStack_c = &LAB_00419bb8;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  if (DAT_004282cc == '\0') {
    puStack_8 = &stack0xfffffffc;
    FUN_00419b14();
  }
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_00419bbf;
  puStack_c = (undefined1 *)0x419bb7;
  FUN_00405a00(DAT_0042c82c);
  return;
}


