/*
 * Function: FUN_004073a8
 * Address: 004073a8
 * Size: 133 bytes
 * Calling Convention: __register
 */

void FUN_004073a8(int *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  
  if (param_2 == (longlong *)0x0) {
    FUN_00406dfc(param_1,param_3);
    return;
  }
  if (param_3 == (longlong *)0x0) {
    if (param_2 != (longlong *)0x0) {
      if (*(uint *)(param_2 + -1) < 0x80000000) {
        LOCK();
        *(int *)(param_2 + -1) = (int)param_2[-1] + 1;
        UNLOCK();
      }
      else {
        plVar4 = (longlong *)FUN_00406a94(*(int *)((int)param_2 + -4));
        FUN_0040465c(param_2,plVar4,*(int *)((int)param_2 + -4) << 1);
        param_2 = plVar4;
      }
    }
    LOCK();
    iVar2 = *param_1;
    *param_1 = (int)param_2;
    UNLOCK();
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
      LOCK();
      piVar1 = (int *)(iVar2 + -8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_004044d4(iVar2 + -0xc);
      }
    }
    return;
  }
  if (param_2 == (longlong *)*param_1) {
    FUN_00407350(param_1,param_3);
    return;
  }
  if (param_3 != (longlong *)*param_1) {
    FUN_00406dfc(param_1,param_2);
    FUN_00407350(param_1,param_3);
    return;
  }
  uVar3 = *(int *)((int)param_2 + -4) + *(int *)((int)param_3 + -4);
  if ((uVar3 & 0xc0000000) == 0) {
    plVar4 = (longlong *)FUN_00406a94(uVar3);
    FUN_0040465c(param_2,plVar4,*(int *)((int)param_2 + -4) << 1);
    FUN_0040465c(param_3,(longlong *)(*(int *)((int)param_2 + -4) * 2 + (int)plVar4),
                 *(int *)((int)param_3 + -4) << 1);
    if (plVar4 != (longlong *)0x0) {
      *(int *)(plVar4 + -1) = (int)plVar4[-1] + -1;
    }
    FUN_00406dfc(param_1,plVar4);
    return;
  }
  thunk_FUN_004045f4((byte)uVar3);
  return;
}


