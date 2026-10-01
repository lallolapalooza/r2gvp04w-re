/*
 * Function: FUN_00403960
 * Address: 00403960
 * Size: 58 bytes
 * Calling Convention: __register
 */

void FUN_00403960(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  *param_2 = param_1 + 8;
  iVar1 = *param_1;
  if ((param_1 == *(int **)(iVar1 + 0x18)) && (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x14)))
  {
    *param_3 = *(int *)(iVar1 + 0x10) + -1;
    return;
  }
  *param_3 = (int)param_1 + ((param_1[-1] & 0xfffffff0U) - (uint)*(ushort *)(iVar1 + 2));
  return;
}


