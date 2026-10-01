/*
 * Function: FUN_0040a308
 * Address: 0040a308
 * Size: 168 bytes
 * Calling Convention: __register
 */

void FUN_0040a308(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (*(char *)(param_1 + 0x950) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    puStack_14 = (undefined1 *)0x40a32f;
    iVar1 = FUN_004056b0();
    LOCK();
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    if (puVar2 == (undefined4 *)0x0) {
      *(int *)(param_1 + 0x10) = iVar1;
      puVar2 = (undefined4 *)0x0;
    }
    UNLOCK();
    if (puVar2 != (undefined4 *)0x0) {
      puStack_14 = (undefined1 *)0x40a348;
      FUN_00405728(puVar2);
    }
  }
  puStack_14 = (undefined1 *)0x40a356;
  FUN_00405820(*(uint **)(param_1 + 0x10),0xffffffff);
  puStack_18 = &LAB_0040a3ab;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (*(char *)(param_1 + 0x950) == '\0') {
    iVar1 = 0xc5;
    puVar2 = (undefined4 *)(param_1 + 0x14);
    puStack_14 = &stack0xfffffffc;
    do {
      FUN_0040a0d4(puVar2);
      puVar2 = puVar2 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined1 *)(param_1 + 0x950) = 1;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = (undefined1 *)0x40a3b2;
  puStack_18 = (undefined1 *)0x40a3aa;
  FUN_004059b8(*(uint **)(param_1 + 0x10));
  return;
}


