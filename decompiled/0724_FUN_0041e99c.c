/*
 * Function: FUN_0041e99c
 * Address: 0041e99c
 * Size: 115 bytes
 * Calling Convention: __register
 */

uint FUN_0041e99c(int param_1,int *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 1;
  do {
    uVar3 = (uint)param_3;
    param_3 = param_3 << 1;
    uVar1 = FUN_0041e860((ushort *)(((int)uVar3 >> 7) * 0x200 + param_1 + uVar2 * 2 + 0x200),param_2
                        );
    uVar2 = uVar2 * 2 | uVar1;
    if (uVar1 != (int)uVar3 >> 7) {
      for (; (int)uVar2 < 0x100; uVar2 = uVar1 | uVar2 * 2) {
        uVar1 = FUN_0041e860((ushort *)(param_1 + uVar2 * 2),param_2);
      }
      return uVar2;
    }
  } while ((int)uVar2 < 0x100);
  return uVar2;
}


