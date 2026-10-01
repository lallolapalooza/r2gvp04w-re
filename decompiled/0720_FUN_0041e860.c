/*
 * Function: FUN_0041e860
 * Address: 0041e860
 * Size: 136 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0041e860(ushort *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar5 = ((uint)param_2[2] >> 0xb) * (uint)uVar1;
  if ((uint)param_2[3] <= uVar5 && uVar5 - param_2[3] != 0) {
    param_2[2] = uVar5;
    uVar1 = *param_1;
    iVar4 = (int)(0x800 - (uint)uVar1) >> 5;
    *param_1 = *param_1 + (short)iVar4;
    if ((uint)param_2[2] < 0x1000000) {
      bVar3 = FUN_0041e780(param_2,(uint)uVar1,iVar4);
      param_2[3] = (uint)bVar3 | param_2[3] << 8;
      param_2[2] = param_2[2] << 8;
    }
    return 0;
  }
  param_2[2] = param_2[2] - uVar5;
  param_2[3] = param_2[3] - uVar5;
  uVar2 = *param_1;
  *param_1 = *param_1 - (short)((int)(uint)uVar2 >> 5);
  if ((uint)param_2[2] < 0x1000000) {
    bVar3 = FUN_0041e780(param_2,(int)(uint)uVar2 >> 5,(uint)uVar1);
    param_2[3] = (uint)bVar3 | param_2[3] << 8;
    param_2[2] = param_2[2] << 8;
  }
  return 1;
}


