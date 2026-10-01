/*
 * Function: FUN_00406d78
 * Address: 00406d78
 * Size: 130 bytes
 * Calling Convention: __register
 */

void FUN_00406d78(int *param_1,LPCWSTR param_2,int param_3,ushort param_4)

{
  uint uVar1;
  
  if (param_3 < 1) {
    FUN_00406b4c(param_1);
  }
  else {
    if (param_4 == 0) {
      param_4 = (ushort)DAT_00429978;
    }
    uVar1 = FUN_00406c1c((LPSTR)0x0,0,param_2,(uint)param_4,param_3);
    FUN_004070f8(param_1,uVar1,0);
    if ((int)uVar1 < 1) {
      FUN_00406b4c(param_1);
    }
    else {
      FUN_00406c1c((LPSTR)*param_1,uVar1,param_2,(uint)param_4,param_3);
      *(ushort *)(*param_1 + -0xc) = param_4;
    }
  }
  return;
}


