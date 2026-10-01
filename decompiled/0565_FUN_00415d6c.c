/*
 * Function: FUN_00415d6c
 * Address: 00415d6c
 * Size: 25 bytes
 * Calling Convention: __register
 */

short * FUN_00415d6c(short *param_1)

{
  if (*param_1 == 0) {
    return param_1;
  }
  do {
    param_1 = param_1 + 1;
  } while (*param_1 != 0);
  return param_1;
}


