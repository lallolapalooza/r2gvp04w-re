/*
 * Function: FUN_00420bdc
 * Address: 00420bdc
 * Size: 167 bytes
 * Calling Convention: __register
 */

void FUN_00420bdc(uint param_1)

{
  DWORD DVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  longlong **pplVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  longlong *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_00420c83;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  DVar1 = GetLastError();
  pplVar3 = &local_8;
  local_14 = *(undefined4 *)(PTR_DAT_00428580 + (param_1 & 0xff) * 4);
  FUN_00415740(&local_18,0,extraout_ECX,DVar1,0);
  local_10 = local_18;
  FUN_0041c758(DVar1,&local_1c);
  local_c = local_1c;
  FUN_0042025c(CONCAT31((int3)((uint)local_1c >> 8),0x68),(int)&local_14,2,(int *)pplVar3);
  piVar2 = FUN_00418ac8((int *)PTR_PTR_00412e00,'\x01',local_8);
  FUN_004062cc((int)piVar2);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00420c8a;
  puStack_2c = (undefined1 *)0x420c7a;
  FUN_00406b88(&local_1c,2);
  puStack_2c = (undefined1 *)0x420c82;
  FUN_00406b28((int *)&local_8);
  return;
}


