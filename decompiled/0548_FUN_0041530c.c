/*
 * Function: FUN_0041530c
 * Address: 0041530c
 * Size: 249 bytes
 * Calling Convention: __register
 */

void FUN_0041530c(uint param_1,uint param_2,int *param_3)

{
  undefined2 *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 < 10000) {
    if (param_1 < 100) {
      uVar3 = (9 < param_1) + 1;
    }
    else {
      uVar3 = (999 < param_1) + 3;
    }
  }
  else if (param_1 < 1000000) {
    uVar3 = (99999 < param_1) + 5;
  }
  else if (param_1 < 100000000) {
    uVar3 = (9999999 < param_1) + 7;
  }
  else {
    uVar3 = (999999999 < param_1) + 9;
  }
  FUN_004072d0(param_3,(param_2 & 0xff) + uVar3);
  puVar1 = (undefined2 *)FUN_004071e4(*param_3);
  *puVar1 = 0x2d;
  puVar2 = puVar1 + (param_2 & 0xff);
  uVar4 = param_1;
  if (2 < uVar3) {
    do {
      param_1 = uVar4 / 100;
      uVar3 = uVar3 - 2;
      *(undefined4 *)(puVar2 + uVar3) = *(undefined4 *)(&DAT_00427c0c + (uVar4 % 100) * 4);
      uVar4 = param_1;
    } while (2 < (int)uVar3);
  }
  if (uVar3 == 2) {
    *(undefined4 *)puVar2 = *(undefined4 *)(&DAT_00427c0c + param_1 * 4);
  }
  else {
    *puVar2 = (ushort)param_1 | 0x30;
  }
  return;
}


