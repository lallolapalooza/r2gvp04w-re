/*
 * Function: FUN_00403a38
 * Address: 00403a38
 * Size: 120 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00403a38(LPCVOID param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (((LPCVOID)0xffff < param_1) && (((uint)param_1 & 3) == 0)) {
    if ((param_1 < *(LPCVOID *)(param_4 + -0x1c)) ||
       ((uint)((int)*(LPCVOID *)(param_4 + -0x1c) + *(int *)(param_4 + -0x10)) < (int)param_1 + 4U))
    {
      *(undefined4 *)(param_4 + -0x10) = 0;
      VirtualQuery(param_1,(PMEMORY_BASIC_INFORMATION)(param_4 + -0x1c),0x1c);
    }
    if ((((3 < *(uint *)(param_4 + -0x10)) && (*(int *)(param_4 + -0xc) == 0x1000)) &&
        ((*(byte *)(param_4 + -8) & 0xf6) != 0)) && ((*(byte *)(param_4 + -7) & 1) == 0)) {
      return CONCAT31((int3)((uint)param_4 >> 8),1);
    }
  }
  return 0;
}


