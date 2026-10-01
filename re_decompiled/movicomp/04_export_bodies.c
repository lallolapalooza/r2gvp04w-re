/* ===== Function 1453: freeResults @ 180075720 size=225 conv=unknown ===== */

void freeResults(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
                    /* 0x75720  1  freeResults */
  iVar4 = FUN_182e440c4(&DAT_183c589f0);
  puVar3 = DAT_183c589e0;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_182e44320(iVar4);
  }
  *(undefined8 *)DAT_183c589e0[1] = 0;
  puVar3 = (undefined8 *)*puVar3;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      *DAT_183c589e0 = DAT_183c589e0;
      DAT_183c589e0[1] = DAT_183c589e0;
      DAT_183c589e8 = 0;
      _Mtx_unlock(&DAT_183c589f0);
      return;
    }
    lVar1 = puVar3[2];
    puVar2 = (undefined8 *)*puVar3;
    if (lVar1 != 0) {
      lVar5 = lVar1;
      if (0xfff < (ulonglong)(puVar3[4] - lVar1)) {
        lVar5 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_182e4c568(lVar1 - lVar5,(puVar3[4] - lVar1) + 0x27);
        }
      }
      thunk_FUN_182e4c5e0(lVar5);
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
    }
    thunk_FUN_182e4c5e0(puVar3,0x28);
    puVar3 = puVar2;
  } while( true );
}
/* ===== Function 1454: main @ 180075810 size=1855 conv=__cdecl ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl main(int _Argc,char **_Argv,char **_Env)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  char **ppcVar15;
  longlong lVar16;
  char **ppcVar17;
  longlong lVar18;
  char *******pppppppcVar19;
  longlong lVar20;
  char **ppcVar21;
  undefined8 in_R9;
  code *pcVar22;
  int iVar23;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulonglong *in_stack_00000040;
  undefined1 auStack_b58 [32];
  undefined1 local_b38;
  undefined1 local_b30;
  char ***local_b28;
  int local_b18 [4];
  char **local_b08;
  longlong lStack_b00;
  ulonglong local_af8;
  undefined1 *local_ae8;
  char **local_ae0;
  undefined8 *local_ad8;
  undefined8 *local_ad0;
  ulonglong *local_ac8;
  char *local_ab8;
  ulonglong uStack_ab0;
  char **local_aa8;
  undefined8 local_aa0;
  undefined8 *local_a98;
  char ******local_a90;
  undefined8 uStack_a88;
  ulonglong local_a80;
  ulonglong local_a78;
  undefined1 local_a70 [8];
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined1 *local_a58;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined1 local_a48 [32];
  undefined8 *local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined1 *local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined1 local_9f0 [264];
  char **local_8e8;
  uint local_8e0;
  uint local_8dc;
  char *local_8d8 [256];
  undefined1 local_d8 [152];
  ulonglong local_40;
  
                    /* 0x75810  2  main */
  local_40 = DAT_183c4d618 ^ (ulonglong)auStack_b58;
  local_a98 = in_stack_00000028;
  local_ad8 = in_stack_00000030;
  local_ad0 = in_stack_00000038;
  local_ac8 = in_stack_00000040;
  local_b18[0] = _Argc;
  local_ae0 = _Argv;
  local_aa8 = _Env;
  local_aa0 = in_R9;
  FUN_18119be30();
  FUN_180e33be0(local_d8,local_b18,&local_ae0);
  FUN_180e33bb0();
  ppcVar17 = local_ae0;
  local_8e8 = local_8d8;
  local_8e0 = 0;
  local_8dc = 0x100;
  pbVar2 = (byte *)*local_ae0;
  iVar23 = 1;
  uVar12 = 0xffffffffffffffff;
  uVar10 = uVar12;
  if (pbVar2 != (byte *)0x0) {
    do {
      uVar10 = uVar10 + 1;
    } while (pbVar2[uVar10] != 0);
    if (uVar10 != 0) {
      if (*pbVar2 == 0x2d) {
        uVar9 = 0;
      }
      else {
        uVar9 = -(uint)(*pbVar2 < 0x2d) | 1;
      }
      if (uVar9 == 0) {
        local_8d8[0] = "moviCompile.dll";
        local_8e0 = 1;
        uVar10 = 1;
        goto LAB_180075912;
      }
    }
  }
  uVar10 = 0;
