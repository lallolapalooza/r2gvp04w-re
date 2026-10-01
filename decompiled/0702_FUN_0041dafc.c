/*
 * Function: FUN_0041dafc
 * Address: 0041dafc
 * Size: 91 bytes
 * Calling Convention: __register
 */

uint FUN_0041dafc(uint param_1,byte *param_2,int param_3)

{
  if (DAT_0042e838 == 0) {
    FUN_0041dac8();
    LOCK();
    DAT_0042e838 = 1;
    UNLOCK();
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1 = (&DAT_0042e83c)[(ushort)((ushort)param_1 & 0xff ^ (ushort)*param_2)] ^ param_1 >> 8;
    param_2 = param_2 + 1;
  }
  return param_1;
}


