/*
 * Function: FUN_00402fb0
 * Address: 00402fb0
 * Size: 980 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00402fb0(uint param_1)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  byte *pbVar4;
  char cVar5;
  ushort uVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  
  if (0xa2c < param_1) {
    if (0x40a2c < param_1) {
      if (-1 < (int)param_1) {
        uVar17 = param_1 + 0x10013 & 0xffff0000;
        puVar10 = VirtualAlloc((LPVOID)0x0,uVar17,0x101000,4);
        if (puVar10 != (undefined4 *)0x0) {
          puVar10[2] = param_1;
          puVar10[3] = uVar17 | 4;
          FUN_00402d10();
          puVar7 = DAT_0042bb7c;
          *puVar10 = &DAT_0042bb78;
          puVar9 = puVar10;
          puVar10[1] = DAT_0042bb7c;
          DAT_0042bb7c = puVar9;
          *puVar7 = puVar10;
          DAT_0042bb74 = 0;
          puVar10 = puVar10 + 4;
        }
        return puVar10;
      }
      return (undefined4 *)0x0;
    }
    uVar17 = param_1 + 0xd3 & 0xffffff00;
    uVar18 = uVar17 + 0x30;
    if (DAT_00429055 != '\0') {
      while( true ) {
        do {
          LOCK();
          bVar19 = DAT_00429ae4 == '\0';
          if (bVar19) {
            DAT_00429ae4 = '\x01';
          }
          UNLOCK();
          if (bVar19) goto LAB_0040322e;
        } while (DAT_00429985 != '\0');
        Sleep(0);
        LOCK();
        bVar19 = DAT_00429ae4 == '\0';
        if (bVar19) {
          DAT_00429ae4 = '\x01';
        }
        UNLOCK();
        if (bVar19) break;
        Sleep(10);
      }
    }
LAB_0040322e:
    uVar15 = uVar17 - 0xb00;
    uVar14 = uVar15 >> 0xd;
    uVar11 = -1 << ((byte)(uVar15 >> 8) & 0x1f) & (&DAT_00429af4)[uVar14];
    if (uVar11 == 0) {
      uVar15 = -2 << ((byte)uVar14 & 0x1f) & _DAT_00429af0;
      if (uVar15 == 0) {
        if (DAT_00429aec < uVar18) {
          puVar10 = (undefined4 *)FUN_00402c94(uVar18);
        }
        else {
          puVar10 = (undefined4 *)((int)DAT_00429ae8 - uVar18);
          DAT_00429ae8 = puVar10;
          DAT_00429aec = DAT_00429aec - uVar18;
          puVar10[-1] = uVar18 | 2;
        }
        DAT_00429ae4 = 0;
        return puVar10;
      }
      uVar14 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
        }
      }
      uVar12 = 0;
      if ((&DAT_00429af4)[uVar14] != 0) {
        for (; ((uint)(&DAT_00429af4)[uVar14] >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      uVar12 = uVar12 | uVar14 << 5;
    }
    else {
      uVar12 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      uVar12 = uVar15 >> 8 & 0xffffffe0 | uVar12;
    }
    puVar10 = (undefined4 *)(&DAT_00429b78)[uVar12 * 2];
    puVar7 = (undefined4 *)puVar10[1];
    (&DAT_00429b78)[uVar12 * 2] = puVar7;
    *puVar7 = &DAT_00429b74 + uVar12 * 2;
    if (&DAT_00429b74 + uVar12 * 2 == puVar7) {
      bVar8 = (byte)uVar12 & 0x1f;
      puVar3 = &DAT_00429af4 + uVar14;
      *puVar3 = *puVar3 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      if (*puVar3 == 0) {
        (&DAT_00429af0)[(int)uVar14 >> 3] =
             (&DAT_00429af0)[(int)uVar14 >> 3] & ~('\x01' << (uVar14 & 7));
      }
    }
    uVar15 = (puVar10[-1] & 0xfffffff0) - uVar18;
    if (uVar15 == 0) {
      pbVar4 = (byte *)(((puVar10[-1] & 0xfffffff0) - 4) + (int)puVar10);
      *pbVar4 = *pbVar4 & 0xf7;
    }
    else {
      puVar7 = (undefined4 *)(uVar18 + (int)puVar10);
      puVar7[-1] = uVar15 + 3;
      *(uint *)((uVar15 - 8) + (int)puVar7) = uVar15;
      if (0xb2f < uVar15) {
        FUN_00402bc8(puVar7,uVar15);
      }
    }
    puVar10[-1] = uVar17 + 0x32;
    DAT_00429ae4 = 0;
    return puVar10;
  }
  iVar13 = (uint)(byte)(&DAT_0042998c)[param_1 + 3 >> 3] * 8;
  pcVar2 = &DAT_0042706c + iVar13;
  pcVar16 = pcVar2;
  if (DAT_00429055 != '\0') {
    while( true ) {
      LOCK();
      cVar5 = *pcVar2;
      if (cVar5 == '\0') {
        *pcVar2 = '\x01';
      }
      UNLOCK();
      pcVar16 = pcVar2;
      if (cVar5 == '\0') break;
      pcVar16 = &DAT_0042708c + iVar13;
      LOCK();
      cVar5 = *pcVar16;
      if (cVar5 == '\0') {
        *pcVar16 = '\x01';
      }
      UNLOCK();
      if (cVar5 == '\0') break;
      pcVar16 = &DAT_004270ac + iVar13;
      LOCK();
      cVar5 = *pcVar16;
      if (cVar5 == '\0') {
        *pcVar16 = '\x01';
      }
      UNLOCK();
      if (cVar5 == '\0') break;
      if (DAT_00429985 == '\0') {
        Sleep(0);
        LOCK();
        cVar5 = *pcVar2;
        if (cVar5 == '\0') {
          *pcVar2 = '\x01';
        }
        UNLOCK();
        pcVar16 = pcVar2;
        if (cVar5 == '\0') break;
        Sleep(10);
      }
    }
  }
  pcVar2 = *(char **)(pcVar16 + 8);
  puVar10 = *(undefined4 **)(pcVar2 + 0x10);
  if (pcVar2 != pcVar16) {
    *(int *)(pcVar2 + 0x14) = *(int *)(pcVar2 + 0x14) + 1;
    uVar17 = puVar10[-1];
    *(uint *)(pcVar2 + 0x10) = uVar17 & 0xfffffff8;
    puVar10[-1] = pcVar2;
    if ((uVar17 & 0xfffffff8) == 0) {
      iVar13 = *(int *)(pcVar2 + 8);
      *(char **)(iVar13 + 0xc) = pcVar16;
      *(int *)(pcVar16 + 8) = iVar13;
      *pcVar16 = '\0';
      return puVar10;
    }
    *pcVar16 = '\0';
    return puVar10;
  }
  iVar13 = *(int *)(pcVar16 + 0x18);
  uVar6 = *(ushort *)(pcVar16 + 2);
  if (puVar10 <= *(undefined4 **)(pcVar16 + 0x14)) {
    piVar1 = (int *)(iVar13 + 0x14);
    *piVar1 = *piVar1 + 1;
    *(uint *)(pcVar16 + 0x10) = (uint)uVar6 + (int)puVar10;
    *pcVar16 = '\0';
    puVar10[-1] = iVar13;
    return puVar10;
  }
  if (DAT_00429055 != '\0') {
    while( true ) {
      do {
        LOCK();
        bVar19 = DAT_00429ae4 == '\0';
        if (bVar19) {
          DAT_00429ae4 = '\x01';
        }
        UNLOCK();
        if (bVar19) goto LAB_004030c8;
      } while (DAT_00429985 != '\0');
      Sleep(0);
      LOCK();
      bVar19 = DAT_00429ae4 == '\0';
      if (bVar19) {
        DAT_00429ae4 = '\x01';
      }
      UNLOCK();
      if (bVar19) break;
      Sleep(10);
    }
  }
LAB_004030c8:
  uVar17 = (int)pcVar16[1] & _DAT_00429af0;
  if (uVar17 == 0) {
    if (DAT_00429aec < *(ushort *)(pcVar16 + 4)) {
      uVar17 = (uint)*(ushort *)(pcVar16 + 6);
      puVar10 = (undefined4 *)FUN_00402c94(uVar17);
      if (puVar10 == (undefined4 *)0x0) {
        DAT_00429ae4 = 0;
        *pcVar16 = '\0';
        return (undefined4 *)0x0;
      }
    }
    else {
      uVar17 = DAT_00429aec;
      if (*(ushort *)(pcVar16 + 6) + 0xb30 <= DAT_00429aec) {
        uVar17 = (uint)*(ushort *)(pcVar16 + 6);
      }
      puVar10 = (undefined4 *)((int)DAT_00429ae8 - uVar17);
      DAT_00429aec = DAT_00429aec - uVar17;
      DAT_00429ae8 = puVar10;
    }
  }
  else {
    uVar18 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
      }
    }
    iVar13 = 0;
    if ((&DAT_00429af4)[uVar18] != 0) {
      for (; ((uint)(&DAT_00429af4)[uVar18] >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
      }
    }
    iVar13 = iVar13 + uVar18 * 0x20;
    puVar10 = (undefined4 *)(&DAT_00429b78)[iVar13 * 2];
    puVar7 = (undefined4 *)puVar10[1];
    (&DAT_00429b78)[iVar13 * 2] = puVar7;
    *puVar7 = &DAT_00429b74 + iVar13 * 2;
    if (&DAT_00429b74 + iVar13 * 2 == puVar7) {
      bVar8 = (byte)iVar13 & 0x1f;
      puVar3 = &DAT_00429af4 + uVar18;
      *puVar3 = *puVar3 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      if (*puVar3 == 0) {
        (&DAT_00429af0)[(int)uVar18 >> 3] =
             (&DAT_00429af0)[(int)uVar18 >> 3] & ~('\x01' << (uVar18 & 7));
      }
    }
    uVar17 = puVar10[-1] & 0xfffffff0;
    if (uVar17 < 0x10a60) {
      pbVar4 = (byte *)((uVar17 - 4) + (int)puVar10);
      *pbVar4 = *pbVar4 & 0xf7;
    }
    else {
      uVar18 = (uint)*(ushort *)(pcVar16 + 6);
      iVar13 = uVar17 - uVar18;
      puVar7 = (undefined4 *)(uVar18 + (int)puVar10);
      puVar7[-1] = iVar13 + 3;
      *(int *)(iVar13 + -8 + (int)puVar7) = iVar13;
      FUN_00402bc8(puVar7,iVar13);
      uVar17 = uVar18;
    }
  }
  puVar10[-1] = uVar17 + 6;
  DAT_00429ae4 = 0;
  *puVar10 = pcVar16;
  puVar10[4] = 0;
  puVar10[5] = 1;
  *(undefined4 **)(pcVar16 + 0x18) = puVar10;
  *(uint *)(pcVar16 + 0x10) = (uint)*(ushort *)(pcVar16 + 2) + (int)(puVar10 + 8);
  *(uint *)(pcVar16 + 0x14) = (int)puVar10 + (uVar17 - *(ushort *)(pcVar16 + 2));
  *pcVar16 = '\0';
  puVar10[7] = puVar10;
  return puVar10 + 8;
}


