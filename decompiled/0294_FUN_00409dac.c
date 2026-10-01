/*
 * Function: FUN_00409dac
 * Address: 00409dac
 * Size: 95 bytes
 * Calling Convention: __register
 */

bool FUN_00409dac(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    FUN_00409cec((int)param_1);
    iVar1 = 0x1f;
    piVar2 = param_1 + 2;
    do {
      FUN_00409c08(piVar2);
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x1f;
    piVar2 = param_1 + 0x21;
    do {
      FUN_00409c08(piVar2);
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_00405728((undefined4 *)param_1[1]);
    FUN_00408110(param_1,PTR_DAT_00409638);
  }
  return param_1 != (int *)0x0;
}


