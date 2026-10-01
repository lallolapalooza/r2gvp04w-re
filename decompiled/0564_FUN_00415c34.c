/*
 * Function: FUN_00415c34
 * Address: 00415c34
 * Size: 131 bytes
 * Calling Convention: __register
 */

void FUN_00415c34(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  longlong *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_20 = &LAB_00415cd4;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x415c62;
  local_c = param_1;
  iVar1 = FUN_0041b344(&local_c,0x415cf0);
  puStack_2c = &LAB_00415cb7;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00406b28((int *)&local_8);
  iVar2 = 0;
  if (local_c != 0) {
    iVar2 = *(int *)(local_c + -4);
  }
  FUN_004074e0(local_c,iVar1 + 2,iVar2,(int *)&local_8);
  FUN_00406dfc(param_2,local_8);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00415cbe;
  puStack_2c = (undefined1 *)0x415cb6;
  FUN_00406b28((int *)&local_8);
  return;
}


