/*
 * Function: FUN_0041dac8
 * Address: 0041dac8
 * Size: 49 bytes
 * Calling Convention: __register
 */

void FUN_0041dac8(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar2 = &DAT_0042e83c;
  do {
    iVar3 = 8;
    uVar1 = uVar4;
    do {
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar1 >> 1;
      }
      else {
        uVar1 = uVar1 >> 1 ^ 0xedb88320;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *puVar2 = uVar1;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 != 0x100);
  return;
}


