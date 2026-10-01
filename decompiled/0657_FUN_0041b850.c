/*
 * Function: FUN_0041b850
 * Address: 0041b850
 * Size: 31 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0041b850(uint *param_1,uint *param_2)

{
  if (param_2[1] < param_1[1]) {
    return 1;
  }
  if (param_2[1] <= param_1[1]) {
    if (*param_2 < *param_1) {
      return 1;
    }
    if (*param_2 <= *param_1) {
      return 0;
    }
  }
  return 0xffffffff;
}


