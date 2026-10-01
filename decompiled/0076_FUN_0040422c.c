/*
 * Function: FUN_0040422c
 * Address: 0040422c
 * Size: 66 bytes
 * Calling Convention: __register
 */

void FUN_0040422c(void)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  puVar2 = &DAT_0042706e;
  uVar1 = 0;
  do {
    if ((DAT_00429ad2 == '\0') || (uVar4 = uVar1, (*puVar2 & 0xf) == 0)) {
      uVar4 = (uint)(*puVar2 >> 3);
      for (; uVar1 < uVar4; uVar1 = uVar1 + 1) {
        (&DAT_0042998c)[uVar1] = (char)iVar3 * '\x04';
      }
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x10;
    uVar1 = uVar4;
  } while (iVar3 != 0x37);
  return;
}


