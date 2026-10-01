/*
 * Function: FUN_00407024
 * Address: 00407024
 * Size: 67 bytes
 * Calling Convention: __register
 */

void FUN_00407024(byte *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    *param_4 = 0;
    return;
  }
  if (param_2 < 1) {
    param_2 = 1;
LAB_0040703c:
    iVar2 = ((uint)bVar1 - param_2) + 1;
    if (-1 < param_3) {
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      goto LAB_00407047;
    }
  }
  else if (param_2 <= (int)(uint)bVar1) goto LAB_0040703c;
  param_3 = 0;
LAB_00407047:
  *param_4 = (byte)param_3;
  pbVar3 = param_1 + param_2;
  for (; param_4 = param_4 + 1, param_3 != 0; param_3 = param_3 + -1) {
    *param_4 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  }
  return;
}


