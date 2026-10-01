/*
 * Function: FUN_0041def4
 * Address: 0041def4
 * Size: 91 bytes
 * Calling Convention: __register
 */

int FUN_0041def4(int param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  uint extraout_ECX;
  longlong *extraout_EDX;
  uint uVar2;
  int local_14;
  
  local_14 = 0;
  plVar1 = param_2;
  uVar2 = param_3;
  do {
    if ((int)param_3 < 1) {
      return local_14;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0xc) == 0) {
        return local_14;
      }
      FUN_0041de24(param_1,plVar1,uVar2);
    }
    uVar2 = param_3;
    if (*(uint *)(param_1 + 0x18) < param_3) {
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    FUN_0040465c((longlong *)(param_1 + 0x1c + *(int *)(param_1 + 0x14)),param_2,uVar2);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar2;
    param_2 = (longlong *)((int)param_2 + uVar2);
    param_3 = param_3 - uVar2;
    local_14 = local_14 + uVar2;
    plVar1 = extraout_EDX;
    uVar2 = extraout_ECX;
  } while( true );
}


