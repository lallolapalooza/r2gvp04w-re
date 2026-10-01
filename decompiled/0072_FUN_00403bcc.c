/*
 * Function: FUN_00403bcc
 * Address: 00403bcc
 * Size: 64 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00403bcc(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  
  bVar2 = FUN_00403b58();
  if ((bVar2) && (*DAT_0042bb88 < 0x3ffe)) {
    DAT_0042bb88[*DAT_0042bb88 + 1] = param_1;
    piVar1 = DAT_0042bb88;
    *DAT_0042bb88 = *DAT_0042bb88 + 1;
    uVar3 = CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  DAT_0042bb8c = 0;
  return uVar3;
}


