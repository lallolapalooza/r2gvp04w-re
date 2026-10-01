/*
 * Function: FUN_0041b8d0
 * Address: 0041b8d0
 * Size: 18 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0041b8d0(short param_1)

{
  undefined2 in_register_00000002;
  
  if ((param_1 != 0x5c) && (param_1 != 0x2f)) {
    return 0;
  }
  return CONCAT31((int3)(CONCAT22(in_register_00000002,param_1) >> 8),1);
}


