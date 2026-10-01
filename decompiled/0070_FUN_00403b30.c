/*
 * Function: FUN_00403b30
 * Address: 00403b30
 * Size: 38 bytes
 * Calling Convention: __register
 */

int FUN_00403b30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_00403ab0(iVar2,0,param_3,(int)&stack0xfffffffc);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  return iVar2;
}


