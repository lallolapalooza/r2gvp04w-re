/*
 * Function: FUN_0041611c
 * Address: 0041611c
 * Size: 382 bytes
 * Calling Convention: __register
 */

uint FUN_0041611c(longlong *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  undefined3 uVar3;
  bool bVar4;
  int local_14;
  longlong *local_10;
  uint local_c;
  
  if (param_1 == (longlong *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3;
    if (param_3 == -1) {
      iVar1 = FUN_00406f00((int)param_1);
      param_3 = extraout_ECX;
    }
  }
  if ((-1 < param_2) && (param_2 < iVar1)) {
    iVar1 = param_2;
  }
  local_c = iVar1 * 2;
  if (((param_1 == (longlong *)0x0) || ((short)*param_1 != 0x2d)) ||
     (*(short *)(param_4 + -6) == 0x53)) {
    local_14 = 0;
  }
  else {
    local_c = local_c - 2;
    iVar1 = iVar1 + -1;
    local_14 = 1;
  }
  if ((*(char *)(param_4 + -0x15) != '\0') ||
     (iVar2 = param_4, param_2 = FUN_004160a8(iVar1,local_14,param_3,param_4), param_3 = iVar2,
     (char)param_2 == '\0')) {
    uVar3 = (undefined3)((uint)param_2 >> 8);
    local_10 = param_1;
    if (local_14 == 1) {
      if (*(int *)(param_4 + -0x10) == 0) {
        return CONCAT31(uVar3,1);
      }
      local_10 = (longlong *)((int)param_1 + 2);
      **(undefined2 **)(param_4 + -0x14) = 0x2d;
      *(int *)(param_4 + -0x14) = *(int *)(param_4 + -0x14) + 2;
      *(int *)(param_4 + -0x10) = *(int *)(param_4 + -0x10) + -2;
    }
    if (((*(int *)(param_4 + -4) != -1) && (iVar1 < *(int *)(param_4 + -4))) &&
       ((*(short *)(param_4 + -6) != 0x53 && (iVar1 + 1 <= *(int *)(param_4 + -4))))) {
      iVar2 = (*(int *)(param_4 + -4) - (iVar1 + 1)) + 1;
      do {
        if (*(int *)(param_4 + -0x10) == 0) {
          return CONCAT31(uVar3,1);
        }
        **(undefined2 **)(param_4 + -0x14) = 0x30;
        *(int *)(param_4 + -0x14) = *(int *)(param_4 + -0x14) + 2;
        *(int *)(param_4 + -0x10) = *(int *)(param_4 + -0x10) + -2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_1 == (longlong *)0x0) {
      param_2 = 0;
    }
    else {
      bVar4 = *(uint *)(param_4 + -0x10) < local_c;
      param_2 = CONCAT31(uVar3,bVar4);
      if (bVar4) {
        local_c = *(uint *)(param_4 + -0x10);
      }
      FUN_0040465c(local_10,*(longlong **)(param_4 + -0x14),local_c);
      *(uint *)(param_4 + -0x14) = *(int *)(param_4 + -0x14) + local_c;
      *(int *)(param_4 + -0x10) = *(int *)(param_4 + -0x10) - local_c;
      param_3 = extraout_ECX_00;
    }
    if (*(char *)(param_4 + -0x15) != '\0') {
      param_2 = FUN_004160a8(iVar1,local_14,param_3,param_4);
    }
  }
  return param_2;
}


