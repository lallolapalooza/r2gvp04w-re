/* ===== Function 3529: vclCompilerCreate @ 1828dfcd0 size=2380 conv=unknown ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 vclCompilerCreate(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined8 local_200;
  longlong local_1f8 [2];
  undefined8 local_1e8;
  ulonglong local_1e0;
  longlong local_1d8 [2];
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8 [2];
  undefined8 local_1a8;
  ulonglong local_1a0;
  longlong local_198 [2];
  undefined8 local_188;
  ulonglong local_180;
  longlong local_178 [2];
  undefined8 local_168;
  ulonglong local_160;
  longlong local_158 [2];
  undefined8 local_148;
  ulonglong local_140;
  longlong local_138 [2];
  undefined8 local_128;
  ulonglong local_120;
  longlong local_118 [2];
  undefined8 local_108;
  ulonglong local_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  ulonglong local_e0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
                    /* 0x28dfcd0  4  vclCompilerCreate */
  local_38 = DAT_184a59c08 ^ (ulonglong)auStack_228;
  local_200 = (undefined8 *)param_1;
  if (param_3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_183b88fc8(0x98);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      local_88 = &DAT_1843da5b8;
      uStack_80 = 3;
      local_58 = 0x843da5b8;
      uStack_54 = 1;
      uStack_50 = 3;
      uStack_4c = 0;
      local_208 = puVar4;
      FUN_182910ed0(puVar4,&local_58,2);
      *(undefined1 *)(puVar4 + 4) = 0;
      _Mtx_init_in_situ(puVar4 + 5,2);
      puVar4[0xf] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0xf;
      *(undefined1 *)(puVar4 + 0xf) = 0;
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_183b88fc8(0x98);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      local_98 = &DAT_1843da5b8;
      uStack_90 = 3;
      local_68 = 0x843da5b8;
      uStack_64 = 1;
      uStack_60 = 3;
      uStack_5c = 0;
      local_208 = puVar4;
      FUN_182910ed0(puVar4,&local_68,2);
      *(undefined1 *)(puVar4 + 4) = 1;
      _Mtx_init_in_situ(puVar4 + 5,2);
      puVar4[0xf] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0xf;
      *(undefined1 *)(puVar4 + 0xf) = 0;
    }
  }
  uVar6 = 0;
  local_208 = puVar4;
  if (param_2 == (undefined8 *)0x0) {
    local_1e8 = 0;
    local_1e0 = 0xf;
    local_1f8[0] = 0;
    FUN_1828df560(local_1f8,"Null argument to create compiler!",0x21);
    FUN_1828df8e0(puVar4,local_1f8);
    if (0xf < local_1e0) {
      if (0xfff < local_1e0 + 1) {
        if (0x1f < (local_1f8[0] - *(longlong *)(local_1f8[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_1f8[0] + -8),local_1e0 + 0x28);
        }
      }
      thunk_FUN_183b37660();
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1828deea0(puVar4,1);
    }
    return 0x78000004;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_48 = FUN_183b88fc8(0x60);
  *(longlong *)local_48 = local_48;
  *(longlong *)(local_48 + 8) = local_48;
  *(longlong *)(local_48 + 0x10) = local_48;
  *(undefined2 *)(local_48 + 0x18) = 0x101;
  local_1c8 = 0;
  local_1c0 = 0xf;
  local_1d8[0] = 0;
  FUN_1828df560(local_1d8,"NPU_COMPILER_TYPE",0x11);
  uVar5 = FUN_1828dec20(&local_48,local_1d8);
  FUN_1828df560(uVar5,&DAT_1843da5b0,4);
  if (0xf < local_1c0) {
    if (0xfff < local_1c0 + 1) {
      if (0x1f < (local_1d8[0] - *(longlong *)(local_1d8[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        FUN_183b988f4(*(longlong *)(local_1d8[0] + -8),local_1c0 + 0x28);
      }
    }
    thunk_FUN_183b37660();
  }
  iVar7 = local_200._4_4_;
  switch(local_200._4_4_) {
  case 0:
    local_1a8 = 0;
    local_1a0 = 0xf;
    local_1b8[0] = 0;
    FUN_1828df560(local_1b8,"LOG_LEVEL",9);
    uVar5 = FUN_1828dec20(&local_48,local_1b8);
    FUN_1828df560(uVar5,"LOG_NONE",8);
    if (0xf < local_1a0) {
      if (0xfff < local_1a0 + 1) {
        if (0x1f < (local_1b8[0] - *(longlong *)(local_1b8[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_1b8[0] + -8),local_1a0 + 0x28);
        }
      }
      thunk_FUN_183b37660();
    }
    goto LAB_1828e0516;
  case 1:
    local_188 = 0;
    local_180 = 0xf;
    local_198[0] = 0;
    FUN_1828df560(local_198,"LOG_LEVEL",9);
    uVar5 = FUN_1828dec20(&local_48,local_198);
    FUN_1828df560(uVar5,"LOG_ERROR",9);
    if (0xf < local_180) {
      if (0xfff < local_180 + 1) {
        if (0x1f < (local_198[0] - *(longlong *)(local_198[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_198[0] + -8),local_180 + 0x28);
        }
      }
LAB_1828e0174:
      thunk_FUN_183b37660();
    }
    break;
  case 2:
    local_168 = 0;
    local_160 = 0xf;
    local_178[0] = 0;
    FUN_1828df560(local_178,"LOG_LEVEL",9);
    uVar5 = FUN_1828dec20(&local_48,local_178);
    FUN_1828df560(uVar5,"LOG_WARNING",0xb);
    if (0xf < local_160) {
      if (0xfff < local_160 + 1) {
        if (0x1f < (local_178[0] - *(longlong *)(local_178[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_178[0] + -8),local_160 + 0x28);
        }
      }
      goto LAB_1828e0174;
    }
    break;
  case 3:
    local_148 = 0;
    local_140 = 0xf;
    local_158[0] = 0;
    FUN_1828df560(local_158,"LOG_LEVEL",9);
    uVar5 = FUN_1828dec20(&local_48,local_158);
    FUN_1828df560(uVar5,"LOG_INFO",8);
    if (0xf < local_140) {
      if (0xfff < local_140 + 1) {
        if (0x1f < (local_158[0] - *(longlong *)(local_158[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_158[0] + -8),local_140 + 0x28);
        }
      }
      goto LAB_1828e0174;
    }
    break;
  case 4:
    local_128 = 0;
    local_120 = 0xf;
    local_138[0] = 0;
    FUN_1828df560(local_138,"LOG_LEVEL",9);
    uVar5 = FUN_1828dec20(&local_48,local_138);
    FUN_1828df560(uVar5,"LOG_DEBUG",9);
    if (0xf < local_120) {
      if (0xfff < local_120 + 1) {
        if (0x1f < (local_138[0] - *(longlong *)(local_138[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_138[0] + -8),local_120 + 0x28);
        }
      }
      goto LAB_1828e0174;
    }
    break;
  case 5:
    local_108 = 0;
    local_100 = 0xf;
    local_118[0] = 0;
    FUN_1828df560(local_118,"LOG_LEVEL",9);
    uVar5 = FUN_1828dec20(&local_48,local_118);
    FUN_1828df560(uVar5,"LOG_TRACE",9);
    if (0xf < local_100) {
      if (0xfff < local_100 + 1) {
        if (0x1f < (local_118[0] - *(longlong *)(local_118[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_118[0] + -8),local_100 + 0x28);
        }
      }
      goto LAB_1828e0174;
    }
    break;
  default:
    local_e8 = 0;
    local_e0 = 0xf;
    local_f8[0] = 0;
    FUN_1828df560(local_f8,"LOG_LEVEL",9);
    uVar5 = FUN_1828dec20(&local_48,local_f8);
    FUN_1828df560(uVar5,"LOG_ERROR",9);
    if (0xf < local_e0) {
      if (0xfff < local_e0 + 1) {
        if (0x1f < (local_f8[0] - *(longlong *)(local_f8[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_f8[0] + -8),local_e0 + 0x28);
        }
      }
      thunk_FUN_183b37660();
    }
    iVar7 = 1;
    local_200 = (undefined8 *)CONCAT44(1,(undefined4)local_200);
    param_1 = local_200;
  }
  *(int *)(puVar4 + 2) = iVar7 + 1;
LAB_1828e0516:
  local_200 = (undefined8 *)FUN_183b88fc8(0x40);
  if (local_200 != (undefined8 *)0x0) {
    *local_200 = 0;
    local_200[1] = 0;
    local_200[2] = 0;
    local_200[3] = 0;
    local_200[4] = 0;
    local_200[5] = 0;
    local_200[6] = 0;
    local_200[7] = 0;
    uVar6 = FUN_1828f6d60(local_200,param_1,&local_48,puVar4);
  }
  *param_2 = uVar6;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = puVar4;
  }
  cVar1 = *(char *)((longlong)*(longlong **)(local_48 + 8) + 0x19);
  plVar3 = *(longlong **)(local_48 + 8);
  while (cVar1 == '\0') {
    FUN_1828de420(&local_48,&local_48,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_1828de670(plVar3 + 4);
    thunk_FUN_183b37660(plVar3,0x60);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_183b37660(local_48,0x60);
  return 0;
}
/* ===== Function 3530: vclCompilerDestroy @ 1828e0720 size=209 conv=unknown ===== */

undefined8 vclCompilerDestroy(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
                    /* 0x28e0720  5  vclCompilerDestroy */
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1828deea0(*(longlong *)(param_1 + 0x38),1);
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
        LOCK();
        piVar1 = (int *)(lVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
        }
      }
    }
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
        LOCK();
        piVar1 = (int *)(lVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
        }
      }
    }
    thunk_FUN_183b37660(param_1,0x40);
  }
  return 0;
}
/* ===== Function 3531: vclCompilerGetProperties @ 1828e0800 size=26 conv=unknown ===== */

undefined8 vclCompilerGetProperties(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* 0x28e0800  6  vclCompilerGetProperties */
  if ((param_2 != (undefined8 *)0x0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    param_2[1] = uVar1;
    return 0;
  }
  return 0x78000004;
}
/* ===== Function 3532: vclExecutableCreate @ 1828e0820 size=1510 conv=unknown ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int vclExecutableCreate(longlong param_1,longlong *param_2,undefined ****param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_2d8 [36];
  int local_2b4;
  char *local_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined ****local_2a0;
  ulonglong uStack_298;
  undefined **local_290;
  longlong *local_288;
  undefined ***local_280;
  undefined8 local_278;
  undefined ****local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined ***local_250;
  undefined8 uStack_248;
  undefined ****local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined **local_210;
  longlong *local_208;
  undefined ***local_200 [2];
  longlong local_1f0 [2];
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined1 local_1c8 [384];
  ulonglong local_48;
  
                    /* 0x28e0820  7  vclExecutableCreate */
  local_48 = DAT_184a59c08 ^ (ulonglong)auStack_2d8;
  if (((param_1 == 0) || (param_3 == (undefined ****)0x0)) || (lVar6 = *param_2, lVar6 == 0)) {
    return 0x78000004;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_1e0 = 0;
  local_1d8 = 0xf;
  local_1f0[0] = 0;
  local_278 = uVar1;
  local_240 = param_3;
  FUN_1828df560(local_1f0,param_2[2],param_2[3]);
  local_250 = (undefined ***)0x1843da698;
  uStack_248 = 0xb;
  local_2a0 = &local_280;
  uStack_268 = 1;
  local_2b0 = "config: {0}";
  uStack_2a8 = 0xb;
  uStack_2a4 = 0;
  uStack_298 = 1;
  local_290 = llvm::detail::
              provider_format_adapter<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              ::vftable;
  local_288 = local_1f0;
  local_280 = &local_290;
  local_270 = local_2a0;
  FUN_182910fb0(uVar1,4,&local_2b0);
  FUN_1828e72f0(local_1c8,param_1);
  iVar3 = FUN_1828f0d90(local_1c8,local_1f0);
  if (iVar3 == 0) {
    iVar3 = FUN_1828f2be0(local_1c8,lVar6,param_2[1]);
    if (iVar3 == 0) {
      local_250 = (undefined ***)0x0;
      local_2b4 = 0;
      plVar4 = (longlong *)FUN_1828fb930(param_1,&local_270,local_1c8);
      pppuVar2 = (undefined ***)*plVar4;
      iVar3 = (int)plVar4[1];
      local_2b4 = iVar3;
      local_250 = pppuVar2;
      if (iVar3 == 0) {
        iVar3 = FUN_1828fd070(pppuVar2);
        if (iVar3 == 0) {
          *param_3 = pppuVar2;
          FUN_1828dea20(local_1c8);
          if (0xf < local_1d8) {
            uVar7 = local_1d8 + 1;
            lVar6 = local_1f0[0];
            if (0xfff < uVar7) {
              uVar7 = local_1d8 + 0x28;
              lVar6 = *(longlong *)(local_1f0[0] + -8);
              if (0x1f < (local_1f0[0] - lVar6) - 8U) goto LAB_1828e0e26;
            }
            thunk_FUN_183b37660(lVar6,uVar7);
          }
          return 0;
        }
        if (pppuVar2 != (undefined ***)0x0) {
          FUN_1828def40(pppuVar2,1);
        }
        *param_3 = (undefined ***)0x0;
        local_2a0 = (undefined ****)0x0;
        uStack_298 = 0xf;
        local_2b0 = (char *)0x0;
        FUN_1828df560(&local_2b0,"Failed to get compiled network",0x1e);
        FUN_1828df8e0(uVar1,&local_2b0);
        if (0xf < uStack_298) {
          if (0xfff < uStack_298 + 1) {
            if ((char *)0x1f < local_2b0 + (-8 - *(longlong *)(local_2b0 + -8))) {
                    /* WARNING: Subroutine does not return */
              FUN_183b988f4(*(longlong *)(local_2b0 + -8),uStack_298 + 0x28);
            }
          }
          thunk_FUN_183b37660();
        }
        FUN_1828dea20(local_1c8);
        if (local_1d8 < 0x10) {
          return iVar3;
        }
        uVar7 = local_1d8 + 1;
        lVar6 = local_1f0[0];
        if (uVar7 < 0x1000) goto LAB_1828e0c98;
        lVar6 = *(longlong *)(local_1f0[0] + -8);
        lVar5 = local_1f0[0] - lVar6;
      }
      else {
        if (pppuVar2 != (undefined ***)0x0) {
          FUN_1828def40(pppuVar2,1);
        }
        *param_3 = (undefined ***)0x0;
        local_2a0 = (undefined ****)0x0;
        uStack_298 = 0xf;
        local_2b0 = (char *)0x0;
        FUN_1828df560(&local_2b0,"Failed to create executable",0x1b);
        FUN_1828df8e0(uVar1,&local_2b0);
        if (0xf < uStack_298) {
          if (0xfff < uStack_298 + 1) {
            if ((char *)0x1f < local_2b0 + (-8 - *(longlong *)(local_2b0 + -8))) {
                    /* WARNING: Subroutine does not return */
              FUN_183b988f4(*(longlong *)(local_2b0 + -8),uStack_298 + 0x28);
            }
          }
          thunk_FUN_183b37660();
        }
        FUN_1828dea20(local_1c8);
        if (local_1d8 < 0x10) {
          return iVar3;
        }
        uVar7 = local_1d8 + 1;
        lVar6 = local_1f0[0];
        if (uVar7 < 0x1000) goto LAB_1828e0c98;
        lVar6 = *(longlong *)(local_1f0[0] + -8);
        lVar5 = local_1f0[0] - lVar6;
      }
      uVar7 = local_1d8 + 0x28;
      if (lVar5 - 8U < 0x20) {
LAB_1828e0c98:
        thunk_FUN_183b37660(lVar6,uVar7);
        return iVar3;
      }
      goto LAB_1828e0e26;
    }
    local_260 = 0;
    local_258 = 0xf;
    local_270 = (undefined ****)0x0;
    FUN_1828df560(&local_270,"Failed to parse model info! Incorrect format!",0x2d);
    FUN_1828df8e0(uVar1,&local_270);
    if (0xf < local_258) {
      if (0xfff < local_258 + 1) {
        if (0x1f < (ulonglong)((longlong)local_270 + (-8 - (longlong)local_270[-1]))) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(local_270[-1],local_258 + 0x28);
        }
      }
      goto LAB_1828e0a37;
    }
  }
  else {
    local_270 = (undefined ****)0x1843da6a8;
    uStack_268 = 0x35;
    local_240 = local_200;
    uStack_238 = 1;
    local_230 = 0x843da6a8;
    uStack_22c = 1;
    uStack_228 = 0x35;
    uStack_224 = 0;
    uStack_218 = 1;
    uStack_214 = 0;
    local_210 = llvm::detail::
                provider_format_adapter<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                ::vftable;
    local_208 = local_1f0;
    local_200[0] = &local_210;
    local_220 = local_240;
    FUN_1828ded70(&local_230,&local_2b0);
    FUN_1828df8e0(uVar1,&local_2b0);
    if (0xf < uStack_298) {
      if (0xfff < uStack_298 + 1) {
        if ((char *)0x1f < local_2b0 + (-8 - *(longlong *)(local_2b0 + -8))) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_2b0 + -8),uStack_298 + 0x28);
        }
      }
LAB_1828e0a37:
      thunk_FUN_183b37660();
    }
  }
  FUN_1828dea20(local_1c8);
  if (0xf < local_1d8) {
    if (0xfff < local_1d8 + 1) {
      uVar7 = local_1d8 + 0x28;
      lVar6 = *(longlong *)(local_1f0[0] + -8);
      if (0x1f < (local_1f0[0] - lVar6) - 8U) {
LAB_1828e0e26:
                    /* WARNING: Subroutine does not return */
        FUN_183b988f4(lVar6,uVar7);
      }
    }
    thunk_FUN_183b37660();
  }
  return iVar3;
}
/* ===== Function 3533: vclExecutableDestroy @ 1828e0e30 size=26 conv=unknown ===== */

undefined8 vclExecutableDestroy(longlong param_1)

{
                    /* 0x28e0e30  8  vclExecutableDestroy */
  if (param_1 != 0) {
    FUN_1828def40(param_1,1);
  }
  return 0;
}
/* ===== Function 3534: vclExecutableGetSerializableBlob @ 1828e0e50 size=230 conv=unknown ===== */

int vclExecutableGetSerializableBlob(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong local_28 [2];
  undefined8 local_18;
  ulonglong local_10;
  
                    /* 0x28e0e50  9  vclExecutableGetSerializableBlob */
  if ((param_3 == (undefined8 *)0x0) || (param_1 == 0)) {
    return 0x78000004;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  if (param_2 == 0) {
    iVar2 = FUN_1828fcf30(param_1,param_3);
  }
  else {
    iVar2 = FUN_1828fcd40(param_1,param_2,*param_3);
  }
  if (iVar2 != 0) {
    local_10 = 0xf;
    local_28[0] = 0;
    local_18 = 0;
    FUN_1828df560(local_28,"Failed to get blob",0x12);
    FUN_1828df8e0(uVar1,local_28);
    if (0xf < local_10) {
      if (0xfff < local_10 + 1) {
        if (0x1f < (local_28[0] - *(longlong *)(local_28[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_28[0] + -8),local_10 + 0x28);
        }
      }
      thunk_FUN_183b37660();
    }
    return iVar2;
  }
  return 0;
}
/* ===== Function 3535: vclGetDecodedProfilingBuffer @ 1828e0f40 size=218 conv=unknown ===== */

undefined8 vclGetDecodedProfilingBuffer(longlong param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong local_28 [2];
  undefined8 local_18;
  ulonglong local_10;
  
                    /* 0x28e0f40  10  vclGetDecodedProfilingBuffer */
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    if (param_2 == 1) {
      uVar1 = FUN_1828fd270(param_1,param_3);
      return uVar1;
    }
    if (param_2 == 2) {
      uVar1 = FUN_1828fd5d0(param_1,param_3);
      return uVar1;
    }
    if (param_2 == 3) {
      uVar1 = FUN_1828fd510(param_1,param_3);
      return uVar1;
    }
    local_10 = 0xf;
    local_28[0] = 0;
    local_18 = 0;
    FUN_1828df560(local_28,"Request type is not supported.",0x1e);
    FUN_1828df8e0(uVar1,local_28);
    if (0xf < local_10) {
      if (0xfff < local_10 + 1) {
        if (0x1f < (local_28[0] - *(longlong *)(local_28[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_28[0] + -8),local_10 + 0x28);
        }
      }
      thunk_FUN_183b37660();
    }
  }
  return 0x78000004;
}
/* ===== Function 3536: vclLogHandleGetString @ 1828e1020 size=355 conv=unknown ===== */

undefined8 vclLogHandleGetString(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  
                    /* 0x28e1020  11  vclLogHandleGetString */
  if (param_2 == (longlong *)0x0) {
    local_50 = 0;
    local_78 = 0x843da568;
    uStack_74 = 1;
    uStack_70 = 0x1c;
    uStack_6c = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_182910fb0(0x843da568,2,&local_78);
    uVar2 = 0x78000004;
  }
  else {
    iVar1 = FUN_183b64cdc(param_1 + 0x28);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_183b64f18(iVar1);
    }
    lVar3 = param_1 + 0x78;
    if (0xf < *(ulonglong *)(param_1 + 0x90)) {
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    uVar2 = 0;
    if ((lVar3 == 0) || (*(longlong *)(param_1 + 0x88) == 0)) {
      *param_2 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x88) + 1;
      if (param_3 == 0) {
        *param_2 = lVar3;
      }
      else {
        if (*param_2 != lVar3) {
          local_20 = 0;
          local_48 = 0x843da588;
          uStack_44 = 1;
          uStack_40 = 0x21;
          uStack_3c = 0;
          local_38 = 0;
          uStack_30 = 0;
          FUN_182910fb0(param_1,2,&local_48);
          _Mtx_unlock(param_1 + 0x28);
          return 0x78000004;
        }
        FUN_183b8b730(param_3);
        FUN_1828df560(param_1 + 0x78,&DAT_1843da431,0);
      }
    }
    _Mtx_unlock(param_1 + 0x28);
  }
  return uVar2;
}
/* ===== Function 3537: vclProfilingCreate @ 1828e1190 size=614 conv=unknown ===== */

undefined8 vclProfilingCreate(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
                    /* 0x28e1190  12  vclProfilingCreate */
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    return 0x78000004;
  }
  if (param_3 == 0) {
    puVar1 = (undefined8 *)FUN_183b88fc8(0x98);
    if (puVar1 == (undefined8 *)0x0) goto LAB_1828e12e5;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    local_28 = &DAT_1843da5b8;
    uStack_20 = 3;
    FUN_182910ed0(puVar1,&local_28,2);
    *(undefined1 *)(puVar1 + 4) = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_183b88fc8(0x98);
    if (puVar1 == (undefined8 *)0x0) {
LAB_1828e12e5:
      puVar1 = (undefined8 *)0x0;
      goto LAB_1828e12e9;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    local_28 = &DAT_1843da5b8;
    uStack_20 = 3;
    FUN_182910ed0(puVar1,&local_28,2);
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  _Mtx_init_in_situ(puVar1 + 5,2);
  puVar1[0x12] = 0xf;
  puVar1[0x11] = 0;
  puVar1[0xf] = 0;
LAB_1828e12e9:
  puVar2 = (undefined8 *)FUN_183b8938c(0x58,&DAT_1846823cf);
  if (puVar2 == (undefined8 *)0x0) {
    local_28 = (undefined *)0x0;
    local_18 = 0;
    local_10 = 0xf;
    FUN_1828df560(&local_28,"Failed to create profiler",0x19);
    FUN_1828df8e0(puVar1,&local_28);
    if (0xf < local_10) {
      if (0xfff < local_10 + 1) {
        if ((undefined *)0x1f < local_28 + (-8 - *(longlong *)(local_28 + -8))) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(*(longlong *)(local_28 + -8),local_10 + 0x28);
        }
      }
      thunk_FUN_183b37660();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1828deea0(puVar1,1);
    }
    uVar3 = 0x70000002;
  }
  else {
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = puVar1;
    *param_2 = puVar2;
    uVar3 = 0;
  }
  return uVar3;
}
/* ===== Function 3538: vclProfilingDestroy @ 1828e1400 size=72 conv=unknown ===== */

undefined8 vclProfilingDestroy(longlong param_1)

{
                    /* 0x28e1400  13  vclProfilingDestroy */
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1828deea0(*(longlong *)(param_1 + 0x50),1);
    }
    FUN_1828de920(param_1 + 0x38);
    FUN_1828de9a0(param_1 + 0x20);
    thunk_FUN_183b37660(param_1,0x58);
  }
  return 0;
}
/* ===== Function 3539: vclProfilingGetProperties @ 1828e1450 size=52 conv=unknown ===== */

undefined8 vclProfilingGetProperties(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 local_res8 [32];
  
                    /* 0x28e1450  14  vclProfilingGetProperties */
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)FUN_1828fd500(param_1,local_res8);
    *param_2 = *puVar1;
    return 0;
  }
  return 0x78000004;
}
/* ===== Function 3540: vclQueryNetwork @ 1828e1490 size=37 conv=unknown ===== */

undefined8 vclQueryNetwork(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
                    /* 0x28e1490  15  vclQueryNetwork */
  if ((param_1 != 0) && (param_3 != (undefined8 *)0x0)) {
    if (param_2 == 0) {
      uVar1 = FUN_1828fd8e0(param_1,param_3);
      return uVar1;
    }
    uVar1 = FUN_1828fd990(param_1,param_2,*param_3);
    return uVar1;
  }
  return 0x78000004;
}
/* ===== Function 3541: vclQueryNetworkCreate @ 1828e14c0 size=608 conv=unknown ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int vclQueryNetworkCreate(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_208 [32];
  longlong local_1e8 [2];
  longlong local_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [384];
  ulonglong local_48;
  
                    /* 0x28e14c0  16  vclQueryNetworkCreate */
  local_48 = DAT_184a59c08 ^ (ulonglong)auStack_208;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  if (param_2 == 0) {
    local_1d0 = 0xf;
    local_1e8[0] = 0;
    local_1d8 = 0;
    FUN_1828df560(local_1e8,"Invalid IR buffer!",0x12);
    FUN_1828df8e0(uVar1,local_1e8);
    if (local_1d0 < 0x10) {
      return 0x78000004;
    }
    if (0xfff < local_1d0 + 1) {
      if (0x1f < (local_1e8[0] - *(longlong *)(local_1e8[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        FUN_183b988f4(*(longlong *)(local_1e8[0] + -8),local_1d0 + 0x28);
      }
    }
  }
  else {
    if (param_3 != 0) {
      FUN_1828e72f0(local_1c8,param_1);
      iVar2 = FUN_1828f2be0(local_1c8,param_2,param_3);
      if (iVar2 == 0) {
        puVar3 = (undefined8 *)FUN_183b88fc8();
        uVar4 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          uVar4 = FUN_1828fd8c0(puVar3,uVar1);
        }
        iVar2 = FUN_1828fc730(param_1,local_1c8,uVar4);
        if (iVar2 == 0) {
          *param_4 = uVar4;
          iVar2 = 0;
        }
      }
      else {
        local_1d0 = 0xf;
        local_1e8[0] = 0;
        local_1d8 = 0;
        FUN_1828df560(local_1e8,"Failed to prepare model! Incorrect format!",0x2a);
        FUN_1828df8e0(uVar1,local_1e8);
        if (0xf < local_1d0) {
          if (0xfff < local_1d0 + 1) {
            if (0x1f < (local_1e8[0] - *(longlong *)(local_1e8[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
              FUN_183b988f4(*(longlong *)(local_1e8[0] + -8),local_1d0 + 0x28);
            }
          }
          thunk_FUN_183b37660();
        }
      }
      FUN_1828dea20(local_1c8);
      return iVar2;
    }
    local_1d0 = 0xf;
    local_1e8[0] = param_3;
    local_1d8 = param_3;
    FUN_1828df560(local_1e8,"Invalid IR size!",0x10);
    FUN_1828df8e0(uVar1,local_1e8);
    if (local_1d0 < 0x10) {
      return 0x78000004;
    }
    if (0xfff < local_1d0 + 1) {
      if (0x1f < (local_1e8[0] - *(longlong *)(local_1e8[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        FUN_183b988f4(*(longlong *)(local_1e8[0] + -8),local_1d0 + 0x28);
      }
    }
  }
  thunk_FUN_183b37660();
  return 0x78000004;
}
/* ===== Function 3542: vclQueryNetworkDestroy @ 1828e1730 size=106 conv=unknown ===== */

undefined8 vclQueryNetworkDestroy(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
                    /* 0x28e1730  17  vclQueryNetworkDestroy */
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      lVar2 = lVar1;
      if (0xfff < (ulonglong)(param_1[2] - lVar1)) {
        lVar2 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_183b988f4(lVar1 - lVar2,(param_1[2] - lVar1) + 0x27);
        }
      }
      thunk_FUN_183b37660(lVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    thunk_FUN_183b37660(param_1,0x28);
  }
  return 0;
}
/* ===== Function 14880: CreatePluginEngineAUTO @ 182dd6480 size=466 conv=unknown ===== */

void CreatePluginEngineAUTO(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_148;
  longlong lStack_140;
  undefined1 local_130 [8];
  longlong local_128;
  undefined1 local_120 [8];
  longlong local_118;
  
                    /* 0x2dd6480  1  CreatePluginEngineAUTO */
  local_148 = 0;
  lStack_140 = 0;
  puVar7 = (undefined8 *)FUN_182dc1fe0(local_130);
  lVar6 = lStack_140;
  local_148 = *puVar7;
  lVar3 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  if (lStack_140 != 0) {
    LOCK();
    piVar1 = (int *)(lStack_140 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lStack_140 = lVar3;
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar6);
      LOCK();
      piVar1 = (int *)(lVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar3 = lStack_140;
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar6);
        lVar3 = lStack_140;
      }
    }
  }
  lStack_140 = lVar3;
  if (local_128 != 0) {
    LOCK();
    piVar1 = (int *)(local_128 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_128);
      LOCK();
      piVar1 = (int *)(local_128 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_128);
      }
    }
  }
  FUN_182cd4940(local_148,&DAT_184a4a368);
  puVar7 = (undefined8 *)FUN_182cd4a50(local_120,&local_148);
  uVar4 = *puVar7;
  uVar5 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  *param_1 = uVar4;
  lVar3 = param_1[1];
  param_1[1] = uVar5;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
      }
    }
  }
  if (local_118 != 0) {
    LOCK();
    piVar1 = (int *)(local_118 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_118);
      LOCK();
      piVar1 = (int *)(local_118 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_118);
      }
    }
  }
  lVar3 = lStack_140;
  if (lStack_140 != 0) {
    LOCK();
    piVar1 = (int *)(lStack_140 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(lStack_140);
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
      }
    }
  }
  return;
}
/* ===== Function 15378: CreatePluginEngineBATCH @ 182e0d740 size=466 conv=unknown ===== */

