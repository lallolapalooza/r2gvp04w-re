/*
 * Function: FUN_00407350
 * Address: 00407350
 * Size: 85 bytes
 * Calling Convention: __register
 */

void FUN_00407350(int *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    iVar2 = *(int *)((int)plVar3 + -4);
    uVar5 = *(int *)((int)param_2 + -4) + iVar2;
    if ((uVar5 & 0xc0000000) == 0) {
      if (param_2 == plVar3) {
        FUN_004072d0(param_1,uVar5);
        param_2 = (longlong *)*param_1;
        iVar4 = iVar2;
      }
      else {
        FUN_004072d0(param_1,uVar5);
        iVar4 = *(int *)((int)param_2 + -4);
      }
      FUN_0040465c(param_2,(longlong *)(*param_1 + iVar2 * 2),iVar4 << 1);
      return;
    }
    thunk_FUN_004045f4((byte)param_1);
    return;
  }
  if (param_2 != (longlong *)0x0) {
    if (*(uint *)(param_2 + -1) < 0x80000000) {
      LOCK();
      *(int *)(param_2 + -1) = (int)param_2[-1] + 1;
      UNLOCK();
    }
    else {
      plVar3 = (longlong *)FUN_00406a94(*(int *)((int)param_2 + -4));
      FUN_0040465c(param_2,plVar3,*(int *)((int)param_2 + -4) << 1);
      param_2 = plVar3;
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


