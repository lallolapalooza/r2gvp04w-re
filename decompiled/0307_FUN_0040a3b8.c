/*
 * Function: FUN_0040a3b8
 * Address: 0040a3b8
 * Size: 139 bytes
 * Calling Convention: __register
 */

void FUN_0040a3b8(int param_1,uint param_2)

{
  uint extraout_ECX;
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (*(char *)(param_1 + 0x950) != '\0') {
    uVar1 = ((param_2 >> 0xd) + (param_2 >> 5)) % 0xc5;
    puStack_1c = (undefined1 *)0x40a3fe;
    FUN_0040a0e8((undefined4 *)(param_1 + 0x14 + uVar1 * 0xc));
    puStack_20 = &LAB_0040a43d;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_0040a0fc(param_1 + 0x14 + uVar1 * 0xc,param_2,extraout_ECX);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = &DAT_0040a444;
    puStack_20 = (undefined1 *)0x40a43c;
    FUN_0040a150((undefined4 *)(param_1 + 0x14 + uVar1 * 0xc));
    return;
  }
  return;
}


