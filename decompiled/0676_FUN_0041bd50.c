/*
 * Function: FUN_0041bd50
 * Address: 0041bd50
 * Size: 129 bytes
 * Calling Convention: __register
 */

void FUN_0041bd50(ushort *param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  longlong *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_1c = &LAB_0041bdd1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0041bd00(param_1,0,&local_c);
  FUN_00406c80((int *)&local_8,(longlong *)0x0,local_c);
  iVar1 = thunk_FUN_00406f14((int *)&local_8);
  puVar2 = (ushort *)FUN_0041bd00(param_1,iVar1,&local_c);
  FUN_00406dfc(param_2,local_8);
  for (; (*puVar2 != 0 && (*puVar2 < 0x21)); puVar2 = puVar2 + 1) {
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041bdd8;
  puStack_1c = (undefined1 *)0x41bdd0;
  FUN_00406b28((int *)&local_8);
  return;
}


