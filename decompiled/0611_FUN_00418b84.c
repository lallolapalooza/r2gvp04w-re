/*
 * Function: FUN_00418b84
 * Address: 00418b84
 * Size: 83 bytes
 * Calling Convention: __register
 */

void FUN_00418b84(int param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_30;
  undefined1 *puStackY_2c;
  undefined1 *puStackY_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  longlong *local_8;
  
  local_8 = (longlong *)0x0;
  if (param_2 != '\0') {
    puStackY_28 = (undefined1 *)0x418b98;
    param_1 = FUN_00405424(param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  puStackY_2c = &LAB_00418bd7;
  uStackY_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_30;
  puStackY_28 = &stack0xfffffffc;
  FUN_00415c20(param_3,(int *)&local_8);
  FUN_00406dfc((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStackY_30;
  puStackY_28 = &LAB_00418bde;
  puStackY_2c = (undefined1 *)0x418bd6;
  FUN_00406b28((int *)&local_8);
  return;
}


