/*
 * Function: FUN_0041d3f4
 * Address: 0041d3f4
 * Size: 25 bytes
 * Calling Convention: __register
 */

void FUN_0041d3f4(undefined4 *param_1)

{
  BOOL BVar1;
  
  BVar1 = SetEndOfFile((HANDLE)param_1[1]);
  if (BVar1 == 0) {
    FUN_0041d130(*param_1);
  }
  return;
}


