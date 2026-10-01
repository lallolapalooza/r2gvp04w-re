/*
 * Function: FUN_0040a464
 * Address: 0040a464
 * Size: 181 bytes
 * Calling Convention: __register
 */

void FUN_0040a464(longlong *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  longlong *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[0x12a] == '\0') {
    puStack_28 = (undefined1 *)0x40a488;
    FUN_0040a308((int)param_1);
  }
  uVar3 = ((param_3 >> 0xd) + (param_3 >> 5)) % 0xc5;
  puStack_28 = (undefined1 *)0x40a4b1;
  local_10 = uVar3;
  FUN_0040a0e8((undefined4 *)((int)local_8 + uVar3 * 0xc + 0x14));
  puStack_2c = &LAB_0040a519;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  iVar1 = FUN_0040a02c((int)local_8 + uVar3 * 0xc + 0x14,param_3,&local_14);
  if (iVar1 == 0) {
    uVar2 = FUN_0040a210(local_8,param_3);
    FUN_00409fa4((int)local_8 + uVar3 * 0xc + 0x14,local_14,uVar2);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0040a520;
  puStack_2c = (undefined1 *)0x40a518;
  FUN_0040a150((undefined4 *)((int)local_8 + local_10 * 0xc + 0x14));
  return;
}


