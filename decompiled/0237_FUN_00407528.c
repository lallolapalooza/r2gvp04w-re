/*
 * Function: FUN_00407528
 * Address: 00407528
 * Size: 183 bytes
 * Calling Convention: __register
 */

void FUN_00407528(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (param_1 != (longlong *)0x0) {
    iVar3 = *(int *)((int)param_1 + -4);
  }
  if (0 < iVar3) {
    iVar4 = 0;
    if (*param_2 != 0) {
      iVar4 = *(int *)(*param_2 + -4);
    }
    if (param_3 < 1) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_3 + -1;
      if (iVar4 < param_3 + -1) {
        iVar5 = iVar4;
      }
    }
    plVar2 = (longlong *)*param_2;
    iVar1 = iVar3 + iVar4;
    if (iVar1 < 0) {
      thunk_FUN_004045f4((byte)iVar1);
    }
    FUN_004072d0(param_2,iVar1);
    if (iVar5 < iVar4) {
      FUN_0040465c((longlong *)(*param_2 + iVar5 * 2),(longlong *)(*param_2 + (iVar3 + iVar5) * 2),
                   (iVar4 - iVar5) * 2);
    }
    if (plVar2 == param_1) {
      FUN_0040465c((longlong *)*param_2,(longlong *)(*param_2 + iVar5 * 2),iVar3 * 2);
    }
    else {
      FUN_0040465c(param_1,(longlong *)(*param_2 + iVar5 * 2),iVar3 * 2);
    }
  }
  return;
}


