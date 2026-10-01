/* ===== Function 497: OpenCompiler12 @ 18001c8a0 size=86 conv=unknown ===== */

void OpenCompiler12(longlong param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
                    /* 0x1c8a0  1  OpenCompiler12 */
  puVar1 = PTR_FUN_1806647d8;
  if (param_1 != 0) {
    if ((undefined8 *)(param_1 + 0x18) == (undefined8 *)0x0) {
      puVar2 = (undefined4 *)FUN_180522560();
      *puVar2 = 0x16;
      FUN_180522380();
      return;
    }
    *(undefined8 *)(param_1 + 0x18) = PTR_FUN_1806647d0;
    *(undefined **)(param_1 + 0x20) = puVar1;
    puVar1 = PTR_FUN_1806647e8;
    *(undefined **)(param_1 + 0x28) = PTR_FUN_1806647e0;
    *(undefined **)(param_1 + 0x30) = puVar1;
    puVar1 = PTR__guard_check_icall_1806647f8;
    *(undefined **)(param_1 + 0x38) = PTR_FUN_1806647f0;
    *(undefined **)(param_1 + 0x40) = puVar1;
    puVar1 = PTR_thunk_FUN_180020520_180664808;
    *(undefined **)(param_1 + 0x48) = PTR_thunk_FUN_180020020_180664800;
    *(undefined **)(param_1 + 0x50) = puVar1;
  }
  return;
}
/* ===== Function 11284: entry @ 18051be80 size=61 conv=unknown ===== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}
