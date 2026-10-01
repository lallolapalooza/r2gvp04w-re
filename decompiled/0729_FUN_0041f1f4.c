/*
 * Function: FUN_0041f1f4
 * Address: 0041f1f4
 * Size: 14 bytes
 * Calling Convention: __register
 */

void FUN_0041f1f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 0xfffffffe;
  return;
}


