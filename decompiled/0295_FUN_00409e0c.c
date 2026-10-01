/*
 * Function: FUN_00409e0c
 * Address: 00409e0c
 * Size: 194 bytes
 * Calling Convention: __register
 */

void FUN_00409e0c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  uVar2 = ((param_3 >> 0xd) + (param_3 >> 5)) % 0x1f;
  puStack_1c = (undefined1 *)0x409e3c;
  FUN_00409d70(param_1);
  puStack_20 = &LAB_00409ec7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = *(int *)(param_2 + uVar2 * 4);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + -4);
  }
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_2 + uVar2 * 4) + iVar3 * 4) == 0) {
        *(uint *)(*(int *)(param_2 + uVar2 * 4) + iVar3 * 4) = param_3;
        puStack_1c = &stack0xfffffffc;
        FUN_004063c0();
        return;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar3 = *(int *)(param_2 + uVar2 * 4);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + -4);
  }
  if (iVar1 == 0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00409c38((int *)(param_2 + uVar2 * 4),10);
  }
  else {
    puStack_1c = &stack0xfffffffc;
    FUN_00409c38((int *)(param_2 + uVar2 * 4),iVar1 * 2);
  }
  *(uint *)(*(int *)(param_2 + uVar2 * 4) + iVar1 * 4) = param_3;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x409ece;
  puStack_20 = (undefined1 *)0x409ec6;
  FUN_00409d88(param_1);
  return;
}


