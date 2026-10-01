/* ===== Function 1330: freeResults @ 180061a90 size=5 conv=unknown ===== */

void freeResults(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
                    /* 0x61a90  1  freeResults */
  iVar4 = FUN_18160cdbc(&DAT_181996750);
  puVar3 = DAT_181996740;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18160d034(iVar4);
  }
  *(undefined8 *)DAT_181996740[1] = 0;
  puVar3 = (undefined8 *)*puVar3;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      *DAT_181996740 = DAT_181996740;
      DAT_181996740[1] = DAT_181996740;
      DAT_181996748 = 0;
      _Mtx_unlock(&DAT_181996750);
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
          FUN_181615a48(lVar1 - lVar5,(puVar3[4] - lVar1) + 0x27);
        }
      }
      thunk_FUN_181615ac0(lVar5);
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
    }
    thunk_FUN_181615ac0(puVar3,0x28);
    puVar3 = puVar2;
  } while( true );
}
/* ===== Function 1331: process @ 180061aa0 size=676 conv=unknown ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong process(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined1 local_1e8 [8];
  undefined4 local_1e0 [2];
  uint local_1d8 [2];
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  uint **ppuStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  code *local_188;
  uint **ppuStack_180;
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined1 *local_158;
  uint **ppuStack_150;
  undefined1 local_148 [24];
  uint *local_130;
  undefined4 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined1 local_f8 [152];
  ulonglong local_60;
  
                    /* 0x61aa0  2  process */
  local_60 = DAT_18198b488 ^ (ulonglong)auStack_228;
  local_1e0[0] = param_1;
  local_1c0 = param_2;
  FUN_180081d00(local_f8,local_1e0,&local_1c0);
  FUN_18008e0d0(1);
  iVar3 = FUN_180060d40();
  if (iVar3 == 0) {
    uVar5 = FUN_180077500();
    uVar6 = FUN_180078070();
    local_1f8 = 1;
    local_208 = param_3;
    local_200 = param_4;
    uVar4 = FUN_180061300(local_1e0[0],local_1c0,uVar6,uVar5);
    FUN_180081df0(local_f8);
  }
  else {
    bVar1 = false;
    local_1d0 = local_1d0 & 0xffffff00;
    FUN_180080770();
    iVar3 = FUN_180060d40();
    uVar4 = local_1d0;
    if (iVar3 != 0) {
      ppuStack_1a0 = &local_130;
      do {
        DAT_181995470 = iVar3 != 1;
        local_1a8 = param_4;
        local_190 = param_3;
        uVar5 = FUN_180077500();
        uVar6 = FUN_180078070();
        local_198 = local_1c0;
        local_1c8[0] = local_1e0[0];
        local_1d8[0] = 0;
        FUN_180080560(local_178);
        local_130 = local_1d8;
        local_128 = local_1c8;
        local_120 = &local_198;
        local_188 = FUN_1800604b0;
        local_108 = &local_190;
        local_100 = &local_1a8;
        ppuStack_180 = &local_130;
        local_118 = uVar6;
        local_110 = uVar5;
        cVar2 = FUN_1800809c0(local_178,&local_188);
        if (cVar2 == '\0') {
          local_1b8 = local_168;
          uStack_1b4 = uStack_1b4 & 0xffffff00;
          FUN_180080590(local_178);
          uVar7 = CONCAT44(uStack_1b4,local_1b8);
        }
        else {
          FUN_180080590(local_178);
          FUN_180080560(local_148);
          local_1e8[0] = 0;
          local_158 = &LAB_180060500;
          ppuStack_180 = (uint **)local_1e8;
          local_188 = (code *)&LAB_180060500;
          ppuStack_150 = ppuStack_180;
          cVar2 = FUN_1800809c0(local_148,&local_188);
          if (cVar2 == '\0') {
            local_1b0 = local_1d8[0];
            uStack_1ac = uStack_1ac & 0xffffff00;
            FUN_180080590(local_148);
            uVar7 = CONCAT44(uStack_1ac,local_1b0);
          }
          else {
            local_1d0 = local_1d8[0];
            uStack_1cc = CONCAT31(uStack_1cc._1_3_,1);
            FUN_180080590(local_148);
            uVar7 = CONCAT44(uStack_1cc,local_1d0);
          }
        }
        if ((char)(uVar7 >> 0x20) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1800e1c30(uVar7 & 0xffffffff);
        }
        if (bVar1) {
          if ((uint)uVar7 != uVar4) {
            FUN_180081df0(local_f8);
            return uVar7 & 0xffffffff;
          }
        }
        else {
          bVar1 = true;
          uVar4 = (uint)uVar7;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_180081df0(local_f8);
  }
  return (ulonglong)uVar4;
}
/* ===== Function 41111: entry @ 18160f6e0 size=61 conv=unknown ===== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}
/* ===== Function 41312: process @ 18161a25c size=534 conv=__thiscall ===== */

/* Library Function - Single Match
    public: int __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::process(void) __ptr64
   
   Library: Visual Studio 2017 Release */

int __thiscall
__crt_stdio_output::
output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
::process(output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
          *this)

{
  byte bVar1;
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  oVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  *poVar7;
  
  if (*(_iobuf **)(this + 0x468) == (_iobuf *)0x0) {
LAB_18161a27d:
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_181615a28();
  }
  else {
    bVar3 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(this + 0x468));
    if (bVar3) {
      if (*(longlong *)(this + 0x18) == 0) {
        puVar4 = __doserrno();
        *puVar4 = 0x16;
        FUN_181615a28();
        return -1;
      }
      *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
      iVar6 = *(int *)(this + 0x470);
      do {
        if (iVar6 == 2) {
          return *(int *)(this + 0x28);
        }
        *(undefined4 *)(this + 0x50) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
LAB_18161a442:
        oVar2 = **(output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                   **)(this + 0x18);
        this[0x41] = oVar2;
        if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                      )0x0) {
          *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
          if (*(int *)(this + 0x28) < 0) goto LAB_18161a457;
          if ((byte)((char)this[0x41] - 0x20U) < 0x5b) {
            uVar5 = (byte)(&DAT_18185c7b0)[(char)this[0x41]] & 0xf;
          }
          else {
            uVar5 = 0;
          }
          bVar1 = (&DAT_18185c7d0)[*(int *)(this + 0x2c) + uVar5 * 8];
          uVar5 = (uint)(bVar1 >> 4);
          *(uint *)(this + 0x2c) = uVar5;
          if (uVar5 == 8) goto LAB_18161a27d;
          if (bVar1 >> 4 == 0) {
            bVar3 = state_case_normal(this);
LAB_18161a43a:
            if (bVar3 == false) {
              return -1;
            }
            goto LAB_18161a442;
          }
          if (uVar5 == 1) {
            *(undefined4 *)(this + 0x34) = 0;
            *(undefined4 *)(this + 0x30) = 0;
            *(undefined4 *)(this + 0x3c) = 0;
            this[0x40] = (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                          )0x0;
            *(undefined4 *)(this + 0x38) = 0xffffffff;
            this[0x54] = (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                          )0x0;
          }
          else {
            if (uVar5 != 2) {
              if (uVar5 == 3) {
                if (this[0x41] ==
                    (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                     )0x2a) {
                  *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
                  iVar6 = *(int *)(*(longlong *)(this + 0x20) + -8);
                  *(int *)(this + 0x34) = iVar6;
                  if (iVar6 < 0) {
                    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
                    *(int *)(this + 0x34) = -iVar6;
                  }
LAB_18161a3e0:
                  bVar3 = true;
                  goto LAB_18161a43a;
                }
                poVar7 = this + 0x34;
              }
              else {
                if (uVar5 == 4) {
                  *(undefined4 *)(this + 0x38) = 0;
                  goto LAB_18161a442;
                }
                if (uVar5 != 5) {
                  if (uVar5 == 6) {
                    bVar3 = state_case_size(this);
                  }
                  else {
                    if (uVar5 != 7) {
                      return -1;
                    }
                    bVar3 = state_case_type(this);
                  }
                  goto LAB_18161a43a;
                }
                if (this[0x41] ==
                    (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                     )0x2a) {
                  *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
                  iVar6 = *(int *)(*(longlong *)(this + 0x20) + -8);
                  if (iVar6 < 0) {
                    iVar6 = -1;
                  }
                  *(int *)(this + 0x38) = iVar6;
                  goto LAB_18161a3e0;
                }
                poVar7 = this + 0x38;
              }
              bVar3 = output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      ::parse_int_from_format_string
                                ((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                                  *)this,(int *)poVar7);
              goto LAB_18161a43a;
            }
            oVar2 = this[0x41];
            if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                          )0x20) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                               )0x23) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x20;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                               )0x2b) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                               )0x2d) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                               )0x30) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
            }
          }
          goto LAB_18161a442;
        }
        *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
