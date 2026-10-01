/*
 * Function: FUN_004061ec
 * Address: 004061ec
 * Size: 134 bytes
 * Calling Convention: __register
 */

undefined4 FUN_004061ec(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  
  if ((*(uint *)(in_stack_00000004 + 4) & 6) != 0) {
    puStack_18 = &LAB_0040626c;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    uStack_20 = *in_FS_OFFSET;
    uStack_28 = *(undefined4 *)(in_stack_00000004 + 0x18);
    uStack_2c = *(undefined4 *)(in_stack_00000004 + 0x14);
    uStack_30 = 0x406225;
    puVar2 = FUN_0040ae54();
    uStack_30 = *puVar2;
    *puVar2 = &uStack_30;
    iVar1 = *(int *)(in_stack_00000008 + 4);
    *(undefined1 **)(in_stack_00000008 + 4) = &LAB_0040626c;
    FUN_00405ed4(puVar2,extraout_EDX,(char *)(iVar1 + 5));
    (*extraout_ECX)();
    puVar2 = FUN_0040ae54();
    *puVar2 = *(undefined4 *)*puVar2;
    *in_FS_OFFSET = uStack_1c;
  }
  return 1;
}


