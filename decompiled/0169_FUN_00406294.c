/*
 * Function: FUN_00406294
 * Address: 00406294
 * Size: 54 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00406294(void)

{
  int iVar1;
  code *extraout_ECX;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000004[1] & 6) != 0) {
    iVar1 = *(int *)(in_stack_00000008 + 4);
    *(undefined4 *)(in_stack_00000008 + 4) = 0x4062c4;
    FUN_00405ed4(in_stack_00000004,in_stack_00000008,(char *)(iVar1 + 5));
    (*extraout_ECX)();
  }
  return 1;
}


