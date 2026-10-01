/*
 * Function: FUN_00415e8c
 * Address: 00415e8c
 * Size: 90 bytes
 * Calling Convention: __register
 */

void FUN_00415e8c(int param_1,longlong *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined2 uStack_56;
  longlong alStack_54 [8];
  undefined1 *local_14;
  undefined1 local_10;
  
  if (0x1f < param_3) {
    param_3 = 0x1f;
  }
  uVar1 = FUN_00419d04((int)param_2,param_3 - 1);
  if ((char)uVar1 == '\x01') {
    param_3 = param_3 - 1;
  }
  FUN_00415d88(alStack_54,param_2,param_3);
  *(undefined2 *)((int)alStack_54 + param_3 * 2) = 0;
  local_10 = 10;
  local_14 = (undefined1 *)alStack_54;
  FUN_0041514c((&PTR_PTR_004281bc)[param_1],&local_14,0);
  return;
}


