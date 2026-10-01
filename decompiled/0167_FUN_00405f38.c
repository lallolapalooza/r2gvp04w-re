/*
 * Function: FUN_00405f38
 * Address: 00405f38
 * Size: 266 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00405f38(void)

{
  int iVar1;
  ULONG_PTR UVar2;
  LONG LVar3;
  PEXCEPTION_RECORD pEVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  PVOID pvVar7;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  PEXCEPTION_RECORD in_stack_00000004;
  PCONTEXT in_stack_00000008;
  undefined4 uStackY_34;
  PCONTEXT pCStackY_30;
  undefined4 uStackY_2c;
  undefined4 uStackY_24;
  PVOID pvStackY_20;
  ULONG_PTR UStackY_1c;
  undefined4 uStackY_14;
  
  if ((in_stack_00000004->ExceptionFlags & 6) != 0) {
    return 1;
  }
  UVar2 = in_stack_00000004->ExceptionInformation[1];
  pvVar7 = (PVOID)in_stack_00000004->ExceptionInformation[0];
  pEVar4 = in_stack_00000004;
  if (in_stack_00000004->ExceptionCode != 0xeedfade) {
    FUN_00404c40();
    if (DAT_00429018 == (code *)0x0) {
      return 1;
    }
    UVar2 = (*DAT_00429018)();
    if (UVar2 == 0) {
      return 1;
    }
    if (((in_stack_00000004->ExceptionCode != 0xeefface) &&
        (UVar2 = FUN_00405e50(UVar2), DAT_00427025 != 0)) && (DAT_00427024 == '\0')) {
      LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004);
      if (LVar3 == 0) {
        return 1;
      }
      pvVar7 = in_stack_00000004->ExceptionAddress;
      pEVar4 = in_stack_00000004;
      goto LAB_00405fec;
    }
    pvVar7 = in_stack_00000004->ExceptionAddress;
    pEVar4 = in_stack_00000004;
  }
  if ((1 < DAT_00427025) && (DAT_00427024 == '\0')) {
    uStackY_14 = 0x405fe4;
    LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004);
    if (LVar3 == 0) {
      return 1;
    }
  }
LAB_00405fec:
  pEVar4->ExceptionFlags = pEVar4->ExceptionFlags | 2;
  uStackY_14 = *in_FS_OFFSET;
  uStackY_24 = 0;
  uStackY_2c = 0x406010;
  pCStackY_30 = in_stack_00000008;
  uStackY_34 = 0x406010;
  pvStackY_20 = pvVar7;
  UStackY_1c = UVar2;
  (*DAT_00429020)();
  uStackY_34 = 0x406019;
  puVar5 = FUN_0040ae54();
  uStackY_34 = *puVar5;
  *puVar5 = &uStackY_34;
  iVar1 = *(int *)(unaff_ESI + 4);
  *(undefined1 **)(unaff_ESI + 4) = &LAB_0040603c;
  FUN_00405ea0();
                    /* WARNING: Could not recover jumptable at 0x0040603a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(iVar1 + 5))();
  return uVar6;
}


