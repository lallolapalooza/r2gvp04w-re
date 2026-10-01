/*
 * Function: FUN_00404994
 * Address: 00404994
 * Size: 258 bytes
 * Calling Convention: __register
 */

uint FUN_00404994(ushort *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  
  puVar7 = (ushort *)0x0;
  if (param_1 == (ushort *)0x0) {
LAB_00404a25:
    uVar2 = 0;
    puVar7 = puVar7 + 1;
  }
  else {
    uVar2 = 0;
    puVar7 = param_1;
    do {
      puVar6 = puVar7;
      uVar4 = *puVar6;
      puVar7 = puVar6 + 1;
    } while (uVar4 == 0x20);
    bVar1 = false;
    if (uVar4 == 0x2d) {
      bVar1 = true;
LAB_00404a37:
      uVar4 = *puVar7;
      puVar7 = puVar6 + 2;
    }
    else if (uVar4 == 0x2b) goto LAB_00404a37;
    if (((uVar4 == 0x24) || (uVar4 == 0x78)) || (uVar4 == 0x58)) {
LAB_00404a3f:
      uVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      uVar3 = uVar2;
      if (uVar4 != 0) {
        do {
          if (0x60 < uVar4) {
            uVar4 = uVar4 - 0x20;
          }
          uVar5 = uVar4 - 0x30;
          uVar2 = uVar3;
          if (9 < uVar5) {
            if (5 < (ushort)(uVar4 - 0x41)) goto LAB_00404a30;
            uVar5 = uVar4 - 0x37;
          }
          if (0xfffffff < uVar3) goto LAB_00404a30;
          uVar3 = uVar3 * 0x10 + (uint)uVar5;
          uVar4 = *puVar7;
          puVar7 = puVar7 + 1;
        } while (uVar4 != 0);
        if (bVar1) {
          uVar3 = -uVar3;
        }
LAB_00404a8b:
        uVar8 = 0;
        goto LAB_00404a8e;
      }
      goto LAB_00404a25;
    }
    if (uVar4 != 0x30) {
      if (uVar4 != 0) goto LAB_004049fb;
      goto LAB_00404a30;
    }
    uVar4 = *puVar7;
    puVar7 = puVar7 + 1;
    if ((uVar4 == 0x78) || (uVar4 == 0x58)) goto LAB_00404a3f;
    while (uVar4 != 0) {
LAB_004049fb:
      if ((9 < (ushort)(uVar4 - 0x30)) || (0xccccccc < uVar2)) goto LAB_00404a30;
      uVar2 = uVar2 * 10 + (uint)(ushort)(uVar4 - 0x30);
      uVar4 = *puVar7;
      puVar7 = puVar7 + 1;
    }
    if (bVar1) {
      uVar3 = -uVar2;
      if ((uVar3 == 0 || 0 < (int)uVar2) || (uVar2 = uVar3, (int)uVar3 < 0)) goto LAB_00404a8b;
    }
    else {
      uVar3 = uVar2;
      if (-1 < (int)uVar2) goto LAB_00404a8b;
    }
  }
LAB_00404a30:
  uVar8 = (int)puVar7 - (int)param_1;
  uVar3 = uVar2;
LAB_00404a8e:
  *param_2 = uVar8 >> 1;
  return uVar3;
}


