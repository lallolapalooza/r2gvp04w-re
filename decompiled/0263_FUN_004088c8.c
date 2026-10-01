/*
 * Function: FUN_004088c8
 * Address: 004088c8
 * Size: 66 bytes
 * Calling Convention: __register
 */

int * FUN_004088c8(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)*param_1;
  if ((piVar2 != (int *)0x0) && (*param_1 = 0, 0 < piVar2[-2])) {
    LOCK();
    piVar1 = piVar2 + -2;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      puVar3 = *(undefined4 **)(*(byte *)(param_2 + 1) + 6 + param_2);
      if ((puVar3 != (undefined4 *)0x0) && (piVar2[-1] != 0)) {
        FUN_00407970(piVar2,(char *)*puVar3,piVar2[-1]);
      }
      FUN_004044d4((int)(piVar2 + -2));
    }
  }
  return param_1;
}


