/*
 * Function: FUN_0041e8e8
 * Address: 0041e8e8
 * Size: 67 bytes
 * Calling Convention: __register
 */

int FUN_0041e8e8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar1 = FUN_0041e860((ushort *)(param_1 + iVar2 * 2),param_3);
    iVar2 = iVar1 + iVar2 * 2;
  }
  return iVar2 - (1 << ((byte)param_2 & 0x1f));
}


