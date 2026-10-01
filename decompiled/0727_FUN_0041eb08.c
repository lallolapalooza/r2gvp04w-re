/*
 * Function: FUN_0041eb08
 * Address: 0041eb08
 * Size: 1688 bytes
 * Calling Convention: __register
 */

int FUN_0041eb08(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  byte *local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  byte local_59;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined1 local_4c [4];
  uint local_48;
  undefined1 *local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  byte local_19;
  uint local_18;
  undefined2 *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_14 = (undefined2 *)param_1[4];
  local_18 = 0;
  local_20 = (1 << ((byte)param_1[2] & 0x1f)) - 1;
  local_24 = (1 << ((byte)param_1[1] & 0x1f)) - 1;
  local_28 = *param_1;
  uVar7 = param_1[0xd];
  iVar6 = param_1[0x11];
  local_2c = param_1[0xe];
  local_30 = param_1[0xf];
  local_34 = param_1[0x10];
  local_38 = param_1[0x12];
  local_3c = param_1[0xb];
  local_40 = param_1[0xc];
  local_44 = (undefined1 *)param_1[7];
  local_48 = param_1[3];
  uVar8 = param_1[10];
  local_80 = param_1[8];
  local_7c = param_1[9];
  local_88 = param_1[5];
  local_84 = param_1[6];
  *param_4 = 0;
  if (local_38 == 0xffffffff) {
    local_74 = 0;
  }
  else {
    if (local_48 == 0) {
      local_44 = local_4c;
      local_48 = 1;
      local_4c[0] = *(undefined1 *)(param_1 + 0x13);
    }
    local_78 = param_2;
    local_10 = param_3;
    local_c = param_2;
    local_8 = param_1;
    if (local_38 != 0xfffffffe) {
LAB_0041ecb1:
      local_6c = (byte *)(local_10 + local_18);
      while ((local_38 != 0 && (local_18 < param_5))) {
        uVar5 = uVar8 - uVar7;
        if (local_48 <= uVar5) {
          uVar5 = uVar5 + local_48;
        }
        uVar1 = local_44[uVar5];
        local_44[uVar8] = uVar1;
        *local_6c = uVar1;
        local_18 = local_18 + 1;
        local_6c = local_6c + 1;
        uVar8 = uVar8 + 1;
        if (uVar8 == local_48) {
          uVar8 = 0;
        }
        local_38 = local_38 - 1;
      }
      if (uVar8 == 0) {
        local_19 = local_44[local_48 - 1];
      }
      else {
        local_19 = local_44[uVar8 - 1];
      }
      local_74 = 0;
      local_70 = 0;
LAB_0041ed24:
      local_6c = (byte *)(local_10 + local_18);
joined_r0x0041ed36:
      if (param_5 <= local_18) {
LAB_0041f114:
        local_8[8] = local_80;
        local_8[9] = local_7c;
        local_8[10] = uVar8;
        local_8[0xb] = local_3c + local_18;
        local_8[0xc] = local_40;
        local_8[0xd] = uVar7;
        local_8[0xe] = local_2c;
        local_8[0xf] = local_30;
        local_8[0x10] = local_34;
        local_8[0x11] = iVar6;
        local_8[0x12] = local_38;
        *(undefined1 *)(local_8 + 0x13) = local_4c[0];
        local_8[5] = local_88;
        local_8[6] = local_84;
        *param_4 = local_18;
        return 0;
      }
      local_58 = local_18 + local_3c & local_20;
      if (local_74 != 0) {
        return local_74;
      }
      if (local_70 != 0) {
        return 1;
      }
      iVar4 = FUN_0041e860(local_14 + iVar6 * 0x10 + local_58,&local_88);
      if (iVar4 == 0) {
        if (iVar6 < 7) {
          uVar5 = FUN_0041e970((int)(local_14 +
                                    (((local_18 + local_3c & local_24) << ((byte)local_28 & 0x1f)) +
                                    ((int)(uint)local_19 >> (8 - (byte)local_28 & 0x1f))) * 0x300 +
                                    0x736),&local_88);
          local_19 = (byte)uVar5;
        }
        else {
          local_60 = uVar8 - uVar7;
          if (local_48 <= local_60) {
            local_60 = local_60 + local_48;
          }
          local_59 = local_44[local_60];
          uVar5 = FUN_0041e99c((int)(local_14 +
                                    (((local_18 + local_3c & local_24) << ((byte)local_28 & 0x1f)) +
                                    ((int)(uint)local_19 >> (8 - (byte)local_28 & 0x1f))) * 0x300 +
                                    0x736),&local_88,local_59);
          local_19 = (byte)uVar5;
        }
        *local_6c = local_19;
        uVar5 = local_18 + 1;
        local_6c = local_6c + 1;
        if (local_40 < local_48) {
          local_40 = local_40 + 1;
        }
        local_44[uVar8] = local_19;
        uVar8 = uVar8 + 1;
        if (uVar8 == local_48) {
          uVar8 = 0;
        }
        local_18 = uVar5;
        if (iVar6 < 4) {
          iVar6 = 0;
        }
        else if (iVar6 < 10) {
          iVar6 = iVar6 + -3;
        }
        else {
          iVar6 = iVar6 + -6;
        }
        goto joined_r0x0041ed36;
      }
      iVar4 = FUN_0041e860(local_14 + iVar6 + 0xc0,&local_88);
      if (iVar4 == 1) {
        iVar4 = FUN_0041e860(local_14 + iVar6 + 0xcc,&local_88);
        if (iVar4 == 0) {
          iVar4 = FUN_0041e860(local_14 + iVar6 * 0x10 + local_58 + 0xf0,&local_88);
          uVar5 = uVar7;
          uVar3 = local_2c;
          if (iVar4 == 0) goto code_r0x0041eeb1;
        }
        else {
          iVar4 = FUN_0041e860(local_14 + iVar6 + 0xd8,&local_88);
          uVar5 = local_2c;
          uVar3 = uVar7;
          if (iVar4 != 0) {
            iVar4 = FUN_0041e860(local_14 + iVar6 + 0xe4,&local_88);
            uVar7 = local_34;
            uVar5 = local_30;
            if (iVar4 != 0) {
              local_34 = local_30;
              uVar5 = uVar7;
            }
            local_30 = local_2c;
          }
        }
        local_2c = uVar3;
        uVar7 = uVar5;
        local_38 = FUN_0041ea10(local_14 + 0x534,&local_88,local_58);
        if (iVar6 < 7) {
          iVar6 = 8;
        }
        else {
          iVar6 = 0xb;
        }
      }
      else {
        local_34 = local_30;
        local_30 = local_2c;
        if (iVar6 < 7) {
          iVar6 = 7;
        }
        else {
          iVar6 = 10;
        }
        local_2c = uVar7;
        local_38 = FUN_0041ea10(local_14 + 0x332,&local_88,local_58);
        iVar4 = local_38;
        if (3 < (int)local_38) {
          iVar4 = 3;
        }
        uVar7 = FUN_0041e8e8((int)(local_14 + iVar4 * 0x40 + 0x1b0),6,&local_88);
        local_64 = uVar7;
        if (3 < (int)uVar7) {
          local_68 = ((int)uVar7 >> 1) + -1;
          iVar4 = (uVar7 & 1 | 2) << ((byte)local_68 & 0x1f);
          if ((int)uVar7 < 0xe) {
            uVar7 = FUN_0041e92c((int)(local_14 + iVar4 + (0x2af - uVar7)),local_68,&local_88);
            uVar7 = iVar4 + uVar7;
          }
          else {
            uVar5 = FUN_0041e800(&local_88,((int)uVar7 >> 1) - 5,local_68);
            uVar7 = FUN_0041e92c((int)(local_14 + 0x322),4,&local_88);
            uVar7 = iVar4 + uVar5 * 0x10 + uVar7;
          }
        }
        uVar7 = uVar7 + 1;
        if (uVar7 == 0) {
          local_38 = 0xffffffff;
          goto LAB_0041f114;
        }
      }
      local_38 = local_38 + 2;
      if (local_40 < uVar7) {
        return 1;
      }
      if (local_38 < local_48 - local_40) {
        local_40 = local_40 + local_38;
      }
      else {
        local_40 = local_48;
      }
      do {
        uVar5 = uVar8 - uVar7;
        if (local_48 <= uVar5) {
          uVar5 = uVar5 + local_48;
        }
        bVar2 = local_44[uVar5];
        local_44[uVar8] = bVar2;
        uVar8 = uVar8 + 1;
        if (uVar8 == local_48) {
          uVar8 = 0;
        }
        local_38 = local_38 - 1;
        *local_6c = bVar2;
        local_18 = local_18 + 1;
        local_6c = local_6c + 1;
        local_19 = bVar2;
      } while ((local_38 != 0) && (local_18 < param_5));
      goto joined_r0x0041ed36;
    }
    local_50 = (0x300 << ((char)param_1[1] + (char)local_28 & 0x1fU)) + 0x736;
    local_54 = 0;
    local_6c = (byte *)local_14;
    if (local_50 != 0) {
      do {
        local_6c[0] = 0;
        local_6c[1] = 4;
        local_54 = local_54 + 1;
        local_6c = (byte *)((int)local_6c + 2);
      } while (local_54 < local_50);
    }
    local_34 = 1;
    local_30 = 1;
    local_2c = 1;
    uVar7 = 1;
    local_3c = 0;
    local_40 = 0;
    iVar6 = 0;
    uVar8 = 0;
    local_44[local_48 - 1] = 0;
    FUN_0041e7c0(&local_88);
    if (local_74 == 0) {
      if (local_70 == 0) {
        local_38 = 0;
        goto LAB_0041ecb1;
      }
      local_74 = 1;
    }
  }
  return local_74;
code_r0x0041eeb1:
  if (local_40 == 0) {
    return 1;
  }
  if (iVar6 < 7) {
    iVar6 = 9;
  }
  else {
    iVar6 = 0xb;
  }
  uVar5 = uVar8 - uVar7;
  if (local_48 <= uVar5) {
    uVar5 = uVar5 + local_48;
  }
  bVar2 = local_44[uVar5];
  local_44[uVar8] = bVar2;
  uVar8 = uVar8 + 1;
  if (uVar8 == local_48) {
    uVar8 = 0;
  }
  *local_6c = bVar2;
  local_18 = local_18 + 1;
  local_19 = bVar2;
  if (local_40 < local_48) {
    local_40 = local_40 + 1;
  }
  goto LAB_0041ed24;
}


