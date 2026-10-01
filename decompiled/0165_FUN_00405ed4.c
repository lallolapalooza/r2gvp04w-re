/*
 * Function: FUN_00405ed4
 * Address: 00405ed4
 * Size: 39 bytes
 * Calling Convention: __register
 */

undefined4 * FUN_00405ed4(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  undefined4 uStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  if (1 < DAT_00427024) {
    uStack_10 = 0x405ee5;
    pcStack_c = param_3;
    uStack_8 = param_2;
    puStack_4 = param_1;
    FUN_00405eb4((int)param_1,param_2,param_3);
    param_1 = &uStack_10;
    (*DAT_0042901c)();
  }
  return param_1;
}


