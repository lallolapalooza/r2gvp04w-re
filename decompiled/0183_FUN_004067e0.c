/*
 * Function: FUN_004067e0
 * Address: 004067e0
 * Size: 91 bytes
 * Calling Convention: __register
 */

void FUN_004067e0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x10;
  iVar1 = DAT_00427000;
  do {
    s_Runtime_error_at_00000000_004279c1[uVar2 & 0xff] = (char)(iVar1 % 10) + '0';
    iVar1 = iVar1 / 10;
    uVar2 = uVar2 - 1;
  } while (iVar1 != 0);
  uVar3 = 0x1c;
  uVar2 = DAT_00427004;
  do {
    s_Runtime_error_at_00000000_004279c1[uVar3 & 0xff] = s_0123456789ABCDEF_004279df[uVar2 & 0xf];
    uVar2 = uVar2 >> 4;
    uVar3 = uVar3 - 1;
  } while (uVar2 != 0);
  return;
}


