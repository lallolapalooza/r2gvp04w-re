/*
 * Function: FUN_00405d20
 * Address: 00405d20
 * Size: 162 bytes
 * Calling Convention: __register
 */

void FUN_00405d20(int param_1,uint *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  DWORD local_18;
  undefined4 local_14;
  uint local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  local_1c = 0;
  puStack_2c = (undefined1 *)0x405d3c;
  local_8 = param_3;
  local_18 = FUN_00405698((int)param_2);
  puStack_2c = (undefined1 *)0x405d48;
  local_14 = (**(code **)(DAT_004298f4 + 8))();
  puStack_30 = &LAB_00405dc2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = param_2[1];
  puStack_2c = &stack0xfffffffc;
  FUN_00405b90(param_1,&local_1c);
  param_2[1] = 1;
  FUN_004059b8(param_2);
  iVar2 = (**(code **)(DAT_004298f4 + 0x10))(0,local_14,local_8);
  local_9 = iVar2 == 0;
  FUN_00405820(param_2,0xffffffff);
  FUN_00405c00(param_1,&local_1c);
  puVar1 = puStack_2c;
  param_2[1] = local_10;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00405dc9;
  puStack_30 = (undefined1 *)0x405dc1;
  (**(code **)(DAT_004298f4 + 0xc))(local_14,uStack_34,puVar1);
  return;
}


