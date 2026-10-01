/*
 * Function: FUN_004190fc
 * Address: 004190fc
 * Size: 39 bytes
 * Calling Convention: __register
 */

void FUN_004190fc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    piVar1 = (int *)FUN_0040453c();
    uVar2 = FUN_00405108(piVar1,(int)PTR_PTR_00412e00);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_0040455c();
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
  }
  return;
}


