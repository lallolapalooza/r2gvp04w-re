/*
 * Function: FUN_00418b04
 * Address: 00418b04
 * Size: 90 bytes
 * Calling Convention: __register
 */

void FUN_00418b04(int param_1,char param_2,ushort *param_3,int param_4,int param_5)

{
  ushort *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  longlong *local_8;
  
  local_8 = (longlong *)0x0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x418b18;
    param_1 = FUN_00405424(param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_00418b5e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00415f70(param_3,param_5,param_4,&local_8);
  FUN_00406dfc((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00418b65;
  puStack_2c = (undefined1 *)0x418b5d;
  FUN_00406b28((int *)&local_8);
  return;
}


