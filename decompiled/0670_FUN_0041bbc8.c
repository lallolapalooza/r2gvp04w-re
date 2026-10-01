/*
 * Function: FUN_0041bbc8
 * Address: 0041bbc8
 * Size: 107 bytes
 * Calling Convention: __register
 */

void FUN_0041bbc8(longlong *param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_0041b968((short *)param_1,'\x01');
  iVar4 = 0;
  if (param_1 != (longlong *)0x0) {
    iVar4 = *(int *)((int)param_1 + -4);
  }
  for (; iVar1 < iVar4; iVar4 = iVar4 + -1) {
    psVar2 = (short *)FUN_0041bbbc((uint)param_1,(int)param_1 + iVar4 * 2);
    uVar3 = FUN_0041b8d0(*psVar2);
    if ((char)uVar3 == '\0') break;
  }
  iVar1 = 0;
  if (param_1 != (longlong *)0x0) {
    iVar1 = *(int *)((int)param_1 + -4);
  }
  if (iVar1 == iVar4) {
    FUN_00406dfc(param_2,param_1);
  }
  else {
    FUN_004074e0((int)param_1,1,iVar4,param_2);
  }
  return;
}


