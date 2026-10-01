/*
 * Function: FUN_0041bc88
 * Address: 0041bc88
 * Size: 20 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0041bc88(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041bc34(param_1);
  if ((uVar1 != 0xffffffff) && ((uVar1 & 0x10) != 0)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return 0;
}


