/*
 * Function: FUN_0041e800
 * Address: 0041e800
 * Size: 96 bytes
 * Calling Convention: __register
 */

uint FUN_0041e800(int *param_1,uint param_2,int param_3)

{
  byte bVar1;
  int extraout_ECX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar3 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_2;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar3 = uVar3 >> 1;
    uVar4 = uVar4 * 2;
    if (uVar3 <= uVar5) {
      uVar5 = uVar5 - uVar3;
      uVar4 = uVar4 | 1;
    }
    if (uVar3 < 0x1000000) {
      uVar3 = uVar3 << 8;
      bVar1 = FUN_0041e780(param_1,uVar2,param_3);
      uVar2 = (uint)bVar1 | uVar5 << 8;
      param_3 = extraout_ECX;
      uVar5 = uVar2;
    }
  }
  param_1[2] = uVar3;
  param_1[3] = uVar5;
  return uVar4;
}


