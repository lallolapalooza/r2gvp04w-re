/*
 * Function: FUN_00407a98
 * Address: 00407a98
 * Size: 33 bytes
 * Calling Convention: __register
 */

void FUN_00407a98(undefined1 param_1,undefined4 param_2)

{
  if (DAT_00427014 != (code *)0x0) {
    (*DAT_00427014)(param_1,param_2);
    return;
  }
  FUN_004045f4(0x10);
  return;
}


