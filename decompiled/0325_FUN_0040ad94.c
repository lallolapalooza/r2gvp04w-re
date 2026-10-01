/*
 * Function: FUN_0040ad94
 * Address: 0040ad94
 * Size: 16 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0040ad94(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  LOCK();
  uVar1 = *in_stack_00000004;
  *in_stack_00000004 = in_stack_00000008;
  UNLOCK();
  return uVar1;
}


