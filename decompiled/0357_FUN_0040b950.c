/*
 * Function: FUN_0040b950
 * Address: 0040b950
 * Size: 23 bytes
 * Calling Convention: __register
 */

int FUN_0040b950(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = 0;
  for (; *in_stack_00000004 != 0; in_stack_00000004 = in_stack_00000004 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


