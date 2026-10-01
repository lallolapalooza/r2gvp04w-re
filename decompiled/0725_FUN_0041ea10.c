/*
 * Function: FUN_0041ea10
 * Address: 0041ea10
 * Size: 118 bytes
 * Calling Convention: __register
 */

int FUN_0041ea10(ushort *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0041e860(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_0041e8e8((int)(param_1 + param_3 * 8 + 2),3,param_2);
  }
  else {
    iVar1 = FUN_0041e860(param_1 + 1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_0041e8e8((int)(param_1 + param_3 * 8 + 0x82),3,param_2);
      iVar1 = iVar1 + 8;
    }
    else {
      iVar1 = FUN_0041e8e8((int)(param_1 + 0x102),8,param_2);
      iVar1 = iVar1 + 0x10;
    }
  }
  return iVar1;
}


