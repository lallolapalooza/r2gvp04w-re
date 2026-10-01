/*
 * Function: FUN_00409c08
 * Address: 00409c08
 * Size: 45 bytes
 * Calling Convention: __register
 */

void FUN_00409c08(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    *param_1 = 0;
    piVar3 = (int *)(iVar2 + -8);
    if (0 < *piVar3) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        FUN_00403334((undefined4 *)(iVar2 + -8));
      }
    }
  }
  return;
}


