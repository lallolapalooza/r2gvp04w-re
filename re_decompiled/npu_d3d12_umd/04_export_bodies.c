/* ==== EXPORT OpenAdapter12 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong OpenAdapter12(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
                    /* 0xccc30  1  OpenAdapter12 */
  local_18 = DAT_180207040 ^ (ulonglong)auStack_48;
  puVar5 = (undefined *)param_1[1];
  uVar4 = 0;
  if (puVar5 == (undefined *)0x0) {
    _DAT_18020b934 = 0x698;
    puVar5 = &DAT_18020b930;
    local_28 = &DAT_18020b930;
    local_20 = 0x2ec;
    uVar3 = (*(code *)PTR__guard_dispatch_icall_1801943f8)(*param_1,&local_28);
    param_1[1] = &DAT_18020b930;
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  iVar1 = *(int *)(puVar5 + 8);
  if (iVar1 == 2) {
    FUN_1800d1340(param_1);
  }
  else if (iVar1 == 3) {
    FUN_1800d1760(param_1);
  }
  else {
    if ((iVar1 != 4) && (iVar1 != 5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    FUN_1800d18b0(param_1);
  }
  return uVar4;
}



/* ==== EXPORT entry ==== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}



