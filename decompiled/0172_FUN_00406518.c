/*
 * Function: FUN_00406518
 * Address: 00406518
 * Size: 29 bytes
 * Calling Convention: __register
 */

void FUN_00406518(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  int *in_FS_OFFSET;
  
  piVar1 = (int *)(unaff_EBP + -0x10);
  iVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)piVar1;
  *piVar1 = iVar2;
  *(undefined1 **)(unaff_EBP + -0xc) = &LAB_00406478;
  *(int *)(unaff_EBP + -8) = unaff_EBP;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


