/*
 * Function: FUN_004071e4
 * Address: 004071e4
 * Size: 23 bytes
 * Calling Convention: __register
 */

int FUN_004071e4(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_004070e0((int)PTR_DAT_004279f4);
    return iVar1 + 0xc;
  }
  return param_1;
}


