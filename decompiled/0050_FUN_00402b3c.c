/*
 * Function: FUN_00402b3c
 * Address: 00402b3c
 * Size: 45 bytes
 * Calling Convention: __register
 */

void FUN_00402b3c(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_3 + -0xc;
  iVar2 = param_1 + iVar3;
  iVar4 = param_2 + iVar3;
  for (iVar3 = -iVar3; iVar3 < 0; iVar3 = iVar3 + 0x10) {
    lVar1 = *(longlong *)(iVar3 + iVar2);
    *(longlong *)(iVar3 + 8 + iVar4) = (longlong)ROUND((float10)*(longlong *)(iVar3 + 8 + iVar2));
    *(longlong *)(iVar3 + iVar4) = (longlong)ROUND((float10)lVar1);
  }
  *(longlong *)(iVar3 + iVar4) = (longlong)ROUND((float10)*(longlong *)(iVar3 + iVar2));
  *(undefined4 *)(iVar3 + 8 + iVar4) = *(undefined4 *)(iVar3 + 8 + iVar2);
  return;
}


