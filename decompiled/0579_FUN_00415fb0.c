/*
 * Function: FUN_00415fb0
 * Address: 00415fb0
 * Size: 245 bytes
 * Calling Convention: __register
 */

void FUN_00415fb0(undefined4 param_1,ushort *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  ushort local_2010 [2032];
  undefined4 uStackY_1030;
  undefined4 *puVar7;
  int iVar8;
  int local_10;
  
  piVar1 = (int *)0x2;
  do {
    piVar2 = piVar1;
    piVar1 = (int *)((int)piVar2 + -1);
  } while ((int *)((int)piVar2 + -1) != (int *)0x0);
  iVar6 = 0x1000;
  iVar3 = 0;
  if (param_2 != (ushort *)0x0) {
    iVar3 = *(int *)(param_2 + -2);
  }
  if (iVar3 < 0xc00) {
    uVar4 = 0;
    if (param_2 != (ushort *)0x0) {
      uVar4 = *(uint *)(param_2 + -2);
    }
    uStackY_1030 = 0x416019;
    local_10 = FUN_00415ee8(local_2010,0xfff,param_2,param_4,param_5,param_3,uVar4);
  }
  else {
    iVar6 = 0;
    local_10 = iVar6;
    if (param_2 != (ushort *)0x0) {
      iVar6 = *(int *)(param_2 + -2);
      local_10 = iVar6;
    }
  }
  if (local_10 < iVar6 + -1) {
    FUN_00406c80(piVar2,(longlong *)local_2010,local_10);
  }
  else {
    while (iVar6 + -1 <= local_10) {
      iVar6 = iVar6 * 2;
      FUN_00406b28(piVar2);
      FUN_004072d0(piVar2,iVar6);
      uVar4 = 0;
      if (param_2 != (ushort *)0x0) {
        uVar4 = *(uint *)(param_2 + -2);
      }
      uStackY_1030 = 0x41606a;
      puVar7 = param_4;
      iVar3 = param_5;
      iVar8 = param_3;
      puVar5 = (ushort *)FUN_004071e4(*piVar2);
      uStackY_1030 = 0x416075;
      local_10 = FUN_00415ee8(puVar5,iVar6 - 1,param_2,puVar7,iVar3,iVar8,uVar4);
    }
    FUN_004072d0(piVar2,local_10);
  }
  return;
}


