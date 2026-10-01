/*
 * Function: FUN_00415df0
 * Address: 00415df0
 * Size: 46 bytes
 * Calling Convention: __register
 */

short * FUN_00415df0(short *param_1,short param_2)

{
  short *psVar1;
  short *psVar2;
  
  if (param_2 == 0) {
    psVar1 = FUN_00415d6c(param_1);
  }
  else {
    psVar1 = (short *)0x0;
    while( true ) {
      while (psVar2 = param_1, param_2 == *psVar2) {
        psVar1 = psVar2;
        param_1 = psVar2 + 1;
      }
      if (*psVar2 == 0) break;
      param_1 = psVar2 + 1;
    }
  }
  return psVar1;
}