LAB_180075912:
  ppcVar21 = local_ae0 + local_b18[0];
  lVar20 = (longlong)ppcVar21 - (longlong)local_ae0 >> 3;
  if (0x100 < lVar20 + uVar10) {
    FUN_180e11150(&local_8e8,local_8d8,lVar20 + uVar10,8);
    uVar10 = (ulonglong)local_8e0;
  }
  uVar9 = (uint)uVar10;
  if (ppcVar17 != ppcVar21) {
    FUN_182e46bf0(local_8e8 + uVar10,ppcVar17,lVar20 * 8);
    uVar9 = local_8e0;
  }
  local_8e0 = uVar9 + (int)lVar20;
  piVar11 = (int *)FUN_180e33e00(&local_b08);
  if (*piVar11 == 0) {
    FUN_180160d90();
    FUN_1803fb640();
    FUN_180428920();
    FUN_1800902b0();
    FUN_180165ea0();
    FUN_1803fca60();
    local_a58 = local_a48;
    local_a28 = &local_a18;
    iVar23 = 0;
    local_a50 = 0;
    local_ae8 = local_a70;
    local_a4c = 4;
    local_b08 = local_8e8 + 1;
    lStack_b00 = (ulonglong)local_8e0 - 1;
    local_a20 = 0;
    local_a68 = 0;
    uStack_a60 = 0;
    local_a18 = 0;
    local_a10 = 1;
    local_ab8 = *local_8e8;
    uStack_ab0 = 0;
    if (local_ab8 != (char *)0x0) {
      do {
        uVar12 = uVar12 + 1;
        uStack_ab0 = uVar12;
      } while (local_ab8[uVar12] != '\0');
    }
    puVar13 = (undefined8 *)FUN_181075d30(&local_a90,&local_ab8,&local_b08);
    local_b08 = (char **)*puVar13;
    lStack_b00 = puVar13[1];
    cVar8 = FUN_18106bef0(&local_b08);
    ppcVar17 = local_8e8 + local_8e0;
    uVar12 = 0;
    for (ppcVar21 = local_8e8; ppcVar21 != ppcVar17; ppcVar21 = ppcVar21 + 1) {
      pcVar3 = *ppcVar21;
      iVar23 = strcmp(pcVar3,"--rsp-quoting=posix");
      uVar10 = 1;
      if ((iVar23 != 0) &&
         (iVar23 = strcmp(pcVar3,"--rsp-quoting=windows"), uVar10 = uVar12, iVar23 == 0)) {
        uVar10 = 2;
      }
      iVar23 = (int)uVar10;
      uVar12 = uVar10;
    }
    uVar12 = 0xffffffffffffffff;
    lVar20 = 0;
    if ((iVar23 == 2) || ((iVar23 == 0 && (cVar8 != '\0')))) {
      pcVar22 = FUN_180e2aa70;
    }
    else {
      pcVar22 = FUN_180e2a710;
    }
    if (((cVar8 != '\0') && (1 < local_8e0)) &&
       (pcVar3 = local_8e8[1], uVar10 = uVar12, pcVar3 != (char *)0x0)) {
      do {
        uVar10 = uVar10 + 1;
      } while (pcVar3[uVar10] != '\0');
      lVar18 = lVar20;
      if (3 < uVar10) {
        do {
          lVar16 = lVar18 + 1;
          if (pcVar3[lVar18] != (&DAT_18305c044)[lVar18]) {
            uVar9 = -(uint)((byte)pcVar3[lVar18] < (byte)(&DAT_18305c044)[lVar18]) | 1;
            goto LAB_180075b6c;
          }
          lVar18 = lVar16;
        } while (lVar16 != 4);
        uVar9 = 0;
LAB_180075b6c:
        if (uVar9 == 0) {
          cVar8 = '\0';
        }
      }
    }
    local_b28 = &local_b08;
    uVar10 = (ulonglong)local_a90 >> 0x20;
    local_a90 = (char ******)((ulonglong)local_a90 & 0xffffffffffffff00);
    local_a80 = local_a80 & 0xffffffffffffff00;
    local_b30 = 0;
    local_b08 = (char **)CONCAT44((int)uVar10,(int)local_a90);
    local_af8 = local_a80;
    local_b38 = 0;
    lStack_b00 = uStack_a88;
    FUN_180e26430(&local_ae8,pcVar22,&local_8e8,cVar8);
    ppcVar17 = local_8e8 + 1;
    ppcVar21 = local_8e8 + local_8e0;
    if (ppcVar17 != ppcVar21) {
LAB_180075bd4:
      if (*ppcVar17 == (char *)0x0) goto code_r0x000180075bde;
      do {
        uVar12 = uVar12 + 1;
      } while ((*ppcVar17)[uVar12] != '\0');
      if (uVar12 < 4) {
LAB_180075d79:
        bVar4 = false;
      }
      else {
        do {
          bVar1 = (*ppcVar17)[lVar20];
          lVar18 = lVar20 + 1;
          if (bVar1 != (&DAT_18305c044)[lVar20]) {
            uVar9 = -(uint)(bVar1 < (byte)(&DAT_18305c044)[lVar20]) | 1;
            goto LAB_180075d6f;
          }
          lVar20 = lVar18;
        } while (lVar18 != 4);
        uVar9 = 0;
LAB_180075d6f:
        if (uVar9 != 0) goto LAB_180075d79;
        bVar4 = true;
      }
      if (!bVar4) goto LAB_180075be7;
      if (cVar8 != '\0') {
        ppcVar15 = (char **)FUN_182e43520(local_8e8,ppcVar21,0);
        ppcVar17 = ppcVar15;
        if (ppcVar15 != ppcVar21) {
          while (ppcVar17 = ppcVar17 + 1, ppcVar17 != ppcVar21) {
            if (*ppcVar17 != (char *)0x0) {
              *ppcVar15 = *ppcVar17;
              ppcVar15 = ppcVar15 + 1;
            }
          }
        }
        uVar10 = (ulonglong)local_8e0;
        uVar12 = (longlong)ppcVar15 - (longlong)local_8e8 >> 3;
        if (uVar12 != uVar10) {
          if (uVar10 <= uVar12) {
            if (local_8dc < uVar12) {
              FUN_180e11150(&local_8e8,local_8d8,uVar12,8);
              uVar10 = (ulonglong)local_8e0;
            }
            for (ppcVar17 = local_8e8 + uVar10; ppcVar17 != local_8e8 + uVar12;
                ppcVar17 = ppcVar17 + 1) {
              *ppcVar17 = (char *)0x0;
            }
          }
          local_8e0 = (uint)uVar12;
        }
      }
      local_a08 = local_9f0;
      local_a00 = 0;
      local_b08 = local_aa8;
      lStack_b00 = local_aa0;
      uStack_a88 = 0;
      local_9f8 = 0x100;
      local_a80 = 0;
      local_a78 = 0xf;
      local_a90 = (char ******)0x0;
      iVar23 = FUN_180074d50(&local_8e8,&local_b08,&local_a08,&local_a90);
      uVar14 = FUN_180075500(local_a08,local_a00);
      *local_a98 = uVar14;
      *local_ad8 = local_a00;
      pppppppcVar19 = &local_a90;
      if (0xf < local_a78) {
        pppppppcVar19 = (char *******)local_a90;
      }
      uVar14 = FUN_180075500(pppppppcVar19,local_a80);
      *local_ad0 = uVar14;
      *local_ac8 = local_a80;
      if (0xf < local_a78) {
        if (0xfff < local_a78 + 1) {
          if (0x1f < (ulonglong)((longlong)local_a90 + (-8 - (longlong)local_a90[-1]))) {
                    /* WARNING: Subroutine does not return */
            FUN_182e4c568(local_a90[-1],local_a78 + 0x28);
          }
        }
        thunk_FUN_182e4c5e0();
      }
      local_a80 = 0;
      local_a78 = 0xf;
      local_a90 = (char ******)((ulonglong)local_a90 & 0xffffffffffffff00);
      if (local_a08 != local_9f0) {
        FUN_182e4c5e0();
      }
      goto LAB_180075ce4;
    }
LAB_180075be7:
    local_a80 = 0;
    local_a78 = 0xf;
    local_a90 = (char ******)0x0;
    uStack_a88 = 0;
    *local_ad8 = 0;
    local_a90 = (char ******)FUN_180075440(&local_a90,0x70);
    uVar14 = s_Error____cc1__arg_not_found_in_f_18305c1a0._8_8_;
    local_a80 = 99;
    local_a78 = 0x6f;
    *local_a90 = (char *****)s_Error____cc1__arg_not_found_in_f_18305c1a0._0_8_;
    local_a90[1] = (char *****)uVar14;
    uVar14 = s_Error____cc1__arg_not_found_in_f_18305c1a0._24_8_;
    local_a90[2] = (char *****)s_Error____cc1__arg_not_found_in_f_18305c1a0._16_8_;
    local_a90[3] = (char *****)uVar14;
    uVar14 = s_Error____cc1__arg_not_found_in_f_18305c1a0._40_8_;
    local_a90[4] = (char *****)s_Error____cc1__arg_not_found_in_f_18305c1a0._32_8_;
    local_a90[5] = (char *****)uVar14;
    uVar14 = s_Error____cc1__arg_not_found_in_f_18305c1a0._56_8_;
    local_a90[6] = (char *****)s_Error____cc1__arg_not_found_in_f_18305c1a0._48_8_;
    local_a90[7] = (char *****)uVar14;
    uVar7 = s_Error____cc1__arg_not_found_in_f_18305c1a0._76_4_;
    uVar6 = s_Error____cc1__arg_not_found_in_f_18305c1a0._72_4_;
    uVar5 = s_Error____cc1__arg_not_found_in_f_18305c1a0._68_4_;
    *(undefined4 *)(local_a90 + 8) = s_Error____cc1__arg_not_found_in_f_18305c1a0._64_4_;
    *(undefined4 *)((longlong)local_a90 + 0x44) = uVar5;
    *(undefined4 *)(local_a90 + 9) = uVar6;
    *(undefined4 *)((longlong)local_a90 + 0x4c) = uVar7;
    uVar7 = s_Error____cc1__arg_not_found_in_f_18305c1a0._92_4_;
    uVar6 = s_Error____cc1__arg_not_found_in_f_18305c1a0._88_4_;
    uVar5 = s_Error____cc1__arg_not_found_in_f_18305c1a0._84_4_;
    *(undefined4 *)(local_a90 + 10) = s_Error____cc1__arg_not_found_in_f_18305c1a0._80_4_;
    *(undefined4 *)((longlong)local_a90 + 0x54) = uVar5;
    *(undefined4 *)(local_a90 + 0xb) = uVar6;
    *(undefined4 *)((longlong)local_a90 + 0x5c) = uVar7;
    *(undefined2 *)(local_a90 + 0xc) = s_Error____cc1__arg_not_found_in_f_18305c1a0._96_2_;
    *(char *)((longlong)local_a90 + 0x62) = s_Error____cc1__arg_not_found_in_f_18305c1a0[0x62];
    *(char *)((longlong)local_a90 + 99) = '\0';
    uVar14 = FUN_180075500(local_a90,99);
    *local_ad0 = uVar14;
    *local_ac8 = local_a80;
    iVar23 = 1;
    if (0xf < local_a78) {
      if (0xfff < local_a78 + 1) {
        if ((char *)0x1f < (char *)((longlong)local_a90 + (-8 - (longlong)local_a90[-1]))) {
                    /* WARNING: Subroutine does not return */
          FUN_182e4c568(local_a90[-1],local_a78 + 0x28);
        }
      }
      thunk_FUN_182e4c5e0();
    }
LAB_180075ce4:
    FUN_180074a10(local_a70);
  }
  if (local_8e8 != local_8d8) {
    FUN_182e4c5e0();
  }
  FUN_180e33cd0(local_d8);
  return iVar23;
code_r0x000180075bde:
  ppcVar17 = ppcVar17 + 1;
  if (ppcVar17 == ppcVar21) goto LAB_180075be7;
  goto LAB_180075bd4;
}
/* ===== Function 77096: entry @ 182e45eb0 size=61 conv=unknown ===== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}
