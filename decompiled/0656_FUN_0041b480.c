/*
 * Function: FUN_0041b480
 * Address: 0041b480
 * Size: 30 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0041b480(int param_1,int param_2)

{
  if ((DAT_0042c6ec <= param_1) && ((param_1 != DAT_0042c6ec || (DAT_0042c6f0 < param_2)))) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


