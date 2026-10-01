/*
 * Function: FUN_0040a0fc
 * Address: 0040a0fc
 * Size: 83 bytes
 * Calling Convention: __register
 */

int FUN_0040a0fc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint local_10;
  
  local_10 = param_3;
  iVar1 = FUN_0040a02c(param_1,param_2,&local_10);
  if ((iVar1 != 0) && ((int)local_10 < *(int *)(param_1 + 4))) {
    if ((int)local_10 < *(int *)(param_1 + 4) + -1) {
      FUN_0040465c((longlong *)(*(int *)(param_1 + 8) + 4 + local_10 * 4),
                   (longlong *)(*(int *)(param_1 + 8) + local_10 * 4),
                   ((*(int *)(param_1 + 4) - local_10) + -1) * 4);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return iVar1;
}


