/*
 * Function: FUN_0040a540
 * Address: 0040a540
 * Size: 145 bytes
 * Calling Convention: __register
 */

void FUN_0040a540(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x950) != '\0') {
    uVar1 = ((param_3 >> 0xd) + (param_3 >> 5)) % 0xc5;
    puStack_28 = (undefined1 *)0x40a589;
    local_10 = uVar1;
    local_c = param_2;
    local_8 = param_1;
    FUN_0040a0e8((undefined4 *)(param_1 + 0x14 + uVar1 * 0xc));
    puStack_2c = &LAB_0040a5cb;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    FUN_0040a02c(local_8 + 0x14 + uVar1 * 0xc,param_3,&local_14);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = &DAT_0040a5d2;
    puStack_2c = (undefined1 *)0x40a5ca;
    FUN_0040a150((undefined4 *)(local_8 + 0x14 + local_10 * 0xc));
    return;
  }
  return;
}


