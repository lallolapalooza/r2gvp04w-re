/*
 * Function: FUN_00420ad4
 * Address: 00420ad4
 * Size: 261 bytes
 * Calling Convention: __register
 */

undefined1 FUN_00420ad4(undefined *param_1,char param_2,int param_3,int *param_4)

{
  char cVar1;
  LANGID LVar2;
  undefined2 extraout_var;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  int *local_c;
  undefined1 local_6;
  char local_5;
  
  *param_4 = 0;
  local_6 = 0;
  local_5 = param_2;
  if (param_3 != 0) {
    iVar5 = 0;
    while (cVar1 = (*(code *)param_1)(iVar5,&local_c), cVar1 != '\0') {
      uVar7 = FUN_004151dc(param_3,*local_c);
      if (uVar7 == 0) {
        *param_4 = iVar5;
        return 2;
      }
      iVar5 = iVar5 + 1;
    }
  }
  if (local_5 == '\0') {
    uVar7 = FUN_0041c488();
  }
  else if (local_5 == '\x01') {
    LVar2 = GetUserDefaultLangID();
    uVar7 = CONCAT22(extraout_var,LVar2);
  }
  else {
    uVar7 = 0;
  }
  uVar6 = (ushort)uVar7;
  if (uVar6 != 0) {
    iVar5 = 0;
    while (cVar1 = (*(code *)param_1)(iVar5,&local_c), cVar1 != '\0') {
      if (local_c[10] == (uVar7 & 0xffff)) {
        *param_4 = iVar5;
        return 1;
      }
      iVar5 = iVar5 + 1;
    }
    iVar5 = 0;
    while (cVar1 = (*(code *)param_1)(iVar5,&local_c), cVar1 != '\0') {
      if ((local_c[10] & 0x3ffU) == (uint)(uVar6 & 0x3ff)) {
        if ((uVar6 & 0x3ff) != 4) {
LAB_00420bb5:
          *param_4 = iVar5;
          return 1;
        }
        iVar3 = FUN_00420aa8((uint)*(ushort *)(local_c + 10),(uint)(uVar6 & 0x3ff),extraout_ECX_00);
        iVar4 = FUN_00420aa8(uVar7,extraout_EDX,extraout_ECX);
        if (iVar3 == iVar4) goto LAB_00420bb5;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return local_6;
}


