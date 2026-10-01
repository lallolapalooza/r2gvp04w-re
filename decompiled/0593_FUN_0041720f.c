/*
 * Function: FUN_0041720f
 * Address: 0041720f
 * Size: 212 bytes
 * Calling Convention: __register
 */

void FUN_0041720f(void)

{
  unkbyte10 Var1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  short *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int iVar11;
  short *psVar12;
  short *psVar13;
  bool bVar14;
  float10 fVar15;
  
  uVar7 = *unaff_ESI;
  uVar10 = unaff_ESI[1];
  if (uVar7 != 0 || uVar10 != 0) {
    if ((int)uVar10 < 0) {
      bVar14 = uVar7 != 0;
      uVar7 = -uVar7;
      uVar10 = -(uint)bVar14 - uVar10;
    }
    iVar8 = 0;
    iVar11 = *(int *)(unaff_EBP + 8);
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    if (3 < iVar11) {
      iVar11 = 4;
      uVar3 = uVar7;
      iVar4 = iVar8;
      do {
        iVar8 = iVar4;
        uVar7 = uVar3;
        bVar14 = 0xde0b6b2 < uVar10;
        uVar2 = uVar10 + 0xf21f494d;
        uVar10 = uVar2 - (uVar7 < 0xa7640000);
        uVar3 = uVar7 + 0x589c0000;
        iVar4 = iVar8 + 1;
      } while (bVar14 && (uVar7 < 0xa7640000) <= uVar2);
      uVar10 = uVar10 + 0xde0b6b3 + (uint)(0x589bffff < uVar7 + 0x589c0000);
    }
    *(uint *)(unaff_EBP + -0x20) = uVar7;
    *(uint *)(unaff_EBP + -0x1c) = uVar10;
    fVar15 = (float10)*(longlong *)(unaff_EBP + -0x20);
    if (4 - iVar11 != 0) {
      fVar15 = fVar15 / (float10)*(int *)(*(int *)(unaff_EBP + -4) + 0x4171fb + (4 - iVar11) * 4);
    }
    Var1 = to_bcd(fVar15);
    *(unkbyte10 *)(unaff_EBP + -0x14) = Var1;
    psVar12 = (short *)((int)unaff_EBX + 3);
    if (iVar8 != 0) {
      psVar13 = unaff_EBX + 2;
      *(char *)psVar12 = (char)iVar8 + '0';
      iVar8 = 9;
      goto LAB_004172a6;
    }
    iVar8 = 9;
    do {
      bVar9 = *(byte *)(iVar8 + -0x15 + unaff_EBP);
      bVar5 = bVar9 >> 4;
      psVar13 = psVar12;
      if (bVar5 != 0) goto LAB_004172af;
      if ((bVar9 & 0xf) != 0) goto LAB_004172b6;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  sVar6 = 0;
  bVar9 = 0;
  *(undefined1 *)((int)unaff_EBX + 3) = 0;
LAB_004172dc:
  *unaff_EBX = sVar6;
  *(byte *)(unaff_EBX + 1) = bVar9;
  return;
LAB_004172b6:
  while( true ) {
    psVar13 = (short *)((int)psVar12 + 1);
    *(byte *)psVar12 = (bVar9 & 0xf) + 0x30;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) break;
LAB_004172a6:
    bVar9 = *(byte *)(iVar8 + -0x15 + unaff_EBP);
    bVar5 = bVar9 >> 4;
LAB_004172af:
    psVar12 = (short *)((int)psVar13 + 1);
    *(byte *)psVar13 = bVar5 + 0x30;
  }
  sVar6 = (short)psVar13 - ((short)unaff_EBX + 3 + (short)iVar11);
  do {
    *(char *)psVar13 = '\0';
    psVar13 = (short *)((int)psVar13 + -1);
  } while (*(char *)psVar13 == '0');
  bVar9 = (byte)(unaff_ESI[1] >> 0x1f);
  goto LAB_004172dc;
}


