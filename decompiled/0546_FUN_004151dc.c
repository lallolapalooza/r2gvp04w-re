/*
 * Function: FUN_004151dc
 * Address: 004151dc
 * Size: 174 bytes
 * Calling Convention: __register
 */

uint FUN_004151dc(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = -*(int *)(param_2 + -4);
    }
    return uVar3;
  }
  if (param_2 == 0) {
    return *(uint *)(param_1 + -4);
  }
  uVar3 = *(uint *)(param_2 + -4);
  uVar8 = *(uint *)(param_1 + -4) - uVar3;
  iVar4 = (-(uint)(*(uint *)(param_1 + -4) < uVar3) & uVar8) + uVar3;
  iVar1 = param_1 + iVar4 * 2;
  iVar6 = param_2 + iVar4 * 2;
  iVar5 = -iVar4;
  if (-iVar4 != 0) {
    do {
      uVar3 = *(uint *)(iVar1 + iVar5 * 2);
      uVar7 = *(uint *)(iVar6 + iVar5 * 2);
      if (uVar3 != uVar7) {
        if ((short)uVar3 != (short)uVar7) {
          uVar3 = uVar3 & 0xffff;
          uVar7 = uVar7 & 0xffff;
          if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
            uVar3 = uVar3 - 0x20;
          }
          if ((0x60 < uVar7) && (uVar7 < 0x7b)) {
            uVar7 = uVar7 - 0x20;
          }
          if (uVar3 - uVar7 != 0) {
            return uVar3 - uVar7;
          }
          uVar3 = *(uint *)(iVar1 + iVar5 * 2) & 0xffff0000;
          uVar7 = *(uint *)(iVar6 + iVar5 * 2) & 0xffff0000;
          if (uVar3 == uVar7) goto LAB_0041527f;
        }
        uVar3 = uVar3 >> 0x10;
        uVar7 = uVar7 >> 0x10;
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          uVar3 = uVar3 - 0x20;
        }
        if ((0x60 < uVar7) && (uVar7 < 0x7b)) {
          uVar7 = uVar7 - 0x20;
        }
        if (uVar3 - uVar7 != 0) {
          return uVar3 - uVar7;
        }
      }
LAB_0041527f:
      bVar2 = iVar5 < -2;
      iVar5 = iVar5 + 2;
    } while (bVar2);
  }
  return uVar8;
}


