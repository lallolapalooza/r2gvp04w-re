/*
 * Function: FUN_00417046
 * Address: 00417046
 * Size: 16 bytes
 * Calling Convention: __register
 */

void FUN_00417046(void)

{
  int iVar1;
  int unaff_EBP;
  undefined2 *puVar2;
  undefined2 *unaff_EDI;
  
  puVar2 = *(undefined2 **)(unaff_EBP + -0xc);
  if (puVar2 != (undefined2 *)0x0) {
    iVar1 = *(int *)(puVar2 + -2);
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *unaff_EDI = *puVar2;
      puVar2 = puVar2 + 1;
      unaff_EDI = unaff_EDI + 1;
    }
  }
  return;
}


