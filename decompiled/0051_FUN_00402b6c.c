/*
 * Function: FUN_00402b6c
 * Address: 00402b6c
 * Size: 27 bytes
 * Calling Convention: __register
 */

void FUN_00402b6c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 + -4;
  iVar2 = -iVar1;
  do {
    *(longlong *)(iVar2 + param_2 + iVar1) =
         (longlong)ROUND((float10)*(longlong *)(iVar2 + param_1 + iVar1));
    iVar2 = iVar2 + 8;
  } while (iVar2 < 0);
  *(undefined4 *)(iVar2 + param_2 + iVar1) = *(undefined4 *)(iVar2 + param_1 + iVar1);
  return;
}


