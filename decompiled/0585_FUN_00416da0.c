/*
 * Function: FUN_00416da0
 * Address: 00416da0
 * Size: 242 bytes
 * Calling Convention: __register
 */

void FUN_00416da0(undefined2 *param_1,undefined4 param_2,char param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6,byte param_7)

{
  int iVar1;
  int extraout_ECX;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  byte bVar5;
  ushort local_2e [12];
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  int local_c;
  undefined2 *local_8;
  
  bVar5 = 0;
  local_c = 0;
  local_10 = *param_4;
  local_12 = *(undefined2 *)((int)param_4 + 0xc2);
  local_14 = *(undefined2 *)(param_4 + 0x30);
  local_15 = *(undefined1 *)(param_4 + 1);
  local_16 = *(undefined1 *)((int)param_4 + 0xc6);
  iVar1 = 0x13;
  if (param_3 == '\0') {
    iVar1 = param_6;
    if (param_6 < 2) {
      iVar1 = 2;
    }
    if (0x12 < iVar1) {
      iVar1 = 0x12;
    }
  }
  local_8 = param_1;
  FUN_004170c0(local_2e,param_2,param_3);
  puVar4 = local_8;
  if (local_2e[0] - 0x7fff < 2) {
    FUN_00416ebd();
    puVar3 = (undefined2 *)(&DAT_00416ea6 + local_c + extraout_ECX * 6);
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  else {
    uVar2 = (uint)param_7;
    if ((param_7 != 1) && ((4 < param_7 || (iVar1 < (short)local_2e[0])))) {
      uVar2 = 0;
    }
    (*(code *)(*(int *)((int)&PTR_LAB_00416e92 + local_c + uVar2 * 4) + local_c))();
  }
  FUN_004170ba();
  return;
}


