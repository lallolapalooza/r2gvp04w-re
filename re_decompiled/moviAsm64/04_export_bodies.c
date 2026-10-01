/* ===== Function 55: freeResults @ 180020260 size=5 conv=unknown ===== */

void freeResults(void)

{
  code *pcVar1;
  int iVar2;
  
                    /* 0x20260  1  freeResults */
  iVar2 = FUN_180615fe4(&DAT_180705310);
  if (iVar2 == 0) {
    FUN_180087890(&DAT_180705300,DAT_180705300);
    *(longlong *)DAT_180705300 = DAT_180705300;
    *(longlong *)(DAT_180705300 + 8) = DAT_180705300;
    DAT_180705308 = 0;
    _Mtx_unlock(&DAT_180705310);
    return;
  }
  FUN_18061613c(iVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
/* ===== Function 56: process @ 180020270 size=65 conv=unknown ===== */

void process(void)

{
                    /* 0x20270  2  process */
  FUN_18002c8e0();
  return;
}
/* ===== Function 2288: entry @ 180617578 size=61 conv=unknown ===== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}
/* ===== Function 2312: tls_callback_0 @ 180617b80 size=102 conv=unknown ===== */

void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 300) != '\x01')) {
    *(undefined1 *)(lVar1 + 300) = 1;
    for (ppuVar2 = &PTR_FUN_18068b598; ppuVar2 != (undefined **)&DAT_18068b5a0;
        ppuVar2 = ppuVar2 + 1) {
      if (*ppuVar2 != (undefined *)0x0) {
        (*(code *)PTR__guard_dispatch_icall_18068b348)();
      }
    }
  }
  return;
}
/* ===== Function 2314: tls_callback_1 @ 180617bf8 size=165 conv=unknown ===== */

void tls_callback_1(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar5 = *(int **)(lVar1 + 0x130);
    if (*(int **)(lVar1 + 0x130) != (int *)0x0) {
      while( true ) {
        iVar3 = *piVar5 + -1;
        if (-1 < iVar3) {
          plVar4 = (longlong *)(piVar5 + ((longlong)iVar3 + 2) * 2);
          do {
            if (*plVar4 != 0) {
              (*(code *)PTR__guard_dispatch_icall_18068b348)();
            }
            plVar4 = plVar4 + -1;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        piVar2 = *(int **)(piVar5 + 2);
        if (piVar2 == (int *)0x0) break;
        FUN_180620040(piVar5);
        *(int **)(lVar1 + 0x130) = piVar2;
        piVar5 = piVar2;
      }
      *(undefined8 *)(lVar1 + 0x130) = 0;
    }
  }
  return;
}
/* ===== Function 2533: process @ 180620864 size=534 conv=__thiscall ===== */

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
LAB_180620885:
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_18061e758();
  }
  else {
    bVar3 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(this + 0x468));
    if (bVar3) {
      if (*(longlong *)(this + 0x18) == 0) {
        puVar4 = __doserrno();
        *puVar4 = 0x16;
        FUN_18061e758();
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
LAB_180620a4a:
        oVar2 = **(output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                   **)(this + 0x18);
        this[0x41] = oVar2;
        if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                      )0x0) {
          *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
          if (*(int *)(this + 0x28) < 0) goto LAB_180620a5f;
          if ((byte)((char)this[0x41] - 0x20U) < 0x5b) {
            uVar5 = (byte)"InitializeCriticalSectionEx"[(char)this[0x41]] & 0xf;
          }
          else {
            uVar5 = 0;
          }
          bVar1 = (&DAT_1806a8bd0)[*(int *)(this + 0x2c) + uVar5 * 8];
          uVar5 = (uint)(bVar1 >> 4);
          *(uint *)(this + 0x2c) = uVar5;
          if (uVar5 == 8) goto LAB_180620885;
          if (bVar1 >> 4 == 0) {
            bVar3 = state_case_normal(this);
LAB_180620a42:
            if (bVar3 == false) {
              return -1;
            }
            goto LAB_180620a4a;
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
LAB_1806209e8:
                  bVar3 = true;
                  goto LAB_180620a42;
                }
                poVar7 = this + 0x34;
              }
              else {
                if (uVar5 == 4) {
                  *(undefined4 *)(this + 0x38) = 0;
                  goto LAB_180620a4a;
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
                  goto LAB_180620a42;
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
                  goto LAB_1806209e8;
                }
                poVar7 = this + 0x38;
              }
              bVar3 = output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      ::parse_int_from_format_string
                                ((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                                  *)this,(int *)poVar7);
              goto LAB_180620a42;
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
          goto LAB_180620a4a;
        }
        *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
