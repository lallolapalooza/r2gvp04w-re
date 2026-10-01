/*
 * Function: FUN_00406f00
 * Address: 00406f00
 * Size: 19 bytes
 * Calling Convention: __register
 */

int FUN_00406f00(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    for (; *(short *)(param_1 + iVar1 * 2) != 0; iVar1 = iVar1 + 1) {
    }
  }
  return iVar1;
}


