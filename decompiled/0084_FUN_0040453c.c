/*
 * Function: FUN_0040453c
 * Address: 0040453c
 * Size: 32 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0040453c(void)

{
  int *piVar1;
  
  piVar1 = FUN_0040ae54();
  if (*piVar1 != 0) {
    piVar1 = FUN_0040ae54();
    return *(undefined4 *)(*piVar1 + 8);
  }
  return 0;
}


