/*
 * Function: FUN_00403e20
 * Address: 00403e20
 * Size: 1034 bytes
 * Calling Convention: __register
 */

void FUN_00403e20(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  DWORD extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar8;
  double *pdVar9;
  undefined4 *puVar10;
  int iVar11;
  double adStackY_27828 [3839];
  longlong alStackY_20029 [256];
  double adStackY_1f828 [2048];
  double *pdStackY_1b828;
  ushort *puStackY_1b824;
  uint uStackY_1b820;
  uint uStackY_1b81c;
  int iStackY_1b818;
  int iStackY_1b814;
  char cStackY_1b80e;
  char cStackY_1b80d;
  int iStackY_1b80c;
  char cStackY_1b805;
  double adStackY_1b804 [255];
  double adStackY_1b008 [13050];
  
  iVar2 = 0x27;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_004048f8(adStackY_27828,0x8000,0);
  FUN_004048f8(adStackY_1b804,0x1b800,0);
  FUN_004048f8(adStackY_1f828,0x4000,0);
  iStackY_1b80c = 0;
  cStackY_1b805 = '\x01';
  for (puVar10 = DAT_00429ad8; puVar8 = DAT_0042bb7c, puVar10 != &DAT_00429ad4;
      puVar10 = (undefined4 *)puVar10[1]) {
    piVar3 = (int *)FUN_00403920((uint)puVar10);
    uVar4 = extraout_ECX;
    uVar1 = extraout_EDX;
    while (piVar3 != (int *)0x0) {
      uVar5 = piVar3[-1];
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 4) == 0) {
          if (iStackY_1b80c < 0x1000) {
            iStackY_1b818 = (uVar5 & 0xfffffff0) - 4;
            uVar4 = FUN_00403c0c((int)piVar3);
            if ((char)uVar4 == '\0') {
              cStackY_1b805 = '\0';
              *(int *)((int)adStackY_1f828 + iStackY_1b80c * 4) = iStackY_1b818;
              iStackY_1b80c = iStackY_1b80c + 1;
            }
          }
        }
        else {
          FUN_00403c64(piVar3,uVar1,uVar4,(int)&stack0xfffffffc);
        }
      }
      piVar3 = (int *)FUN_004038fc((int)piVar3);
      uVar4 = extraout_ECX_00;
      uVar1 = extraout_EDX_00;
    }
  }
  while ((puVar8 != &DAT_0042bb78 && (iStackY_1b80c < 0x1000))) {
    uVar4 = FUN_00403c0c((int)(puVar8 + 4));
    if ((char)uVar4 == '\0') {
      cStackY_1b805 = '\0';
      *(uint *)((int)adStackY_1f828 + iStackY_1b80c * 4) = (puVar8[3] & 0xfffffff0) - 0x14;
      iStackY_1b80c = iStackY_1b80c + 1;
    }
    puVar8 = (undefined4 *)puVar8[1];
  }
  if (cStackY_1b805 == '\0') {
    cStackY_1b80d = '\0';
    uStackY_1b81c = 0;
    uVar5 = FUN_00406eec((int)PTR_s_An_unexpected_memory_leak_has_oc_00427048);
    plVar6 = (longlong *)
             FUN_004039ec((longlong *)PTR_s_An_unexpected_memory_leak_has_oc_00427048,
                          (longlong *)adStackY_27828,uVar5);
    iStackY_1b814 = 0x37;
    puStackY_1b824 = &DAT_0042706e;
    pdStackY_1b828 = adStackY_1b008;
    do {
      uStackY_1b820 = *puStackY_1b824 - 4;
      cStackY_1b80e = '\0';
      iVar2 = 0xff;
      pdVar9 = pdStackY_1b828;
      do {
        if (alStackY_20029 < plVar6) break;
        if (*(uint *)pdVar9 != 0) {
          if (cStackY_1b80d == '\0') {
            uVar5 = FUN_00406eec((int)PTR_s_The_unexpected_small_block_leaks_0042704c);
            plVar6 = (longlong *)
                     FUN_004039ec((longlong *)PTR_s_The_unexpected_small_block_leaks_0042704c,plVar6
                                  ,uVar5);
            cStackY_1b80d = '\x01';
          }
          if (cStackY_1b80e == '\0') {
            *(undefined1 *)plVar6 = 0xd;
            *(undefined1 *)((int)plVar6 + 1) = 10;
            puVar7 = (undefined1 *)FUN_0040399c(uStackY_1b81c + 1,(longlong *)((int)plVar6 + 2));
            *puVar7 = 0x20;
            puVar7[1] = 0x2d;
            puVar7[2] = 0x20;
            plVar6 = (longlong *)FUN_0040399c(uStackY_1b820,(longlong *)(puVar7 + 3));
            uVar5 = FUN_00406eec((int)PTR_s_bytes__00427054);
            plVar6 = (longlong *)FUN_004039ec((longlong *)PTR_s_bytes__00427054,plVar6,uVar5);
            cStackY_1b80e = '\x01';
          }
          else {
            *(undefined1 *)plVar6 = 0x2c;
            *(undefined1 *)((int)plVar6 + 1) = 0x20;
            plVar6 = (longlong *)((int)plVar6 + 2);
          }
          if (iVar2 == 0) {
            uVar5 = FUN_00406eec((int)PTR_s_Unknown_00427058);
            puVar7 = (undefined1 *)FUN_004039ec((longlong *)PTR_s_Unknown_00427058,plVar6,uVar5);
          }
          else if (iVar2 == 1) {
            uVar5 = FUN_00406eec((int)PTR_s_AnsiString_0042705c);
            puVar7 = (undefined1 *)FUN_004039ec((longlong *)PTR_s_AnsiString_0042705c,plVar6,uVar5);
          }
          else if (iVar2 == 2) {
            uVar5 = FUN_00406eec((int)PTR_s_UnicodeString_00427060);
            puVar7 = (undefined1 *)
                     FUN_004039ec((longlong *)PTR_s_UnicodeString_00427060,plVar6,uVar5);
          }
          else {
            puVar7 = (undefined1 *)FUN_00403a04(*(uint *)((int)pdVar9 + -4),plVar6);
          }
          *puVar7 = 0x20;
          puVar7[1] = 0x78;
          puVar7[2] = 0x20;
          plVar6 = (longlong *)FUN_0040399c(*(uint *)pdVar9,(longlong *)(puVar7 + 3));
        }
        iVar2 = iVar2 + -1;
        pdVar9 = pdVar9 + -1;
      } while (iVar2 != -1);
      if (((cStackY_1b80e != '\0') || (DAT_00429ad2 == '\0')) || ((uStackY_1b820 + 4 & 0xf) == 0)) {
        uStackY_1b81c = uStackY_1b820;
      }
      pdStackY_1b828 = pdStackY_1b828 + 0x100;
      puStackY_1b824 = puStackY_1b824 + 0x10;
      iStackY_1b814 = iStackY_1b814 + -1;
    } while (iStackY_1b814 != 0);
    if (0 < iStackY_1b80c) {
      if (cStackY_1b80d != '\0') {
        *(undefined1 *)plVar6 = 0xd;
        *(undefined1 *)((int)plVar6 + 1) = 10;
        *(undefined1 *)((int)plVar6 + 2) = 0xd;
        *(undefined1 *)((int)plVar6 + 3) = 10;
        plVar6 = (longlong *)((int)plVar6 + 4);
      }
      uVar5 = FUN_00406eec((int)PTR_s_The_sizes_of_unexpected_leaked_m_00427050);
      plVar6 = (longlong *)
               FUN_004039ec((longlong *)PTR_s_The_sizes_of_unexpected_leaked_m_00427050,plVar6,uVar5
                           );
      iVar11 = 0;
      pdStackY_1b828 = adStackY_1f828;
      iVar2 = iStackY_1b80c;
      do {
        if (iVar11 != 0) {
          *(undefined1 *)plVar6 = 0x2c;
          *(undefined1 *)((int)plVar6 + 1) = 0x20;
          plVar6 = (longlong *)((int)plVar6 + 2);
        }
        plVar6 = (longlong *)FUN_0040399c(*(uint *)pdStackY_1b828,plVar6);
        if (alStackY_20029 < plVar6) break;
        iVar11 = iVar11 + 1;
        pdStackY_1b828 = (double *)((int)pdStackY_1b828 + 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar5 = FUN_00406eec((int)PTR_DAT_00427064);
    FUN_004039ec((longlong *)PTR_DAT_00427064,plVar6,uVar5);
    FUN_00403878((LPCSTR)adStackY_27828,PTR_s_Unexpected_Memory_Leak_00427068,extraout_ECX_01);
  }
  return;
}


