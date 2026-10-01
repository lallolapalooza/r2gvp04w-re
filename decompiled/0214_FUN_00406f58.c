/*
 * Function: FUN_00406f58
 * Address: 00406f58
 * Size: 67 bytes
 * Calling Convention: __register
 */

int FUN_00406f58(int *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(int *)(iVar3 + -8) != 1)) {
    plVar2 = (longlong *)FUN_00406ad4(*(int *)(iVar3 + -4),(uint)*(ushort *)(iVar3 + -0xc));
    LOCK();
    plVar1 = (longlong *)*param_1;
    *param_1 = (int)plVar2;
    UNLOCK();
    FUN_0040465c(plVar1,plVar2,*(uint *)((int)plVar1 + -4));
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


