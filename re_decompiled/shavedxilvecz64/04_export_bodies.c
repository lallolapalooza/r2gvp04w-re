/* ===== Function 425: entry @ 180002cd0 size=5 conv=unknown ===== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}
/* ===== Function 2755: releaseDxilVeczBuffer @ 18000caf0 size=5 conv=unknown ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void releaseDxilVeczBuffer(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *_Memory;
  longlong lStackX_8;
  
  lStackX_8 = param_1;
                    /* 0xcaf0  1  releaseDxilVeczBuffer */
  iVar4 = _Mtx_lock(&DAT_1810aa460);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_C_error(iVar4);
  }
  uVar5 = thunk_FUN_1800d2c00(&lStackX_8);
  plVar3 = DAT_1810aa4d8;
  plVar6 = (longlong *)(DAT_1810aa4e8 + (uVar5 & _DAT_1810aa500) * 0x10);
  plVar1 = (longlong *)plVar6[1];
  if (plVar1 == DAT_1810aa4d8) {
LAB_1800d9cb2:
    _Memory = (longlong *)0x0;
  }
  else {
    lVar2 = plVar1[2];
    _Memory = plVar1;
    while (param_1 != lVar2) {
      if (_Memory == (longlong *)*plVar6) goto LAB_1800d9cb2;
      _Memory = (longlong *)_Memory[1];
      lVar2 = _Memory[2];
    }
  }
  if (_Memory != (longlong *)0x0) {
    if (plVar1 == _Memory) {
      if ((longlong *)*plVar6 == _Memory) {
        *plVar6 = (longlong)DAT_1810aa4d8;
        plVar6[1] = (longlong)plVar3;
      }
      else {
        plVar6[1] = _Memory[1];
      }
    }
    else if ((longlong *)*plVar6 == _Memory) {
      *plVar6 = *_Memory;
    }
    lVar2 = *_Memory;
    _DAT_1810aa4e0 = _DAT_1810aa4e0 + -1;
    *(longlong *)_Memory[1] = lVar2;
    *(longlong *)(lVar2 + 8) = _Memory[1];
    if ((longlong *)_Memory[3] != _Memory + 6) {
      free((longlong *)_Memory[3]);
    }
    free(_Memory);
  }
  _Mtx_unlock(&DAT_1810aa460);
  return;
}
/* ===== Function 20821: runDxilVeczPass @ 180059f70 size=5 conv=unknown ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
runDxilVeczPass(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,int param_5,
               undefined8 *param_6)

{
  char **ppcVar1;
  byte *pbVar2;
  char *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong ****pppplVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char **ppcVar12;
  undefined1 auStack_948 [32];
  undefined8 uStack_928;
  undefined1 uStack_920;
  undefined1 auStack_918 [16];
  code *pcStack_908;
  undefined1 *puStack_900;
  undefined1 auStack_8f8 [8];
  void *pvStack_8f0;
  byte bStack_8e8;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 *puStack_8a8;
  undefined8 uStack_8a0;
  longlong ***ppplStack_898;
  undefined8 uStack_890;
  longlong lStack_888;
  ulonglong uStack_880;
  char **ppcStack_878;
  uint uStack_870;
  undefined4 uStack_86c;
  char *apcStack_868 [256];
  ulonglong uStack_68;
  
                    /* 0x59f70  2  runDxilVeczPass */
  uStack_68 = DAT_1810a2628 ^ (ulonglong)auStack_948;
  uVar11 = (ulonglong)param_5;
  pcStack_908 = param_4;
  thunk_FUN_180288830(auStack_8f8);
  uVar10 = 0;
  ppcStack_878 = apcStack_868;
  uVar6 = 0;
  uStack_870 = 0;
  uStack_86c = 0x100;
  if (param_5 == 0) {
LAB_1800d9e32:
    uVar10 = 1;
    apcStack_868[0] = "shavedxilvecz.dll";
    uStack_870 = 1;
    if (param_5 < 1) goto LAB_1800d9ea1;
  }
  else {
    if (param_5 < 1) goto LAB_1800d9ea1;
    pbVar2 = (byte *)*param_6;
    if (pbVar2 != (byte *)0x0) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pbVar2[lVar7] != 0);
      uVar10 = 0;
      if (lVar7 != 0) {
        if (*pbVar2 != 0x2d) {
          uVar6 = -(uint)(*pbVar2 < 0x2d) | 1;
        }
        if (uVar6 == 0) goto LAB_1800d9e32;
      }
    }
  }
  if (0x100 - uVar10 < uVar11) {
    thunk_FUN_1801be800(&ppcStack_878,apcStack_868,uVar10 + uVar11);
    uVar10 = (ulonglong)uStack_870;
  }
  if (param_6 != param_6 + uVar11) {
    memcpy(ppcStack_878 + uVar10,param_6,uVar11 * 8);
    uVar10 = (ulonglong)uStack_870;
  }
  uStack_870 = (int)uVar10 + param_5;
  uVar10 = (ulonglong)uStack_870;
  param_4 = pcStack_908;
