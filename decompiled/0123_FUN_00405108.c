/*
 * Function: FUN_00405108
 * Address: 00405108
 * Size: 33 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00405108(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = thunk_FUN_004051ac(*param_1,param_2);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return 0;
}


