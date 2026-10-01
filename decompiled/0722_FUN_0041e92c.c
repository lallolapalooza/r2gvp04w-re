/*
 * Function: FUN_0041e92c
 * Address: 0041e92c
 * Size: 68 bytes
 * Calling Convention: __register
 */

uint FUN_0041e92c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  iVar2 = 1;
  if (0 < param_2) {
    do {
      iVar1 = FUN_0041e860((ushort *)(param_1 + iVar2 * 2),param_3);
      iVar2 = iVar2 * 2 + iVar1;
      uVar4 = uVar4 | iVar1 << ((byte)iVar3 & 0x1f);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return uVar4;
}


