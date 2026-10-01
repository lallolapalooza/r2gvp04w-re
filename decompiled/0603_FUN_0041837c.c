/*
 * Function: FUN_0041837c
 * Address: 0041837c
 * Size: 661 bytes
 * Calling Convention: __register
 */

void FUN_0041837c(LCID param_1,LCTYPE param_2,longlong *param_3,int *param_4)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  longlong *local_20;
  longlong *local_1c;
  ushort *local_18;
  int local_14;
  int local_10;
  longlong *local_c;
  longlong *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  local_c = (longlong *)0x0;
  local_14 = 0;
  local_18 = (ushort *)0x0;
  local_1c = (longlong *)0x0;
  local_20 = (longlong *)0x0;
  puStack_34 = &LAB_00418623;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_10 = 1;
  FUN_00406b28(param_4);
  FUN_004175b0(param_1,param_2,param_3,(int *)&local_8);
  FUN_004175b0(param_1,0x1009,(longlong *)&DAT_00418640,(int *)&local_18);
  uVar4 = FUN_00415aec(local_18,1,extraout_ECX);
  uVar6 = extraout_ECX_00;
  iVar5 = extraout_EDX;
  if (uVar4 - 3 < 3) {
    while( true ) {
      iVar7 = 0;
      if (local_8 != (longlong *)0x0) {
        iVar7 = *(int *)((int)local_8 + -4);
      }
      if (iVar7 < local_10) break;
      uVar1 = *(ushort *)((int)local_8 + local_10 * 2 + -2);
      if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
        uVar4 = FUN_00419d6c((int)local_8,local_10);
        local_14 = (int)uVar4 >> 1;
        if (local_14 < 0) {
          local_14 = local_14 + (uint)((uVar4 & 1) != 0);
        }
        uVar6 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffbc;
        FUN_00406b28((int *)&local_c);
        FUN_004074e0((int)local_8,local_10,local_14,(int *)&local_c);
        FUN_00407350(param_4,local_c);
        *in_FS_OFFSET = uVar6;
        FUN_00406b28((int *)&local_c);
        return;
      }
      iVar7 = local_10 + -1;
      iVar5 = FUN_0041b174((int)local_8,iVar7,0x418650,'\x01',2,0);
      if (iVar5 == 0) {
        FUN_00407350(param_4,(longlong *)&DAT_00418664);
        local_10 = local_10 + 1;
        uVar6 = extraout_ECX_03;
        iVar5 = extraout_EDX_02;
      }
      else {
        iVar5 = FUN_0041b174((int)local_8,iVar7,0x418678,'\x01',4,0);
        if (iVar5 == 0) {
          FUN_00407350(param_4,(longlong *)L"eeee");
          local_10 = local_10 + 3;
          uVar6 = extraout_ECX_04;
          iVar5 = extraout_EDX_03;
        }
        else {
          iVar5 = FUN_0041b174((int)local_8,iVar7,0x4186a8,'\x01',2,0);
          if (iVar5 == 0) {
            FUN_00407350(param_4,(longlong *)&DAT_004186bc);
            local_10 = local_10 + 1;
            uVar6 = extraout_ECX_05;
            iVar5 = extraout_EDX_04;
          }
          else {
            sVar2 = *(short *)((int)local_8 + local_10 * 2 + -2);
            if ((sVar2 == 0x59) || (sVar2 == 0x79)) {
              FUN_00407350(param_4,(longlong *)&LAB_004186d0);
              uVar6 = extraout_ECX_06;
              iVar5 = extraout_EDX_05;
            }
            else {
              FUN_004071fc((int *)&local_20,(uint)*(ushort *)((int)local_8 + local_10 * 2 + -2));
              FUN_00407350(param_4,local_20);
              uVar6 = extraout_ECX_07;
              iVar5 = extraout_EDX_06;
            }
          }
        }
      }
      local_10 = local_10 + 1;
    }
    FUN_00418338(param_4,iVar5,uVar6,(int)&stack0xfffffffc);
  }
  else {
    if ((DAT_0042c604 == 4) || (DAT_0042c604 - 0x11U < 2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      while( true ) {
        iVar7 = 0;
        if (local_8 != (longlong *)0x0) {
          iVar7 = *(int *)((int)local_8 + -4);
        }
        if (iVar7 < local_10) break;
        uVar1 = *(ushort *)((int)local_8 + local_10 * 2 + -2);
        iVar5 = local_10;
        if ((uVar1 != 0x47) && (uVar1 != 0x67)) {
          FUN_004071fc((int *)&local_1c,(uint)uVar1);
          FUN_00407350(param_4,local_1c);
          uVar6 = extraout_ECX_01;
          iVar5 = extraout_EDX_00;
        }
        local_10 = local_10 + 1;
      }
    }
    else {
      FUN_00406dfc(param_4,local_8);
      uVar6 = extraout_ECX_02;
      iVar5 = extraout_EDX_01;
    }
    FUN_00418338(param_4,iVar5,uVar6,(int)&stack0xfffffffc);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0041862a;
  puStack_34 = (undefined1 *)0x418615;
  FUN_00406b88((int *)&local_20,3);
  puStack_34 = (undefined1 *)0x418622;
  FUN_00406b88((int *)&local_c,2);
  return;
}