LAB_180620a5f:
        *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
        iVar6 = *(int *)(this + 0x470);
      } while( true );
    }
  }
  return -1;
}
/* ===== Function 2534: process @ 180620a7c size=536 conv=__thiscall ===== */

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
LAB_180620c80:
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_18061e758();
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
LAB_180620c35:
        oVar2 = **(output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                   **)(this + 0x18);
        this[0x41] = oVar2;
        if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      )0x0) {
          *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
          if (*(int *)(this + 0x28) < 0) goto LAB_180620c4a;
          uVar5 = 0;
          if ((byte)((char)this[0x41] - 0x20U) < 0x5b) {
            uVar5 = (byte)(&DAT_1806a8c10)[(char)this[0x41]] & 0xf;
          }
          bVar1 = (&DAT_1806a8c30)[*(int *)(this + 0x2c) + uVar5 * 9];
          uVar5 = (uint)(bVar1 >> 4);
          *(uint *)(this + 0x2c) = uVar5;
          if (uVar5 == 8) goto LAB_180620c80;
          if (bVar1 >> 4 == 0) {
            bVar3 = state_case_normal(this);
LAB_180620c31:
            if (bVar3 == false) {
              return -1;
            }
            goto LAB_180620c35;
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
LAB_180620bdc:
                  bVar3 = true;
                  goto LAB_180620c31;
                }
                poVar7 = this + 0x34;
              }
              else {
                if (uVar5 == 4) {
                  *(undefined4 *)(this + 0x38) = 0;
                  goto LAB_180620c35;
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
                  goto LAB_180620c31;
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
                  goto LAB_180620bdc;
                }
                poVar7 = this + 0x38;
              }
              bVar3 = parse_int_from_format_string(this,(int *)poVar7);
              goto LAB_180620c31;
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
          goto LAB_180620c35;
        }
        *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 1;
LAB_180620c4a:
        if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x2c) != 7)) goto LAB_180620c80;
        *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
        iVar6 = *(int *)(this + 0x470);
      } while( true );
    }
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_18061e758();
  }
  return -1;
}
/* ===== Function 2631: process @ 18062bd9c size=233 conv=__thiscall ===== */

/* Library Function - Single Match
    public: int __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process(void) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(ulonglong *)(this + 0x18) == 0) ||
     (*(ulonglong *)(this + 0x10) < *(ulonglong *)(this + 0x18))) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18061e758();
    iVar6 = -1;
  }
  else {
    if (*(longlong *)(this + 0x28) == 0) {
      puVar3 = __doserrno();
      iVar6 = -1;
      *puVar3 = 0x16;
    }
    else {
      do {
        bVar2 = format_string_parser<char>::advance((format_string_parser<char> *)(this + 0x20));
        if (!bVar2) break;
        bVar2 = process_state(this);
      } while (bVar2);
      iVar6 = *(int *)(this + 0x88);
      if ((*(longlong *)(this + 0x88) == 0) && (*(int *)(this + 0x34) != 1)) {
        pbVar4 = *(byte **)(this + 0x18);
        if (pbVar4 == *(byte **)(this + 0x10)) {
          iVar6 = -1;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)*pbVar4;
          pbVar4 = pbVar4 + 1;
          *(byte **)(this + 0x18) = pbVar4;
        }
        if ((pbVar4 != *(byte **)(this + 8)) &&
           ((pbVar4 != *(byte **)(this + 0x10) || (uVar5 != 0xffffffff)))) {
          *(byte **)(this + 0x18) = pbVar4 + -1;
        }
      }
      if (((byte)*this & 1) == 0) {
        return iVar6;
      }
      uVar1 = *(ulong *)(this + 0x30);
      if (uVar1 == 0) {
        return iVar6;
      }
      puVar3 = __doserrno();
      *puVar3 = uVar1;
    }
    FUN_18061e758();
  }
  return iVar6;
}
