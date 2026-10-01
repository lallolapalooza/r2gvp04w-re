/*
 * Function: FUN_00409424
 * Address: 00409424
 * Size: 89 bytes
 * Calling Convention: __register
 */

void FUN_00409424(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_00427034;
  if ((DAT_00427034 == (int *)0x0) || (DAT_00427034[1] != param_1)) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      piVar1 = (int *)*piVar2;
      if ((piVar1 != (int *)0x0) && (piVar1[1] == param_1)) {
        *piVar2 = *piVar1;
        FUN_004044d4((int)piVar1);
        return;
      }
    }
  }
  else {
    DAT_00427034 = (int *)*DAT_00427034;
    FUN_004044d4((int)piVar2);
  }
  return;
}


