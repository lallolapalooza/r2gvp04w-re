/*
 * Function: FUN_0041d07c
 * Address: 0041d07c
 * Size: 119 bytes
 * Calling Convention: __register
 */

void FUN_0041d07c(undefined4 param_1,DWORD param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  DWORD local_10;
  undefined1 local_c;
  longlong *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_1c = &LAB_0041d0f3;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0041c758(param_2,(int *)&local_8);
  if (local_8 == (longlong *)0x0) {
    local_c = 0;
    local_10 = param_2;
    FUN_00415f70((ushort *)L"File I/O error %d",(int)&local_10,0,&local_8);
  }
  piVar1 = FUN_00418ac8((int *)PTR_PTR_0041cf68,'\x01',local_8);
  piVar1[6] = param_2;
  FUN_004062cc((int)piVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041d0fa;
  puStack_1c = (undefined1 *)0x41d0f2;
  FUN_00406b28((int *)&local_8);
  return;
}


