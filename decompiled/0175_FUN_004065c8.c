/*
 * Function: FUN_004065c8
 * Address: 004065c8
 * Size: 88 bytes
 * Calling Convention: __register
 */

void FUN_004065c8(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (DAT_0042bb9c != (int *)0x0) {
    iVar1 = *DAT_0042bb9c;
    iVar4 = 0;
    iVar2 = DAT_0042bb9c[1];
    puStack_1c = &LAB_0040661a;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    if (0 < iVar1) {
      do {
        pcVar3 = *(code **)(iVar2 + iVar4 * 8);
        iVar4 = iVar4 + 1;
        DAT_0042bba0 = iVar4;
        if ((pcVar3 != (code *)0x0) && (*(int *)pcVar3 != 0)) {
          (*pcVar3)();
        }
      } while (iVar4 < iVar1);
    }
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


