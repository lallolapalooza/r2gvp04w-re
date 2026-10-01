/*
 * Function: FUN_0041ea88
 * Address: 0041ea88
 * Size: 126 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0041ea88(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 < 5) {
    return 1;
  }
  bVar1 = *param_2;
  if (bVar1 < 0xe1) {
    param_1[2] = 0;
    for (; 0x2c < bVar1; bVar1 = bVar1 - 0x2d) {
      param_1[2] = param_1[2] + 1;
    }
    param_1[1] = 0;
    for (; 8 < bVar1; bVar1 = bVar1 - 9) {
      param_1[1] = param_1[1] + 1;
    }
    *param_1 = (uint)bVar1;
    param_1[3] = 0;
    iVar2 = 0;
    do {
      param_2 = param_2 + 1;
      iVar3 = iVar2 + 1;
      param_1[3] = param_1[3] + ((uint)*param_2 << ((byte)(iVar2 << 3) & 0x1f));
      iVar2 = iVar3;
    } while (iVar3 < 4);
    if (param_1[3] == 0) {
      param_1[3] = 1;
    }
    return 0;
  }
  return 1;
}


