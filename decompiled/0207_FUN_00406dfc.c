/*
 * Function: FUN_00406dfc
 * Address: 00406dfc
 * Size: 69 bytes
 * Calling Convention: __register
 */

void FUN_00406dfc(int *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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