void CreatePluginEngineBATCH(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_148;
  longlong lStack_140;
  undefined1 local_130 [8];
  longlong local_128;
  undefined1 local_120 [8];
  longlong local_118;
  
                    /* 0x2e0d740  2  CreatePluginEngineBATCH */
  local_148 = 0;
  lStack_140 = 0;
  puVar7 = (undefined8 *)FUN_182e01550(local_130);
  lVar6 = lStack_140;
  local_148 = *puVar7;
  lVar3 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  if (lStack_140 != 0) {
    LOCK();
    piVar1 = (int *)(lStack_140 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lStack_140 = lVar3;
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar6);
      LOCK();
      piVar1 = (int *)(lVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar3 = lStack_140;
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar6);
        lVar3 = lStack_140;
      }
    }
  }
  lStack_140 = lVar3;
  if (local_128 != 0) {
    LOCK();
    piVar1 = (int *)(local_128 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_128);
      LOCK();
      piVar1 = (int *)(local_128 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_128);
      }
    }
  }
  FUN_182cd4940(local_148,&DAT_184a4a380);
  puVar7 = (undefined8 *)FUN_182cd4a50(local_120,&local_148);
  uVar4 = *puVar7;
  uVar5 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  *param_1 = uVar4;
  lVar3 = param_1[1];
  param_1[1] = uVar5;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
      }
    }
  }
  if (local_118 != 0) {
    LOCK();
    piVar1 = (int *)(local_118 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_118);
      LOCK();
      piVar1 = (int *)(local_118 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_118);
      }
    }
  }
  lVar3 = lStack_140;
  if (lStack_140 != 0) {
    LOCK();
    piVar1 = (int *)(lStack_140 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(lStack_140);
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar3);
      }
    }
  }
  return;
}
/* ===== Function 15669: CreatePluginEngineNPU @ 182e1ad20 size=612 conv=unknown ===== */

