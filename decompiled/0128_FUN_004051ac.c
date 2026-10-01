/*
 * Function: FUN_004051ac
 * Address: 004051ac
 * Size: 17 bytes
 * Calling Convention: __register
 */

undefined4 FUN_004051ac(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    if (*(int **)(param_1 + -0x30) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x30);
  }
  return 0;
}


