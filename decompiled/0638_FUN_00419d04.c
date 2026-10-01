/*
 * Function: FUN_00419d04
 * Address: 00419d04
 * Size: 53 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00419d04(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint3 uVar3;
  
  uVar2 = 0;
  uVar1 = *(ushort *)(param_1 + -2 + param_2 * 2);
  if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
    uVar1 = *(ushort *)(param_1 + -2 + param_2 * 2);
    uVar3 = (uint3)(byte)(uVar1 >> 8);
    if ((uVar1 < 0xd800) || (0xdbff < uVar1)) {
      uVar2 = CONCAT31(uVar3,2);
    }
    else {
      uVar2 = CONCAT31(uVar3,1);
    }
  }
  return uVar2;
}


