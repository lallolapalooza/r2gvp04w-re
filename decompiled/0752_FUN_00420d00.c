/*
 * Function: FUN_00420d00
 * Address: 00420d00
 * Size: 260 bytes
 * Calling Convention: __register
 */

void FUN_00420d00(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_00420e04;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = FUN_0041be30();
  if (0 < iVar1) {
    iVar3 = 1;
    do {
      FUN_0041be90(iVar3,&local_8);
      uVar2 = FUN_004151dc(local_8,0x420e20);
      if (uVar2 == 0) {
LAB_00420d6f:
        u_0123456789ABCDEFGHIJKLMNOPQRSTUV_004283cc[0x20]._1_1_ = 1;
      }
      else {
        FUN_004074e0(local_8,1,10,&local_c);
        uVar2 = FUN_004151dc(local_c,0x420e38);
        if (uVar2 == 0) goto LAB_00420d6f;
        FUN_004074e0(local_8,1,6,&local_10);
        uVar2 = FUN_004151dc(local_10,0x420e5c);
        if (uVar2 == 0) {
          FUN_004074e0(local_8,7,0x7fffffff,&DAT_0042efc4);
        }
        else {
          uVar2 = FUN_004151dc(local_8,0x420e78);
          if (uVar2 != 0) {
            uVar2 = FUN_004151dc(local_8,0x420e90);
            if (uVar2 != 0) goto LAB_00420de1;
          }
          u_0123456789ABCDEFGHIJKLMNOPQRSTUV_004283cc[0x20]._0_1_ = 1;
        }
      }
LAB_00420de1:
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00420e0b;
  puStack_20 = (undefined1 *)0x420e03;
  FUN_00406b88(&local_10,3);
  return;
}


