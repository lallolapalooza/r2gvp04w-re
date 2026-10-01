/*
 * Function: FUN_0040570c
 * Address: 0040570c
 * Size: 26 bytes
 * Calling Convention: __register
 */

void FUN_0040570c(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_00405a94(param_1);
  uVar1 = *puVar2;
  if ((undefined4 *)(uVar1 & 0xfffffffe) != (undefined4 *)0x0) {
    *puVar2 = 0;
    FUN_00405728((undefined4 *)(uVar1 & 0xfffffffe));
  }
  return;
}


