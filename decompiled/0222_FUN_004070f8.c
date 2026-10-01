/*
 * Function: FUN_004070f8
 * Address: 004070f8
 * Size: 118 bytes
 * Calling Convention: __register
 */

void FUN_004070f8(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  int local_14;
  
  local_14 = 0;
  plVar4 = (longlong *)0x0;
  if (0 < (int)param_2) {
    iVar1 = *param_1;
    if ((iVar1 != 0) && (*(int *)(iVar1 + -8) == 1)) {
      if (!SCARRY4(param_2,0xd)) {
        local_14 = iVar1 + -0xc;
        FUN_004044ec(&local_14,param_2 + 0xd);
        *param_1 = local_14 + 0xc;
        *(uint *)(local_14 + 8) = param_2;
        *(undefined1 *)(param_2 + local_14 + 0xc) = 0;
        return;
      }
      thunk_FUN_004045f4((byte)(iVar1 + -0xc));
      return;
    }
    plVar4 = (longlong *)FUN_00406ad4(param_2,param_3);
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
      uVar3 = *(uint *)((int)plVar2 + -4);
      if ((int)param_2 <= (int)*(uint *)((int)plVar2 + -4)) {
        uVar3 = param_2;
      }
      FUN_0040465c(plVar2,plVar4,uVar3);
    }
  }
  FUN_00406b4c(param_1);
  *param_1 = (int)plVar4;
  return;
}


