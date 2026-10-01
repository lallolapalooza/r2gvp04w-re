/*
 * Function: FUN_004045a8
 * Address: 004045a8
 * Size: 73 bytes
 * Calling Convention: __register
 */

void FUN_004045a8(uint param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xffffff7f;
  if (DAT_00429010 != (code *)0x0) {
    (*DAT_00429010)(uVar2,param_2);
  }
  if ((byte)uVar2 == 0) {
    pvVar1 = FUN_0040ae54();
    uVar2 = *(uint *)((int)pvVar1 + 4);
  }
  else if ((byte)uVar2 < 0x1d) {
    uVar2 = (uint)(byte)(&DAT_00427764)[param_1 & 0x7f];
  }
  FUN_0040459c(uVar2 & 0xff,param_2);
  return;
}