void CreatePluginEngineNPU(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_138;
  undefined8 *puStack_130;
  undefined1 local_120 [8];
  longlong local_118;
  
                    /* 0x2e1ad20  3  CreatePluginEngineNPU */
  local_138 = (undefined8 *)0x0;
  puStack_130 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_183b88fc8(0x1c0);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    *puVar7 = std::_Ref_count_obj2<vpux::Engine>::vftable;
    FUN_182e117a0(puVar7 + 2);
  }
  puVar1 = puVar7 + 2;
  if ((puVar1 != (undefined8 *)0x0) && ((puVar7[4] == 0 || (*(int *)(puVar7[4] + 8) == 0)))) {
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    puVar8 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)((longlong)puVar7 + 0xc) = *(int *)((longlong)puVar7 + 0xc) + 1;
      UNLOCK();
      puVar8 = puVar1;
      puVar9 = puVar7;
    }
    puVar7[3] = puVar8;
    lVar4 = puVar7[4];
    puVar7[4] = puVar9;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)();
      }
    }
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar7 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(puVar7);
        LOCK();
        piVar2 = (int *)((longlong)puVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)PTR__guard_dispatch_icall_1843b3688)(puVar7);
        }
      }
    }
  }
  puVar8 = puStack_130;
  local_138 = puVar1;
  if (puStack_130 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)puStack_130 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puStack_130 = puVar7;
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(puVar8);
      LOCK();
      piVar2 = (int *)((longlong)puVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar7 = puStack_130;
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(puVar8);
        puVar7 = puStack_130;
      }
    }
  }
  puStack_130 = puVar7;
  FUN_182cd4940(local_138,&DAT_184a4a398);
  puVar7 = (undefined8 *)FUN_182cd4a50(local_120,&local_138);
  uVar5 = *puVar7;
  uVar6 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  *param_1 = uVar5;
  lVar4 = param_1[1];
  param_1[1] = uVar6;
  if (lVar4 != 0) {
    LOCK();
    piVar2 = (int *)(lVar4 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar4);
      LOCK();
      piVar2 = (int *)(lVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(lVar4);
      }
    }
  }
  if (local_118 != 0) {
    LOCK();
    piVar2 = (int *)(local_118 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_118);
      LOCK();
      piVar2 = (int *)(local_118 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(local_118);
      }
    }
  }
  puVar7 = puStack_130;
  if (puStack_130 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puStack_130 + 1);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)PTR__guard_dispatch_icall_1843b3688)(puStack_130);
      LOCK();
      piVar2 = (int *)((longlong)puVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)(puVar7);
      }
    }
  }
  return;
}
/* ===== Function 44416: entry @ 183b89bb0 size=61 conv=unknown ===== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}
/* ===== Function 44428: tls_callback_0 @ 183b8a110 size=102 conv=unknown ===== */

void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 0x210) != '\x01')) {
    *(undefined1 *)(lVar1 + 0x210) = 1;
    for (ppuVar2 = &PTR_FUN_1843ba390; ppuVar2 != (undefined **)&DAT_1843ba398;
        ppuVar2 = ppuVar2 + 1) {
      if (*ppuVar2 != (undefined *)0x0) {
        (*(code *)PTR__guard_dispatch_icall_1843b3688)();
      }
    }
  }
  return;
}
/* ===== Function 44430: tls_callback_1 @ 183b8a190 size=164 conv=unknown ===== */

void tls_callback_1(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar3 = *(int **)(lVar1 + 0x220);
    while (piVar3 != (int *)0x0) {
      iVar4 = *piVar3 + -1;
      if (-1 < iVar4) {
        plVar5 = (longlong *)(piVar3 + ((longlong)iVar4 + 2) * 2);
        do {
          if (*plVar5 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1843b3688)();
          }
          plVar5 = plVar5 + -1;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      piVar2 = *(int **)(piVar3 + 2);
      if (piVar2 != (int *)0x0) {
        FUN_183b9896c(piVar3);
      }
      *(int **)(lVar1 + 0x220) = piVar2;
      piVar3 = piVar2;
    }
  }
  return;
}
