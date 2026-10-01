/*
 * Function: FUN_0040a8a0
 * Address: 0040a8a0
 * Size: 42 bytes
 * Calling Convention: __register
 */

int * FUN_0040a8a0(int *param_1)

{
  uint uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_0040515c((int *)*param_1,(int)PTR_DAT_00401464);
    *param_1 = 0;
    FUN_0040a86c(param_1,uVar1);
  }
  return param_1;
}


