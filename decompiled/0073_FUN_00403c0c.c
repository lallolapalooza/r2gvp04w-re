/*
 * Function: FUN_00403c0c
 * Address: 00403c0c
 * Size: 86 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00403c0c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (DAT_0042bb88 != (int *)0x0) {
    bVar1 = FUN_00403b58();
    if (bVar1) {
      iVar3 = *DAT_0042bb88;
      if (-1 < iVar3 + -1) {
        iVar2 = 0;
        do {
          if (param_1 == DAT_0042bb88[iVar2 + 1]) {
            DAT_0042bb88[iVar2 + 1] = DAT_0042bb88[*DAT_0042bb88];
            *DAT_0042bb88 = *DAT_0042bb88 + -1;
            uVar4 = 1;
            break;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      DAT_0042bb8c = 0;
    }
  }
  return uVar4;
}


