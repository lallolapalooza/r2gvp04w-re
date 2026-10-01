/*
 * Function: FUN_00418030
 * Address: 00418030
 * Size: 632 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418030(LCID param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint Calendar;
  LCID LVar4;
  undefined4 uVar5;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  uint uVar8;
  CALTYPE CVar9;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  ushort *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = (ushort *)0x0;
  puStack_28 = &LAB_004182c5;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar2 = &stack0xfffffffc;
  local_8 = param_2;
  if (*(int *)PTR_DAT_00428504 == 0) {
    puStack_30 = (undefined1 *)0x418062;
    FUN_004045f4(0x1a);
    puVar2 = puStack_24;
  }
  puStack_24 = puVar2;
  puStack_30 = (undefined1 *)0x41806c;
  puVar3 = FUN_00405aa4(DAT_0042c718);
  puStack_30 = (undefined1 *)0x418074;
  FUN_00405820(puVar3,0xffffffff);
  puStack_34 = &LAB_004182a8;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  _DAT_0042c710 = 0;
  puStack_30 = &stack0xfffffffc;
  FUN_004087a4((int *)&DAT_0042c714,(int)PTR_DAT_00417e64,1);
  FUN_004175b0(param_1,0x100b,(longlong *)&DAT_004182e0,(int *)&local_c);
  Calendar = FUN_00415aec(local_c,1,extraout_ECX);
  if (Calendar - 3 < 3) {
    CVar9 = 4;
    uVar8 = Calendar;
    LVar4 = GetThreadLocale();
    EnumCalendarInfoW((CALINFO_ENUMPROCW)&LAB_00417f08,LVar4,uVar8,CVar9);
    iVar7 = 0;
    if (DAT_0042c714 != (int *)0x0) {
      iVar7 = DAT_0042c714[-1];
    }
    if (-1 < iVar7 + -1) {
      iVar6 = 0;
      do {
        DAT_0042c714[iVar6 * 6 + 1] = -1;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    CVar9 = 3;
    LVar4 = GetThreadLocale();
    EnumCalendarInfoW((CALINFO_ENUMPROCW)&LAB_00417fa0,LVar4,Calendar,CVar9);
  }
  else if (Calendar - 1 < 2) {
    _DAT_0042c710 = 1;
    FUN_004087a4((int *)&DAT_0042c714,(int)PTR_DAT_00417e64,1);
    FUN_00406dfc(DAT_0042c714,(longlong *)L"B.C.");
    DAT_0042c714[1] = 0;
    piVar1 = DAT_0042c714;
    DAT_0042c714[2] = -0x400000;
    piVar1[3] = -0x3e200001;
    FUN_00417530(1,1,1);
    uVar5 = FUN_00404804();
    *(double *)(DAT_0042c714 + 4) = (double)CONCAT44(extraout_EDX,uVar5);
    CVar9 = 4;
    uVar8 = Calendar;
    LVar4 = GetThreadLocale();
    EnumCalendarInfoW((CALINFO_ENUMPROCW)&LAB_00417f08,LVar4,uVar8,CVar9);
    iVar7 = 0;
    if (DAT_0042c714 != (int *)0x0) {
      iVar7 = DAT_0042c714[-1];
    }
    iVar7 = iVar7 + -1;
    if (0 < iVar7) {
      iVar6 = 1;
      do {
        DAT_0042c714[iVar6 * 6 + 1] = -1;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    CVar9 = 3;
    LVar4 = GetThreadLocale();
    EnumCalendarInfoW((CALINFO_ENUMPROCW)&LAB_00417fa0,LVar4,Calendar,CVar9);
  }
  FUN_004087a4((int *)(local_8 + 0xbc),(int)PTR_DAT_00414cf8,1);
  iVar7 = 0;
  if (DAT_0042c714 != (int *)0x0) {
    iVar7 = DAT_0042c714[-1];
  }
  if (-1 < iVar7 + -1) {
    iVar6 = 0;
    do {
      FUN_00407abc(*(int *)(local_8 + 0xbc) + iVar6 * 0x18,(int)(DAT_0042c714 + iVar6 * 6),
                   PTR_DAT_00414bc0);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_004088c8((int *)&DAT_0042c714,(int)PTR_DAT_00417e64);
  _DAT_0042c710 = 0;
  if (DAT_0042c714 != (int *)0x0) {
    _DAT_0042c710 = DAT_0042c714[-1];
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004182af;
  puStack_34 = (undefined1 *)0x4182a7;
  FUN_00405a00(DAT_0042c718);
  return;
}


