/*
 * Function: FUN_004095b4
 * Address: 004095b4
 * Size: 48 bytes
 * Calling Convention: __register
 */

int * FUN_004095b4(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)*param_1;
    if (piVar2 != (int *)0x0) {
      *param_1 = 0;
      (**(code **)(*piVar2 + 8))();
      param_1 = piVar2;
    }
    return param_1;
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004045f4(0x17);
    return piVar2;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)param_2;
  return param_2;
}


