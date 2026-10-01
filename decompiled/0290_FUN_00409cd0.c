/*
 * Function: FUN_00409cd0
 * Address: 00409cd0
 * Size: 25 bytes
 * Calling Convention: __register
 */

int FUN_00409cd0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00403844(0x100);
  uVar2 = FUN_004056b0();
  *(undefined4 *)(iVar1 + 4) = uVar2;
  return iVar1;
}


