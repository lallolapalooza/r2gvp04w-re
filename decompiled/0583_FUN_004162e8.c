/*
 * Function: FUN_004162e8
 * Address: 004162e8
 * Size: 2511 bytes
 * Calling Convention: __register
 */

void FUN_004162e8(ushort *param_1,uint param_2,ushort *param_3,undefined4 *param_4,int param_5,
                 int param_6,uint param_7)

{
  char cVar1;
  uint *puVar2;
  ushort *puVar3;
  bool bVar4;
  longlong *plVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 uVar7;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar12;
  undefined4 uStack_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  int local_f4;
  int local_f0;
  int local_ec;
  ushort *local_e8;
  ushort *local_e4;
  ushort *local_e0;
  longlong local_da [16];
  uint *local_58;
  int local_54;
  uint *local_50;
  undefined1 local_49;
  uint *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  char local_35;
  int local_34;
  ushort *local_30;
  ushort *local_2c;
  uint local_28;
  ushort *local_24;
  int local_20;
  byte local_19;
  ushort *local_18;
  uint local_14;
  uint local_10;
  ushort local_a;
  uint local_8;
  
  puStack_104 = &stack0xfffffffc;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = (ushort *)0x0;
  local_e4 = (ushort *)0x0;
  local_e0 = (ushort *)0x0;
  local_20 = 0;
  puStack_108 = &LAB_00416d27;
  uStack_10c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10c;
  local_2c = param_3;
  local_28 = param_2;
  local_24 = param_1;
  if ((param_1 != (ushort *)0x0) && (param_3 != (ushort *)0x0)) {
    uVar11 = 0xffffffff;
    local_34 = param_5 + 1;
    local_14 = param_2;
    if (param_2 < 0x7fffffff) {
      local_14 = param_2 * 2;
    }
    puVar10 = param_3 + param_7;
    local_18 = param_1;
    do {
      while( true ) {
        while( true ) {
          if (puVar10 <= param_3) goto LAB_00416d01;
          if (*param_3 == 0x25) break;
          if (local_14 == 0) goto LAB_00416d01;
          *local_18 = *param_3;
          param_3 = param_3 + 1;
          local_18 = local_18 + 1;
          local_14 = local_14 - 2;
        }
        puVar9 = param_3 + 1;
        if (puVar10 <= puVar9) goto LAB_00416d01;
        if (*puVar9 != 0x25) break;
        if (local_14 == 0) {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        *local_18 = *puVar9;
        param_3 = param_3 + 2;
        local_18 = local_18 + 1;
        local_14 = local_14 - 2;
      }
      local_10 = 0xffffffff;
      uVar11 = uVar11 + 1;
      bVar4 = FUN_004125c8(puVar9);
      local_30 = puVar9;
      if (bVar4) {
        while ((puVar9 < puVar10 && (bVar4 = FUN_004125c8(puVar9), bVar4))) {
          puVar9 = puVar9 + 1;
        }
        if (puVar9 != local_30) {
          uVar6 = (int)puVar9 - (int)local_30 >> 1;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + (((int)puVar9 - (int)local_30 & 1U) != 0);
          }
          FUN_00415d98(local_da,(longlong *)local_30,uVar6);
          FUN_00407278((int *)&local_e0,local_da,0x41);
          bVar4 = FUN_00415b04(local_e0,&local_40,extraout_ECX);
          if (!bVar4) {
            FUN_00415e8c(0,(longlong *)local_2c,param_7);
          }
          if (*puVar9 == 0x3a) {
            puVar9 = puVar9 + 1;
            uVar11 = local_40;
          }
          else {
            local_10 = local_40;
          }
        }
      }
      else if (*puVar9 == 0x3a) {
        uVar11 = 0;
        puVar9 = param_3 + 2;
      }
      local_19 = *puVar9 == 0x2d;
      if ((bool)local_19) {
        puVar9 = puVar9 + 1;
      }
      local_30 = puVar9;
      if (*puVar9 == 0x2a) {
        local_10 = 0xfffffffe;
        puVar9 = puVar9 + 1;
      }
      else {
        bVar4 = FUN_004125c8(puVar9);
        if (bVar4) {
          while ((puVar9 < puVar10 && (bVar4 = FUN_004125c8(puVar9), bVar4))) {
            puVar9 = puVar9 + 1;
          }
          if (puVar9 != local_30) {
            uVar6 = (int)puVar9 - (int)local_30 >> 1;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + (((int)puVar9 - (int)local_30 & 1U) != 0);
            }
            FUN_00415d98(local_da,(longlong *)local_30,uVar6);
            FUN_00407278((int *)&local_e4,local_da,0x41);
            bVar4 = FUN_00415b04(local_e4,&local_10,extraout_ECX_00);
            if (!bVar4) {
              FUN_00415e8c(0,(longlong *)local_2c,param_7);
            }
          }
        }
      }
      if (*puVar9 == 0x2e) {
        puVar8 = puVar9 + 1;
        if (puVar10 <= puVar8) break;
        puVar3 = puVar8;
        if (*puVar8 == 0x2a) {
          local_8 = 0xfffffffe;
          puVar9 = puVar9 + 2;
        }
        else {
          while ((local_30 = puVar3, puVar8 < puVar10 && (bVar4 = FUN_004125c8(puVar8), bVar4))) {
            puVar8 = puVar8 + 1;
            puVar3 = local_30;
          }
          uVar6 = (int)puVar8 - (int)local_30 >> 1;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + (((int)puVar8 - (int)local_30 & 1U) != 0);
          }
          FUN_00415d98(local_da,(longlong *)local_30,uVar6);
          FUN_00407278((int *)&local_e8,local_da,0x41);
          bVar4 = FUN_00415b04(local_e8,&local_8,extraout_ECX_01);
          puVar9 = puVar8;
          if (!bVar4) {
            local_8 = 0xffffffff;
          }
        }
      }
      else {
        local_8 = 0xffffffff;
      }
      bVar4 = FUN_00412580(puVar9);
      if (!bVar4) break;
      if ((ushort)(*puVar9 - 0x61) < 0x1a) {
        local_a = *puVar9 ^ 0x20;
      }
      else {
        local_a = *puVar9;
      }
      param_3 = puVar9 + 1;
      uVar7 = extraout_ECX_02;
      if (local_10 == 0xfffffffe) {
        if (local_34 <= (int)uVar11) {
          FUN_00415e8c(1,(longlong *)local_2c,param_7);
          uVar7 = extraout_ECX_03;
        }
        cVar1 = *(char *)(param_6 + 4 + uVar11 * 8);
        if ((cVar1 == '\0') || (cVar1 == '\x10')) {
          if (*(char *)(param_6 + 4 + uVar11 * 8) == '\0') {
            local_10 = *(uint *)(param_6 + uVar11 * 8);
          }
          else {
            puVar2 = *(uint **)(param_6 + uVar11 * 8);
            uVar6 = puVar2[1];
            if (uVar6 == 0) {
              if (0x7fffffff < *puVar2) goto LAB_00416638;
LAB_00416620:
              puVar2 = *(uint **)(param_6 + uVar11 * 8);
              uVar6 = puVar2[1];
              if (uVar6 == 0xffffffff) {
                if (*puVar2 < 0x80000000) goto LAB_00416638;
              }
              else if ((int)uVar6 < -1) goto LAB_00416638;
            }
            else {
              if ((int)uVar6 < 1) goto LAB_00416620;
LAB_00416638:
              FUN_00415e8c(0,(longlong *)local_2c,param_7);
              uVar7 = extraout_ECX_04;
            }
            local_10 = **(uint **)(param_6 + uVar11 * 8);
          }
          if ((int)local_10 < 0) {
            local_19 = local_19 ^ 1;
            local_10 = -local_10;
          }
          uVar11 = uVar11 + 1;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
          uVar7 = extraout_ECX_05;
        }
      }
      if (local_8 == 0xfffffffe) {
        if (local_34 <= (int)uVar11) {
          FUN_00415e8c(1,(longlong *)local_2c,param_7);
          uVar7 = extraout_ECX_06;
        }
        cVar1 = *(char *)(param_6 + 4 + uVar11 * 8);
        if ((cVar1 == '\0') || (cVar1 == '\x10')) {
          if (*(char *)(param_6 + 4 + uVar11 * 8) == '\0') {
            local_8 = *(uint *)(param_6 + uVar11 * 8);
          }
          else {
            puVar2 = *(uint **)(param_6 + uVar11 * 8);
            uVar6 = puVar2[1];
            if (uVar6 == 0) {
              if (0x7fffffff < *puVar2) goto LAB_004166e6;
LAB_004166ce:
              puVar2 = *(uint **)(param_6 + uVar11 * 8);
              uVar6 = puVar2[1];
              if (uVar6 == 0xffffffff) {
                if (*puVar2 < 0x80000000) goto LAB_004166e6;
              }
              else if ((int)uVar6 < -1) goto LAB_004166e6;
            }
            else {
              if ((int)uVar6 < 1) goto LAB_004166ce;
LAB_004166e6:
              FUN_00415e8c(0,(longlong *)local_2c,param_7);
              uVar7 = extraout_ECX_07;
            }
            local_8 = **(uint **)(param_6 + uVar11 * 8);
          }
          uVar11 = uVar11 + 1;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
          uVar7 = extraout_ECX_08;
        }
      }
      if (local_34 <= (int)uVar11) {
        FUN_00415e8c(1,(longlong *)local_2c,param_7);
        uVar7 = extraout_ECX_09;
      }
      local_48 = *(uint **)(param_6 + uVar11 * 8);
      local_44 = *(uint *)(param_6 + 4 + uVar11 * 8);
      local_35 = '\0';
      switch(local_44 & 0xff) {
      case 0:
        if ((0x10 < (int)local_8) || (local_8 == 0xffffffff)) {
          local_8 = 0;
        }
        if (local_a == 0x44) {
          FUN_00415718((uint)local_48,&local_20);
        }
        else if (local_a == 0x55) {
          FUN_00415784((uint)local_48,&local_20);
        }
        else if (local_a == 0x58) {
          FUN_00415a78((uint)local_48,0,&local_20);
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        puVar12 = &stack0xfffffffc;
        plVar5 = (longlong *)FUN_004071e4(local_20);
        uVar6 = FUN_0041611c(plVar5,-1,-1,(int)puVar12);
        local_35 = (char)uVar6;
        break;
      case 1:
      case 7:
      case 8:
      case 0xe:
        FUN_00415e8c(0,(longlong *)local_2c,param_7);
        break;
      case 2:
      case 9:
        if (local_a == 0x53) {
          if ((char)local_44 == '\x02') {
            FUN_004071fc(&local_20,(uint)local_48 & 0xff);
          }
          else {
            FUN_004071fc(&local_20,(uint)local_48 & 0xffff);
          }
          puVar12 = &stack0xfffffffc;
          plVar5 = (longlong *)FUN_004071e4(local_20);
          uVar6 = FUN_0041611c(plVar5,local_8,-1,(int)puVar12);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        break;
      case 3:
      case 0xc:
        local_49 = (char)local_44 != '\x03';
        local_3c = 0;
        if ((local_a == 0x47) || (local_a == 0x45)) {
          if (0x12 < local_8) {
            local_8 = 0xf;
          }
        }
        else if ((0x12 < local_8) && (local_8 = 2, local_a == 0x4d)) {
          local_8 = (uint)*(byte *)((int)param_4 + 5);
        }
        switch(local_a) {
        case 0x45:
          local_3c = FUN_00416da0((undefined2 *)local_da,local_48,local_49,param_4,3,local_8,1);
          break;
        case 0x46:
          local_3c = FUN_00416da0((undefined2 *)local_da,local_48,local_49,param_4,local_8,0x12,2);
          break;
        case 0x47:
          local_3c = FUN_00416da0((undefined2 *)local_da,local_48,local_49,param_4,3,local_8,0);
          break;
        default:
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
          break;
        case 0x4d:
          local_3c = FUN_00416da0((undefined2 *)local_da,local_48,local_49,param_4,local_8,0x12,4);
          break;
        case 0x4e:
          local_3c = FUN_00416da0((undefined2 *)local_da,local_48,local_49,param_4,local_8,0x12,3);
        }
        *(undefined2 *)((int)local_da + local_3c * 2) = 0;
        local_8 = 0;
        uVar6 = FUN_0041611c(local_da,-1,-1,(int)&stack0xfffffffc);
        local_35 = (char)uVar6;
        break;
      case 4:
        if (local_a == 0x53) {
          puVar12 = &stack0xfffffffc;
          FUN_004072c4(&local_f0,(byte *)local_48);
          plVar5 = (longlong *)FUN_004071e4(local_f0);
          uVar6 = FUN_0041611c(plVar5,local_8,-1,(int)puVar12);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        break;
      case 5:
        if (local_a == 0x50) {
          FUN_00415a78((uint)local_48,8,&local_20);
          puVar12 = &stack0xfffffffc;
          plVar5 = (longlong *)FUN_004071e4(local_20);
          uVar6 = FUN_0041611c(plVar5,-1,-1,(int)puVar12);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        break;
      case 6:
        if (local_a == 0x53) {
          puVar12 = &stack0xfffffffc;
          FUN_0040720c(&local_ec,(LPCSTR)local_48);
          plVar5 = (longlong *)FUN_004071e4(local_ec);
          uVar6 = FUN_0041611c(plVar5,local_8,-1,(int)puVar12);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        break;
      case 10:
        if (local_a == 0x53) {
          uVar6 = FUN_0041611c((longlong *)local_48,local_8,-1,(int)&stack0xfffffffc);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        break;
      case 0xb:
        if (local_a == 0x53) {
          FUN_00407294(&local_20,(LPCSTR)local_48);
          local_54 = local_20;
          if (local_20 != 0) {
            local_54 = *(int *)(local_20 + -4);
          }
          puVar12 = &stack0xfffffffc;
          plVar5 = (longlong *)FUN_004071e4(local_20);
          uVar6 = FUN_0041611c(plVar5,local_8,local_54,(int)puVar12);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        break;
      case 0xd:
        if (local_a == 0x53) {
          puVar12 = &stack0xfffffffc;
          FUN_0041629c(local_48,&local_f4);
          plVar5 = (longlong *)FUN_004071e4(local_f4);
          uVar6 = FUN_0041611c(plVar5,local_8,-1,(int)puVar12);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        break;
      case 0xf:
        if (local_a == 0x53) {
          local_50 = local_48;
          if (local_48 != (uint *)0x0) {
            local_50 = (uint *)(local_48[-1] >> 1);
          }
          uVar6 = FUN_0041611c((longlong *)local_48,local_8,(int)local_50,(int)&stack0xfffffffc);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        break;
      case 0x10:
        if ((0x20 < (int)local_8) || (local_8 == 0xffffffff)) {
          local_8 = 0;
        }
        if (local_a == 0x44) {
          FUN_00415740(&local_20,local_44,uVar7,*local_48,local_48[1]);
        }
        else if (local_a == 0x55) {
          FUN_00415798(&local_20,local_44,uVar7,*local_48,local_48[1]);
        }
        else if (local_a == 0x58) {
          FUN_00415a90(0,&local_20,uVar7,*local_48,local_48[1]);
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
        puVar12 = &stack0xfffffffc;
        plVar5 = (longlong *)FUN_004071e4(local_20);
        uVar6 = FUN_0041611c(plVar5,-1,-1,(int)puVar12);
        local_35 = (char)uVar6;
        break;
      case 0x11:
        if (local_a == 0x53) {
          local_58 = local_48;
          if (local_48 != (uint *)0x0) {
            local_58 = (uint *)local_48[-1];
          }
          uVar6 = FUN_0041611c((longlong *)local_48,local_8,(int)local_58,(int)&stack0xfffffffc);
          local_35 = (char)uVar6;
        }
        else {
          FUN_00415e8c(0,(longlong *)local_2c,param_7);
        }
      }
    } while (local_35 == '\0');
  }
LAB_00416d01:
  *in_FS_OFFSET = uStack_10c;
  puStack_104 = &LAB_00416d2e;
  puStack_108 = (undefined1 *)0x416d1e;
  FUN_00406b88(&local_f4,6);
  puStack_108 = (undefined1 *)0x416d26;
  FUN_00406b28(&local_20);
  return;
}


