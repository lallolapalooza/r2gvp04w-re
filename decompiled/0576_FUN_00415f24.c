/*
 * Function: FUN_00415f24
 * Address: 00415f24
 * Size: 76 bytes
 * Calling Convention: __register
 */

ushort * FUN_00415f24(ushort *param_1,uint param_2,ushort *param_3,undefined4 *param_4,int param_5,
                     int param_6)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 == (ushort *)0x0) || (param_3 == (ushort *)0x0)) {
    param_1 = (ushort *)0x0;
  }
  else {
    uVar1 = FUN_00406f00((int)param_3);
    iVar2 = FUN_004162e8(param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
    param_1[iVar2] = 0;
  }
  return param_1;
}


