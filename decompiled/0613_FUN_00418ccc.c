/*
 * Function: FUN_00418ccc
 * Address: 00418ccc
 * Size: 108 bytes
 * Calling Convention: __register
 */

void FUN_00418ccc(int param_1,char param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  longlong **pplVar1;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  ushort *local_c;
  longlong *local_8;
  
  local_8 = (longlong *)0x0;
  local_c = (ushort *)0x0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x418ce2;
    param_1 = FUN_00405424(param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
  }
  puStack_30 = &LAB_00418d38;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  pplVar1 = &local_8;
  puStack_2c = &stack0xfffffffc;
  FUN_0040ab3c(param_3,(int *)&local_c);
  FUN_00415f70(local_c,param_5,param_4,pplVar1);
  FUN_00406dfc((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00418d3f;
  puStack_30 = (undefined1 *)0x418d37;
  FUN_00406b88((int *)&local_c,2);
  return;
}


