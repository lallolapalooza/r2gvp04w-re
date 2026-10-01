/*
 * Function: FUN_00416f7c
 * Address: 00416f7c
 * Size: 115 bytes
 * Calling Convention: __register
 */

void FUN_00416f7c(void)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  uint extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int unaff_EBP;
  short *unaff_EDI;
  short *psVar5;
  short *psVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar3 = *(uint *)(unaff_EBP + 0xc);
  if (0x11 < uVar3) {
    uVar3 = 0x12;
  }
  iVar2 = (int)*(short *)(unaff_EBP + -0x2a);
  if (iVar2 < 1) {
    psVar5 = unaff_EDI + 1;
    *unaff_EDI = 0x30;
  }
  else {
    iVar4 = 0;
    if (*(char *)(unaff_EBP + 0x14) != '\x02') {
      iVar4 = (byte)((ushort)(*(short *)(unaff_EBP + -0x2a) - 1U) % 3) + 1;
    }
    while( true ) {
      cVar1 = FUN_00416eb2();
      psVar5 = unaff_EDI + (uint)bVar7 * -2 + 1;
      *unaff_EDI = (short)CONCAT31(extraout_var,cVar1);
      iVar2 = 0;
      uVar3 = extraout_EDX;
      if (extraout_ECX == 1) break;
      iVar4 = iVar4 + -1;
      unaff_EDI = psVar5;
      if ((iVar4 == 0) && (*(short *)(unaff_EBP + -0x10) != 0)) {
        unaff_EDI = psVar5 + (uint)bVar7 * -2 + 1;
        *psVar5 = *(short *)(unaff_EBP + -0x10);
        iVar4 = 3;
      }
    }
  }
  if (uVar3 != 0) {
    psVar6 = psVar5;
    if (*(short *)(unaff_EBP + -0xe) != 0) {
      psVar6 = psVar5 + (uint)bVar7 * -2 + 1;
      *psVar5 = *(short *)(unaff_EBP + -0xe);
    }
    for (; iVar2 != 0; iVar2 = iVar2 + 1) {
      *psVar6 = 0x30;
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        return;
      }
      psVar6 = psVar6 + (uint)bVar7 * -2 + 1;
    }
    do {
      cVar1 = FUN_00416eb2();
      *psVar6 = (short)CONCAT31(extraout_var_00,cVar1);
      psVar6 = psVar6 + (uint)bVar7 * -2 + 1;
    } while (extraout_EDX_00 != 1);
  }
  return;
}