LAB_18161a457:
        *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
        iVar6 = *(int *)(this + 0x470);
      } while( true );
    }
  }
  return -1;
}
/* ===== Function 41313: process @ 18161a474 size=536 conv=__thiscall ===== */

/* Library Function - Single Match
    public: int __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::process(void) __ptr64
   
   Library: Visual Studio 2017 Release */

int __thiscall
__crt_stdio_output::
output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
::process(output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
          *this)

{
  byte bVar1;
  output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
  oVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
  *poVar7;
  
  if (*(longlong *)(this + 0x468) == 0) {
LAB_18161a678:
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_181615a28();
  }
  else {
    if (*(longlong *)(this + 0x18) != 0) {
      *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
      iVar6 = *(int *)(this + 0x470);
      do {
        if (iVar6 == 2) {
          return *(int *)(this + 0x28);
        }
        *(undefined4 *)(this + 0x50) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
LAB_18161a62d:
        oVar2 = **(output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                   **)(this + 0x18);
        this[0x41] = oVar2;
        if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      )0x0) {
          *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
          if (*(int *)(this + 0x28) < 0) goto LAB_18161a642;
          uVar5 = 0;
          if ((byte)((char)this[0x41] - 0x20U) < 0x5b) {
            uVar5 = (byte)(&DAT_18185c810)[(char)this[0x41]] & 0xf;
          }
          bVar1 = (&DAT_18185c830)[*(int *)(this + 0x2c) + uVar5 * 9];
          uVar5 = (uint)(bVar1 >> 4);
          *(uint *)(this + 0x2c) = uVar5;
          if (uVar5 == 8) goto LAB_18161a678;
          if (bVar1 >> 4 == 0) {
            bVar3 = state_case_normal(this);
LAB_18161a629:
            if (bVar3 == false) {
              return -1;
            }
            goto LAB_18161a62d;
          }
          if (uVar5 == 1) {
            *(undefined8 *)(this + 0x30) = 0;
            this[0x40] = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                          )0x0;
            *(undefined4 *)(this + 0x38) = 0xffffffff;
            *(undefined4 *)(this + 0x3c) = 0;
            this[0x54] = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                          )0x0;
          }
          else {
            if (uVar5 != 2) {
              if (uVar5 == 3) {
                if (this[0x41] ==
                    (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                     )0x2a) {
                  *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
                  iVar6 = *(int *)(*(longlong *)(this + 0x20) + -8);
                  *(int *)(this + 0x34) = iVar6;
                  if (iVar6 < 0) {
                    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
                    *(int *)(this + 0x34) = -iVar6;
                  }
LAB_18161a5d4:
                  bVar3 = true;
                  goto LAB_18161a629;
                }
                poVar7 = this + 0x34;
              }
              else {
                if (uVar5 == 4) {
                  *(undefined4 *)(this + 0x38) = 0;
                  goto LAB_18161a62d;
                }
                if (uVar5 != 5) {
                  if (uVar5 == 6) {
                    bVar3 = state_case_size(this);
                  }
                  else {
                    if (uVar5 != 7) {
                      return -1;
                    }
                    bVar3 = state_case_type(this);
                  }
                  goto LAB_18161a629;
                }
                if (this[0x41] ==
                    (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                     )0x2a) {
                  *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
                  iVar6 = *(int *)(*(longlong *)(this + 0x20) + -8);
                  if (iVar6 < 0) {
                    iVar6 = -1;
                  }
                  *(int *)(this + 0x38) = iVar6;
                  goto LAB_18161a5d4;
                }
                poVar7 = this + 0x38;
              }
              bVar3 = parse_int_from_format_string(this,(int *)poVar7);
              goto LAB_18161a629;
            }
            oVar2 = this[0x41];
            if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                          )0x20) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                               )0x23) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x20;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                               )0x2b) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                               )0x2d) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                               )0x30) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
            }
          }
          goto LAB_18161a62d;
        }
        *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
