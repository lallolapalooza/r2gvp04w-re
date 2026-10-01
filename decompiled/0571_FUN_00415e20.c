/*
 * Function: FUN_00415e20
 * Address: 00415e20
 * Size: 87 bytes
 * Calling Convention: __register
 */

short * FUN_00415e20(short *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  bool bVar9;
  
  if ((param_1 != (short *)0x0) && (param_2 != (short *)0x0)) {
    uVar2 = 0xffffffff;
    psVar7 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar3 = ~uVar2 - 1;
    if (uVar3 != 0) {
      uVar4 = 0xffffffff;
      psVar7 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
      iVar5 = ~uVar4 - uVar3;
      bVar9 = iVar5 == 0;
      if (uVar3 <= ~uVar4 && !bVar9) {
        do {
          psVar7 = param_1;
          do {
            param_1 = psVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            param_1 = psVar7 + 1;
            bVar9 = *param_2 == *psVar7;
            psVar7 = param_1;
          } while (!bVar9);
          iVar6 = ~uVar2 - 2;
          psVar8 = param_1;
          psVar7 = param_2;
          if (!bVar9) {
            return (short *)0x0;
          }
          do {
            if (iVar6 == 0) break;
            bVar9 = psVar7[1] == *psVar8;
            iVar6 = iVar6 + -1;
            psVar8 = psVar8 + 1;
            psVar7 = psVar7 + 1;
          } while (bVar9);
          if (bVar9) {
            return param_1 + -1;
          }
        } while( true );
      }
    }
  }
  return (short *)0x0;
}


