/*
 * Function: FUN_00406f14
 * Address: 00406f14
 * Size: 65 bytes
 * Calling Convention: __register
 */

int FUN_00406f14(int *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(int *)(iVar3 + -8) != 1)) {
    plVar2 = (longlong *)FUN_00406a94(*(int *)(iVar3 + -4));
    LOCK();
    plVar1 = (longlong *)*param_1;
    *param_1 = (int)plVar2;
    UNLOCK();
    FUN_0040465c(plVar1,plVar2,*(int *)((int)plVar1 + -4) << 1);
    if (0 < (int)plVar1[-1]) {
      LOCK();
      plVar2 = plVar1 + -1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        FUN_004044d4((int)plVar1 + -0xc);
      }
    }
    iVar3 = *param_1;
  }
  return iVar3;
}


