/*
 * Function: FUN_00415408
 * Address: 00415408
 * Size: 782 bytes
 * Calling Convention: __register
 */

void FUN_00415408(byte param_1,int *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  byte bVar7;
  uint uVar8;
  ushort *puVar9;
  bool bVar10;
  uint local_14;
  uint local_10;
  
  if (((param_1 == 0) || (param_5 != 0 || 0x7fffffff < param_4)) &&
     ((param_1 != 0 || (param_5 != 0)))) {
    local_14 = param_4;
    local_10 = param_5;
    bVar10 = param_5 < 0x5af3;
    if (param_5 == 0x5af3) {
      bVar10 = param_4 < 0x107a4000;
    }
    if (bVar10) {
      bVar10 = param_5 < 0xe8;
      if (param_5 == 0xe8) {
        bVar10 = param_4 < 0xd4a51000;
      }
      if (bVar10) {
        bVar10 = param_5 < 2;
        if (param_5 == 2) {
          bVar10 = param_4 < 0x540be400;
        }
        if (bVar10) {
          uVar8 = 10;
        }
        else {
          bVar10 = param_5 < 0x17;
          if (param_5 == 0x17) {
            bVar10 = param_4 < 0x4876e800;
          }
          uVar8 = (uint)(byte)(!bVar10 + 0xb);
        }
      }
      else {
        bVar10 = param_5 < 0x918;
        if (param_5 == 0x918) {
          bVar10 = param_4 < 0x4e72a000;
        }
        uVar8 = (uint)(byte)(!bVar10 + 0xd);
      }
    }
    else {
      bVar10 = param_5 < 0x2386f2;
      if (param_5 == 0x2386f2) {
        bVar10 = param_4 < 0x6fc10000;
      }
      if (bVar10) {
        bVar10 = param_5 < 0x38d7e;
        if (param_5 == 0x38d7e) {
          bVar10 = param_4 < 0xa4c68000;
        }
        uVar8 = (uint)(byte)(!bVar10 + 0xf);
      }
      else {
        bVar10 = param_5 < 0xde0b6b3;
        if (param_5 == 0xde0b6b3) {
          bVar10 = param_4 < 0xa7640000;
        }
        if (bVar10) {
          bVar10 = param_5 < 0x1634578;
          if (param_5 == 0x1634578) {
            bVar10 = param_4 < 0x5d8a0000;
          }
          uVar8 = (uint)(byte)(!bVar10 + 0x11);
        }
        else {
          bVar10 = param_5 < 0x8ac72304;
          if (param_5 == 0x8ac72304) {
            bVar10 = param_4 < 0x89e80000;
          }
          if (bVar10) {
            uVar8 = 0x13;
          }
          else {
            uVar8 = 0x14;
          }
        }
      }
    }
    FUN_004072d0(param_2,uVar8 + param_1);
    puVar2 = (undefined2 *)FUN_004071e4(*param_2);
    *puVar2 = 0x2d;
    puVar9 = puVar2 + param_1;
    if ((char)uVar8 == '\x14') {
      *puVar9 = 0x31;
      puVar9 = puVar9 + 1;
      local_14 = param_4 + 0x76180000;
      local_10 = (param_5 + 0x7538dcfc) - (uint)(param_4 < 0x89e80000);
      uVar8 = uVar8 - 1;
    }
    if (0x11 < (byte)uVar8) {
      if ((byte)uVar8 == 0x13) {
        *puVar9 = 0x30;
        while( true ) {
          bVar10 = local_10 < 0xde0b6b3;
          if (local_10 == 0xde0b6b3) {
            bVar10 = local_14 < 0xa7640000;
          }
          if (bVar10) break;
          bVar10 = local_14 < 0xa7640000;
          local_14 = local_14 + 0x589c0000;
          local_10 = (local_10 + 0xf21f494d) - (uint)bVar10;
          *puVar9 = *puVar9 + 1;
        }
        puVar9 = puVar9 + 1;
      }
      *puVar9 = 0x30;
      while( true ) {
        bVar10 = local_10 < 0x1634578;
        if (local_10 == 0x1634578) {
          bVar10 = local_14 < 0x5d8a0000;
        }
        if (bVar10) break;
        bVar10 = local_14 < 0x5d8a0000;
        local_14 = local_14 + 0xa2760000;
        local_10 = (local_10 + 0xfe9cba88) - (uint)bVar10;
        *puVar9 = *puVar9 + 1;
      }
      puVar9 = puVar9 + 1;
      uVar8 = 0x11;
    }
    uVar3 = FUN_004083b0(local_14,local_10,extraout_ECX,100000000,0);
    iVar4 = FUN_0040838c(uVar3,extraout_EDX,extraout_ECX_00,100000000);
    uVar5 = (local_14 - iVar4) / 100;
    *(undefined4 *)(puVar9 + ((uVar8 & 0xff) - 2)) =
         *(undefined4 *)(&DAT_00427c0c + ((local_14 - iVar4) % 100) * 4);
    uVar1 = (ulonglong)uVar5 / 100;
    iVar4 = (int)uVar1;
    *(undefined4 *)(puVar9 + ((uVar8 & 0xff) - 4)) =
         *(undefined4 *)(&DAT_00427c0c + (uVar5 + iVar4 * -100) * 4);
    iVar6 = (int)(uVar1 / 100);
    *(undefined4 *)(puVar9 + ((uVar8 & 0xff) - 6)) =
         *(undefined4 *)(&DAT_00427c0c + (iVar4 + iVar6 * -100) * 4);
    *(undefined4 *)(puVar9 + ((uVar8 & 0xff) - 8)) = *(undefined4 *)(&DAT_00427c0c + iVar6 * 4);
    bVar7 = (char)uVar8 - 8;
    while (2 < bVar7) {
      bVar7 = bVar7 - 2;
      *(undefined4 *)(puVar9 + bVar7) = *(undefined4 *)(&DAT_00427c0c + (uVar3 % 100) * 4);
      uVar3 = uVar3 / 100;
    }
    if (bVar7 == 2) {
      *(undefined4 *)puVar9 = *(undefined4 *)(&DAT_00427c0c + uVar3 * 4);
    }
    else {
      *puVar9 = (ushort)uVar3 | 0x30;
    }
  }
  else {
    FUN_0041530c(param_4,(uint)param_1,param_2);
  }
  return;
}


