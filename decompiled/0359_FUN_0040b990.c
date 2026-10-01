/*
 * Function: FUN_0040b990
 * Address: 0040b990
 * Size: 35 bytes
 * Calling Convention: __register
 */

void FUN_0040b990(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  
  puVar1 = &DAT_00427a24;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined4 *)*puVar2;
    if (puVar1 == (undefined4 *)0x0) break;
  } while (in_stack_00000004 != puVar1);
  if (in_stack_00000004 == (undefined4 *)*puVar2) {
    *puVar2 = *in_stack_00000004;
  }
  return;
}