LAB_18161a642:
        if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x2c) != 7)) goto LAB_18161a678;
        *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
        iVar6 = *(int *)(this + 0x470);
      } while( true );
    }
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_181615a28();
  }
  return -1;
}
/* ===== Function 41314: process @ 18161a68c size=522 conv=__thiscall ===== */

/* Library Function - Single Match
    public: int __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> >
   >::process(void) __ptr64
   
   Library: Visual Studio 2017 Release */

int __thiscall
__crt_stdio_output::
output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
::process(output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
          *this)

{
  byte bVar1;
  output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
  oVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
  *poVar7;
  
  if (*(longlong *)(this + 0x468) == 0) {
LAB_18161a882:
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_181615a28();
  }
  else {
    if (*(longlong *)(this + 0x18) != 0) {
      *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
      iVar6 = *(int *)(this + 0x470);
      do {
        if (iVar6 == 2) {
          return *(int *)(this + 0x28);
        }
        *(undefined4 *)(this + 0x50) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
LAB_18161a847:
        oVar2 = **(output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                   **)(this + 0x18);
        this[0x41] = oVar2;
        if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      )0x0) {
          *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
          if (*(int *)(this + 0x28) < 0) goto LAB_18161a85c;
          if ((byte)((char)this[0x41] - 0x20U) < 0x5b) {
            uVar5 = (byte)(&DAT_18185c7b0)[(char)this[0x41]] & 0xf;
          }
          else {
            uVar5 = 0;
          }
          bVar1 = (&DAT_18185c7d0)[*(int *)(this + 0x2c) + uVar5 * 8];
          uVar5 = (uint)(bVar1 >> 4);
          *(uint *)(this + 0x2c) = uVar5;
          if (uVar5 == 8) goto LAB_18161a882;
          if (bVar1 >> 4 == 0) {
            bVar3 = output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                    ::state_case_normal((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                                         *)this);
LAB_18161a843:
            if (bVar3 == false) {
              return -1;
            }
            goto LAB_18161a847;
          }
          if (uVar5 == 1) {
            *(undefined4 *)(this + 0x34) = 0;
            *(undefined4 *)(this + 0x30) = 0;
            *(undefined4 *)(this + 0x3c) = 0;
            this[0x40] = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                          )0x0;
            *(undefined4 *)(this + 0x38) = 0xffffffff;
            this[0x54] = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                          )0x0;
          }
          else {
            if (uVar5 != 2) {
              if (uVar5 == 3) {
                if (this[0x41] ==
                    (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                     )0x2a) {
                  *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
                  iVar6 = *(int *)(*(longlong *)(this + 0x20) + -8);
                  *(int *)(this + 0x34) = iVar6;
                  if (iVar6 < 0) {
                    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
                    *(int *)(this + 0x34) = -iVar6;
                  }
LAB_18161a7e9:
                  bVar3 = true;
                  goto LAB_18161a843;
                }
                poVar7 = this + 0x34;
              }
              else {
                if (uVar5 == 4) {
                  *(undefined4 *)(this + 0x38) = 0;
                  goto LAB_18161a847;
                }
                if (uVar5 != 5) {
                  if (uVar5 == 6) {
                    bVar3 = output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                            ::state_case_size((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                                               *)this);
                  }
                  else {
                    if (uVar5 != 7) {
                      return -1;
                    }
                    bVar3 = output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                            ::state_case_type((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                                               *)this);
                  }
                  goto LAB_18161a843;
                }
                if (this[0x41] ==
                    (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                     )0x2a) {
                  *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
                  iVar6 = *(int *)(*(longlong *)(this + 0x20) + -8);
                  if (*(int *)(*(longlong *)(this + 0x20) + -8) < 0) {
                    iVar6 = -1;
                  }
                  *(int *)(this + 0x38) = iVar6;
                  goto LAB_18161a7e9;
                }
                poVar7 = this + 0x38;
              }
              bVar3 = output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      ::parse_int_from_format_string
                                ((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                                  *)this,(int *)poVar7);
              goto LAB_18161a843;
            }
            oVar2 = this[0x41];
            if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                          )0x20) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                               )0x23) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x20;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                               )0x2b) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                               )0x2d) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
            }
            else if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                               )0x30) {
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
            }
          }
          goto LAB_18161a847;
        }
        *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
LAB_18161a85c:
        *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
        iVar6 = *(int *)(this + 0x470);
      } while( true );
    }
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_181615a28();
  }
  return -1;
}
