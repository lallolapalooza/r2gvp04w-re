/*
 * Function: FUN_00419874
 * Address: 00419874
 * Size: 25 bytes
 * Calling Convention: __register
 */

int * FUN_00419874(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  do {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    LOCK();
    piVar2 = (int *)*param_1;
    if (piVar1 == piVar2) {
      *param_1 = *piVar1;
      piVar2 = piVar1;
    }
    UNLOCK();
  } while (piVar1 != piVar2);
  return piVar1;
}


