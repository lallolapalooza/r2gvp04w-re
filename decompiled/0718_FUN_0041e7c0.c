/*
 * Function: FUN_0041e7c0
 * Address: 0041e7c0
 * Size: 61 bytes
 * Calling Convention: __register
 */

void FUN_0041e7c0(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  param_1[1] = 0;
  uVar3 = 0;
  *param_1 = 0;
  uVar2 = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = -1;
  iVar4 = 0;
  do {
    bVar1 = FUN_0041e780(param_1,uVar3,uVar2);
    uVar2 = param_1[3] << 8;
    uVar3 = bVar1 | uVar2;
    iVar4 = iVar4 + 1;
    param_1[3] = uVar3;
  } while (iVar4 < 5);
  return;
}


