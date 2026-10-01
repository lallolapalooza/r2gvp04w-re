/*
 * Function: FUN_0040b968
 * Address: 0040b968
 * Size: 39 bytes
 * Calling Convention: __register
 */

undefined1 * FUN_0040b968(void)

{
  undefined1 *puVar1;
  undefined1 *in_stack_00000004;
  undefined1 *in_stack_00000008;
  int in_stack_0000000c;
  
  puVar1 = in_stack_00000004;
  while (in_stack_0000000c != 0) {
    *puVar1 = *in_stack_00000008;
    puVar1 = puVar1 + 1;
    in_stack_00000008 = in_stack_00000008 + 1;
    in_stack_0000000c = in_stack_0000000c + -1;
  }
  return in_stack_00000004;
}


