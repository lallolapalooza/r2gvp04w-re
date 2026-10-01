/*
 * Function: FUN_00415718
 * Address: 00415718
 * Size: 40 bytes
 * Calling Convention: __register
 */

void FUN_00415718(uint param_1,int *param_2)

{
  if ((int)param_1 < 0) {
    FUN_0041530c(-param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_2);
    return;
  }
  FUN_0041530c(param_1,0,param_2);
  return;
}


