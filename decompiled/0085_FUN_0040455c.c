/*
 * Function: FUN_0040455c
 * Address: 0040455c
 * Size: 49 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0040455c(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = FUN_0040ae54();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (DAT_00429028 != (code *)0x0) {
      (*DAT_00429028)(uVar3);
    }
  }
  return uVar3;
}


