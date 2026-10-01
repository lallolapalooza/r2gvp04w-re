/*
 * Function: FUN_0041bb98
 * Address: 0041bb98
 * Size: 34 bytes
 * Calling Convention: __register
 */

uint FUN_0041bb98(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 - 4);
  }
  uVar2 = FUN_0041bbbc(param_1,param_1 + iVar1 * 2);
  return uVar2;
}


