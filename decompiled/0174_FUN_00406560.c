/*
 * Function: FUN_00406560
 * Address: 00406560
 * Size: 83 bytes
 * Calling Convention: __register
 */

void FUN_00406560(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  iVar3 = DAT_0042bba0;
  puStack_14 = &stack0xfffffffc;
  if (DAT_0042bb9c != 0) {
    iVar1 = *(int *)(DAT_0042bb9c + 4);
    puStack_18 = &LAB_004065ae;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      pcVar2 = *(code **)(iVar1 + 4 + iVar3 * 8);
      DAT_0042bba0 = iVar3;
      if ((pcVar2 != (code *)0x0) && (*(int *)pcVar2 != 0)) {
        (*pcVar2)();
      }
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


