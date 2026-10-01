/*
 * Function: FUN_00404c24
 * Address: 00404c24
 * Size: 26 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404c24(void)

{
  byte bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = FUN_00404bc8();
  DAT_00429058 = CONCAT31(extraout_var,bVar1);
  uVar2 = FUN_004047f0();
  _DAT_00427020 = uVar2 & 0xffc0;
  return;
}


