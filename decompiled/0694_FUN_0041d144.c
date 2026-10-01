/*
 * Function: FUN_0041d144
 * Address: 0041d144
 * Size: 40 bytes
 * Calling Convention: __register
 */

void FUN_0041d144(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
  if (param_3 != iVar1) {
    FUN_0041d07c(*param_1,0x26);
  }
  return;
}


