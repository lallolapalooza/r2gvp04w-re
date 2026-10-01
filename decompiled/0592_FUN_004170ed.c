/*
 * Function: FUN_004170ed
 * Address: 004170ed
 * Size: 274 bytes
 * Calling Convention: __register
 */

void FUN_004170ed(void)

{
  char *pcVar1;
  unkbyte10 Var2;
  float10 fVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  undefined2 *unaff_EBX;
  int unaff_EBP;
  float10 *unaff_ESI;
  short *psVar9;
  short *psVar10;
  byte bVar11;
  float10 fVar12;
  
  bVar11 = 0;
  uVar7 = *(ushort *)((int)unaff_ESI + 8);
  uVar6 = uVar7 & 0x7fff;
  if ((uVar7 & 0x7fff) == 0) {
LAB_00417118:
    uVar7 = 0;
  }
  else {
    if (uVar6 != 0x7fff) {
      fVar12 = *unaff_ESI;
      *(int *)(unaff_EBP + -8) = ((int)((uVar6 - 0x3fff) * 0x4d10) >> 0x10) + 1;
      fVar12 = ABS(fVar12);
      thunk_FUN_00404aa0();
      fVar12 = ROUND(fVar12);
      fVar3 = *(float10 *)(&DAT_004281d0 + *(int *)(unaff_EBP + -4));
      *(ushort *)(unaff_EBP + -10) =
           (ushort)(fVar3 < fVar12) << 8 | (ushort)(NAN(fVar3) || NAN(fVar12)) << 10 |
           (ushort)(fVar3 == fVar12) << 0xe;
      if ((*(ushort *)(unaff_EBP + -10) & 0x4100) != 0) {
        fVar12 = fVar12 / (float10)*(int *)((int)&DAT_004281dc + *(int *)(unaff_EBP + -4));
        *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
      }
      Var2 = to_bcd(fVar12);
      *(unkbyte10 *)(unaff_EBP + -0x14) = Var2;
      iVar8 = 9;
      psVar9 = (short *)((int)unaff_EBX + 3);
      do {
        bVar4 = *(byte *)(iVar8 + -0x15 + unaff_EBP);
        psVar10 = psVar9 + (uint)bVar11 * -2 + 1;
        *psVar9 = (CONCAT11(bVar4,bVar4 >> 4) & 0xfff) + 0x3030;
        iVar8 = iVar8 + -1;
        psVar9 = psVar10;
      } while (iVar8 != 0);
      *(undefined1 *)psVar10 = 0;
      uVar6 = *(int *)(unaff_EBP + -8) + *(int *)(unaff_EBP + 8);
      if ((int)uVar6 < 0) {
        uVar6 = 0;
        goto LAB_00417118;
      }
      if (*(uint *)(unaff_EBP + 0xc) <= uVar6) {
        uVar6 = *(uint *)(unaff_EBP + 0xc);
      }
      if (uVar6 < 0x12) {
        if (*(byte *)((int)unaff_EBX + uVar6 + 3) < 0x35) goto LAB_004171da;
        do {
          *(undefined1 *)((int)unaff_EBX + uVar6 + 3) = 0;
          if ((int)(uVar6 - 1) < 0) {
            *(undefined2 *)((int)unaff_EBX + 3) = 0x31;
            *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
            break;
          }
          pcVar1 = (char *)((int)unaff_EBX + uVar6 + 2);
          *pcVar1 = *pcVar1 + '\x01';
          iVar8 = uVar6 + 2;
          uVar6 = uVar6 - 1;
        } while (0x39 < *(byte *)((int)unaff_EBX + iVar8));
      }
      else {
        uVar6 = 0x12;
LAB_004171da:
        do {
          *(undefined1 *)((int)unaff_EBX + uVar6 + 3) = 0;
          if ((int)(uVar6 - 1) < 0) {
            bVar11 = 0;
            goto LAB_004171ed;
          }
          iVar8 = uVar6 + 2;
          uVar6 = uVar6 - 1;
        } while (*(char *)((int)unaff_EBX + iVar8) == '0');
      }
      bVar11 = (byte)((ushort)*(undefined2 *)((int)unaff_ESI + 8) >> 8);
LAB_004171ed:
      uVar5 = (undefined2)*(undefined4 *)(unaff_EBP + -8);
      goto LAB_004171f0;
    }
    if ((((unkuint10)*unaff_ESI & 0x8000000000000000) != 0) &&
       ((*(int *)unaff_ESI != 0 || (*(int *)((int)unaff_ESI + 4) != -0x80000000)))) {
      uVar6 = 0x8000;
      goto LAB_00417118;
    }
  }
  bVar11 = (byte)(uVar7 >> 8);
  uVar5 = (undefined2)uVar6;
  *(undefined1 *)((int)unaff_EBX + 3) = 0;
LAB_004171f0:
  *unaff_EBX = uVar5;
  *(byte *)(unaff_EBX + 1) = bVar11 >> 7;
  return;
}


