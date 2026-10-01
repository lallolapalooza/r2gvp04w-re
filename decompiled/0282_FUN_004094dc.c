/*
 * Function: FUN_004094dc
 * Address: 004094dc
 * Size: 34 bytes
 * Calling Convention: __register
 */

void FUN_004094dc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00427030;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      *param_1 = DAT_00427030;
      DAT_00427030 = param_1;
      return;
    }
    if (param_1 == puVar1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return;
}


