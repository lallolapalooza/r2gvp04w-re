/*
 * Function: FUN_0041b87c
 * Address: 0041b87c
 * Size: 58 bytes
 * Calling Convention: __register
 */

void FUN_0041b87c(longlong *param_1,int *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    psVar1 = (short *)FUN_0041bb98((uint)param_1);
    uVar2 = FUN_0041b8d0(*psVar1);
    if ((char)uVar2 == '\0') {
      FUN_004073a8(param_2,param_1,(longlong *)&DAT_0041b8c4);
      return;
    }
  }
  FUN_00406dfc(param_2,param_1);
  return;
}


