/*
 * Function: FUN_0040b920
 * Address: 0040b920
 * Size: 44 bytes
 * Calling Convention: __register
 */

int FUN_0040b920(void)

{
  byte *in_stack_00000004;
  byte *in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 0) {
    return 0;
  }
  for (; (in_stack_0000000c = in_stack_0000000c + -1, in_stack_0000000c != 0 &&
         (*in_stack_00000004 == *in_stack_00000008)); in_stack_00000004 = in_stack_00000004 + 1) {
    in_stack_00000008 = in_stack_00000008 + 1;
  }
  return (uint)*in_stack_00000004 - (uint)*in_stack_00000008;
}


