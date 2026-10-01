/*
 * Function: FUN_0041e970
 * Address: 0041e970
 * Size: 42 bytes
 * Calling Convention: __register
 */

uint FUN_0041e970(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1;
  do {
    uVar1 = FUN_0041e860((ushort *)(param_1 + uVar2 * 2),param_2);
    uVar2 = uVar1 | uVar2 * 2;
  } while ((int)uVar2 < 0x100);
  return uVar2;
}


