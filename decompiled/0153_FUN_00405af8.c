/*
 * Function: FUN_00405af8
 * Address: 00405af8
 * Size: 28 bytes
 * Calling Convention: __register
 */

void FUN_00405af8(int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004057a0(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(DAT_004298f4 + 0x10))(piVar1[2],0,0);
  }
  return;
}


