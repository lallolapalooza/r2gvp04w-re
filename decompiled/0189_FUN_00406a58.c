/*
 * Function: FUN_00406a58
 * Address: 00406a58
 * Size: 59 bytes
 * Calling Convention: __register
 */

void FUN_00406a58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000000;
  
  if (DAT_00429030 == (code *)0x0) {
    FUN_004045a8(CONCAT31((int3)((uint)param_1 >> 8),0x15),in_stack_00000000);
  }
  else {
    (*DAT_00429030)(param_1,param_2,param_3);
  }
  return;
}


