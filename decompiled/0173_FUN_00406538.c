/*
 * Function: FUN_00406538
 * Address: 00406538
 * Size: 38 bytes
 * Calling Convention: __register
 */

void FUN_00406538(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_FS_OFFSET;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*in_FS_OFFSET;
    if (piVar1 == piVar2) {
      *in_FS_OFFSET = *piVar1;
      return;
    }
    for (; piVar2 != (int *)0xffffffff; piVar2 = (int *)*piVar2) {
      if ((int *)*piVar2 == piVar1) {
        *piVar2 = *piVar1;
        return;
      }
    }
  }
  return;
}


