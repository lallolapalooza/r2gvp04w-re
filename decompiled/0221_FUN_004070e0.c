/*
 * Function: FUN_004070e0
 * Address: 004070e0
 * Size: 23 bytes
 * Calling Convention: __register
 */

int FUN_004070e0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_004070e0((int)PTR_DAT_004279f0);
    return iVar1 + 0xc;
  }
  return param_1;
}


