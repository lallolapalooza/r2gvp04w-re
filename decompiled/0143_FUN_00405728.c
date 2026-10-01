/*
 * Function: FUN_00405728
 * Address: 00405728
 * Size: 41 bytes
 * Calling Convention: __register
 */

void FUN_00405728(undefined4 *param_1)

{
  if ((DAT_004298f4 != 0) && (param_1[3] != 0)) {
    (**(code **)(DAT_004298f4 + 4))(param_1[3]);
  }
  FUN_00403334(param_1);
  return;
}