LAB_1800d9ea1:
  ppcVar1 = ppcStack_878 + uVar10;
  ppcVar12 = ppcStack_878;
  if (ppcStack_878 != ppcVar1) {
    do {
      ppplStack_898 = (longlong ***)0x0;
      uStack_890 = 0;
      lStack_888 = 0;
      uStack_880 = 0;
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while ((*ppcVar12)[lVar7] != '\0');
      thunk_FUN_1800d2920(&ppplStack_898);
      pppplVar8 = &ppplStack_898;
      if (0xf < uStack_880) {
        pppplVar8 = (longlong ****)ppplStack_898;
      }
      if ((lStack_888 == 8) && (*pppplVar8 == (longlong ***)0x6e6f69737265762d)) {
LAB_1800d9f32:
        bVar4 = true;
      }
      else {
        pppplVar8 = &ppplStack_898;
        if (0xf < uStack_880) {
          pppplVar8 = (longlong ****)ppplStack_898;
        }
        if (((lStack_888 == 9) && (*pppplVar8 == (longlong ***)0x6f69737265762d2d)) &&
           (*(char *)(pppplVar8 + 1) == 'n')) goto LAB_1800d9f32;
        bVar4 = false;
      }
      if (0xf < uStack_880) {
        pppplVar8 = (longlong ****)ppplStack_898;
        if ((0xfff < uStack_880 + 1) &&
           (pppplVar8 = (longlong ****)ppplStack_898[-1],
           0x1f < (ulonglong)((longlong)ppplStack_898 + (-8 - (longlong)pppplVar8)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pppplVar8);
      }
      if (bVar4) {
        lVar7 = thunk_FUN_1801bd100();
        uVar9 = s_SHAVE_Vecz_Vectorizer_version_11_180e55fc0._8_8_;
        pcVar3 = *(char **)(lVar7 + 0x18);
        if ((ulonglong)(*(longlong *)(lVar7 + 0x10) - (longlong)pcVar3) < 0x25) {
          thunk_FUN_1801bdd40(lVar7,"SHAVE Vecz Vectorizer version 11.1.3\n",0x25);
        }
        else {
          *(undefined8 *)pcVar3 = s_SHAVE_Vecz_Vectorizer_version_11_180e55fc0._0_8_;
          *(undefined8 *)(pcVar3 + 8) = uVar9;
          uVar9 = s_SHAVE_Vecz_Vectorizer_version_11_180e55fc0._24_8_;
          *(undefined8 *)(pcVar3 + 0x10) = s_SHAVE_Vecz_Vectorizer_version_11_180e55fc0._16_8_;
          *(undefined8 *)(pcVar3 + 0x18) = uVar9;
          *(undefined4 *)(pcVar3 + 0x20) = s_SHAVE_Vecz_Vectorizer_version_11_180e55fc0._32_4_;
          pcVar3[0x24] = s_SHAVE_Vecz_Vectorizer_version_11_180e55fc0[0x24];
          *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 0x25;
        }
        break;
      }
      ppcVar12 = ppcVar12 + 1;
    } while (ppcVar12 != ppcVar1);
    uVar10 = (ulonglong)uStack_870;
  }
  uStack_920 = 0;
  pcStack_908 = (code *)&DAT_180e55440;
  puStack_900 = (undefined1 *)0x0;
  uStack_928 = 0;
  thunk_FUN_1801cf4e0(uVar10,ppcStack_878,&pcStack_908,0);
  puStack_900 = auStack_918;
  pcStack_908 = FUN_1800d2ed0;
  auStack_918[0] = 0;
  puStack_8c8 = &DAT_180e55440;
  uStack_8c0 = 0;
  uStack_8d8 = param_1;
  uStack_8d0 = param_2;
  thunk_FUN_180a65630(&pvStack_8f0,&uStack_8d8,auStack_8f8,&pcStack_908);
  puStack_900 = auStack_918;
  pcStack_908 = FUN_1800d2ed0;
  auStack_918[0] = 0;
  puStack_8a8 = &DAT_180e55440;
  uStack_8a0 = 0;
  uStack_8b8 = param_1;
  uStack_8b0 = param_2;
  uVar9 = thunk_FUN_180a65630(&uStack_8d8,&uStack_8b8,auStack_8f8,&pcStack_908);
  uVar5 = thunk_FUN_1800d7a60(auStack_8f8,uVar9,param_3,param_4);
  thunk_FUN_1801bed70();
  if ((bStack_8e8 & 1) == 0) {
    if (pvStack_8f0 != (void *)0x0) {
      thunk_FUN_1802e40e0(pvStack_8f0);
      free(pvStack_8f0);
    }
  }
  else if (pvStack_8f0 != (void *)0x0) {
    (*(code *)PTR__guard_dispatch_icall_1811a4020)(pvStack_8f0,1);
  }
  if (ppcStack_878 != apcStack_868) {
    free(ppcStack_878);
  }
  thunk_FUN_180288f70(auStack_8f8);
  return uVar5;
}
