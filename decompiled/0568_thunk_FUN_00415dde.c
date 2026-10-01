/*
 * Function: thunk_FUN_00415dde
 * Address: 00415dd4
 * Size: 2 bytes
 * Calling Convention: __register
 */

short * thunk_FUN_00415dde(short *param_1,short param_2)

{
  while( true ) {
    if (*param_1 == 0) {
      if (param_2 != 0) {
        param_1 = (short *)0x0;
      }
      return param_1;
    }
    if (param_2 == *param_1) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


