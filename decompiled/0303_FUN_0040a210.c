/*
 * Function: FUN_0040a210
 * Address: 0040a210
 * Size: 21 bytes
 * Calling Convention: __register
 */

void FUN_0040a210(longlong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0040a228(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00409cd0();
  }
  *puVar1 = param_2;
  return;
}


