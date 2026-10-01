/*
 * Function: FUN_004159dc
 * Address: 004159dc
 * Size: 56 bytes
 * Calling Convention: __register
 */

void FUN_004159dc(uint param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  uVar1 = param_1;
  while (uVar1 = uVar1 >> 4, uVar1 != 0) {
    iVar2 = iVar2 + 1;
  }
  FUN_004157b4(param_1,param_2,iVar2,param_3,0x30);
  return;
}


