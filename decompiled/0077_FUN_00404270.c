/*
 * Function: FUN_00404270
 * Address: 00404270
 * Size: 299 bytes
 * Calling Convention: __register
 */

void FUN_00404270(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  int iVar5;
  
  iVar5 = 0x37;
  ppuVar4 = &PTR_LAB_00427088;
  do {
    if (*ppuVar4 == (undefined *)0x0) {
      *ppuVar4 = FUN_00402b3c;
    }
    ppuVar4[-4] = (undefined *)(ppuVar4 + -7);
    ppuVar4[-5] = (undefined *)(ppuVar4 + -7);
    ppuVar4[-2] = (undefined *)0x0;
    ppuVar4[-3] = (undefined *)0x1;
    uVar2 = ((uint)*(ushort *)((int)ppuVar4 + -0x1a) * 0xc + 0xef & 0xffffff00) + 0x30;
    if (uVar2 < 0xb30) {
      uVar2 = 0xb30;
    }
    uVar2 = uVar2 + 0x4d0 >> 0xd;
    if (7 < uVar2) {
      uVar2 = 7;
    }
    *(char *)((int)ppuVar4 + -0x1b) = (char)(0xff << ((byte)uVar2 & 0x1f));
    *(short *)(ppuVar4 + -6) = (short)(uVar2 << 0xd) + 0xb30;
    uVar1 = *(ushort *)((int)ppuVar4 + -0x1a);
    uVar2 = ((uint)uVar1 * 0x30 + 0xef & 0xffffff00) + 0x30;
    if (uVar2 < 0x7330) {
      uVar2 = 0x7330;
    }
    if (0xff30 < uVar2) {
      uVar2 = 0xff30;
    }
    *(ushort *)((int)ppuVar4 + -0x16) =
         (uVar1 * (short)((uVar2 - 0x20) / (uint)uVar1) + 0xef & 0xff00) + 0x30;
    ppuVar4 = ppuVar4 + 8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_0040422c();
  DAT_00429ad4 = &DAT_00429ad4;
  DAT_00429ad8 = &DAT_00429ad4;
  iVar5 = 0x400;
  puVar3 = &DAT_00429b74;
  do {
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  DAT_0042bb78 = &DAT_0042bb78;
  DAT_0042bb7c = &DAT_0042bb78;
  return;
}


