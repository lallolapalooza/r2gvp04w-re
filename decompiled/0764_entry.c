/*
 * Function: entry
 * Address: 00425be0
 * Size: 522 bytes
 * Calling Convention: __register
 */

void entry(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  uint local_28 [2];
  undefined1 local_20 [4];
  int local_1c;
  longlong *local_18 [5];
  
  local_18[0] = (longlong *)0x0;
  puStack_70 = (undefined1 *)0x425c10;
  FUN_0040b3c0(0x4225a8);
  puStack_74 = &LAB_004262c2;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_80 = &LAB_0042627e;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puStack_7c = &stack0xfffffffc;
  puStack_70 = &stack0xfffffffc;
  FUN_004211a4(DAT_0042c584);
  FUN_00420d00();
  if ((char)u_0123456789ABCDEFGHIJKLMNOPQRSTUV_004283cc[0x20] != '\0') {
    FUN_004212cc();
    FUN_00406a30(0);
  }
  FUN_0041be90(0,(int *)local_18);
  FUN_00406dfc(&DAT_0042f0f4,local_18[0]);
  puStack_94 = (undefined1 *)0x425c7f;
  DAT_0042f0f8 = FUN_0041d1ac((int *)PTR_PTR_0041cc28,'\x01',DAT_0042f0f4,1,0,2);
  *in_FS_OFFSET = &stack0xffffff70;
  puStack_94 = (undefined1 *)0x425c97;
  DAT_0042f100 = FUN_00421278();
  uVar4 = false;
  if (*(int *)(DAT_0042f100 + 0xc) == 1) {
    puStack_94 = (undefined1 *)0x425cb6;
    uVar1 = FUN_0041db58(DAT_0042f100,0x28);
    uVar4 = false;
    if (uVar1 == *(uint *)(DAT_0042f100 + 0x28)) {
      puStack_94 = (undefined1 *)0x425cce;
      (**(code **)(*DAT_0042f0f8 + 4))(DAT_0042f0f8,local_20);
      uVar4 = local_1c == 0;
      if (!(bool)uVar4) goto LAB_00425cf4;
      puStack_94 = (undefined1 *)0x425ce1;
      (**(code **)(*DAT_0042f0f8 + 4))(DAT_0042f0f8,local_28);
      uVar4 = local_28[0] == *(uint *)(DAT_0042f100 + 0x10);
      if (*(uint *)(DAT_0042f100 + 0x10) <= local_28[0]) goto LAB_00425cf4;
    }
  }
  puStack_94 = (undefined1 *)0x425cf4;
  FUN_004210bc();
LAB_00425cf4:
  puStack_94 = (undefined1 *)0x425d06;
  FUN_0041d16c(DAT_0042f0f8,*(undefined4 *)(DAT_0042f100 + 0x20));
  puStack_94 = (undefined1 *)0x425d1a;
  FUN_0041d144(DAT_0042f0f8,&DAT_0042f110,0x40);
  puStack_94 = (undefined1 *)0x425d2f;
  FUN_00406fb4((int *)&DAT_0042f110,(int *)PTR_s_Inno_Setup_Setup_Data__5_5_7___u_0042846c,0x40);
  if (!(bool)uVar4) {
    puStack_94 = (undefined1 *)0x425d36;
    FUN_004210bc();
  }
  puStack_98 = &LAB_00425dfb;
  uStack_9c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_9c;
  puStack_a4 = (undefined1 *)0x425d5c;
  puStack_94 = &stack0xfffffffc;
  DAT_0042f154 = FUN_0041dc74((int *)PTR_DAT_0041d89c,'\x01',DAT_0042f0f8,
                              (undefined4 *)PTR_PTR_0041e204);
  puStack_a4 = &LAB_00425dea;
  puStack_a8 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_a8;
  uVar5 = 4;
  FUN_0041f204((int)DAT_0042f154,(longlong *)&DAT_0042efc8,0x11d,4,0x1c);
  DAT_0042f0ec = DAT_0042f048;
  DAT_0042f0e8 = FUN_004044a0(DAT_0042f048 * 0x3d);
  if (-1 < DAT_0042f0ec + -1) {
    iVar3 = 0;
    iVar2 = DAT_0042f0ec;
    do {
      uVar5 = 4;
      FUN_0041f204((int)DAT_0042f154,(longlong *)(DAT_0042f0e8 + iVar3 * 0x3d),0x3d,4,6);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uVar5;
  puStack_a8 = &LAB_00425df1;
  FUN_00404df4(DAT_0042f154);
  return;
}


