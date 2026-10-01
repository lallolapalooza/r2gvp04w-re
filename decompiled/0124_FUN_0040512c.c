/*
 * Function: FUN_0040512c
 * Address: 0040512c
 * Size: 48 bytes
 * Calling Convention: __register
 */

int * FUN_0040512c(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  if (param_1 != (int *)0x0) {
    uVar1 = FUN_00405108(param_1,param_2);
    if ((char)uVar1 == '\0') {
      FUN_004045a8(CONCAT31((int3)((uint)uVar1 >> 8),10),in_stack_00000000);
    }
  }
  return param_1;
}


