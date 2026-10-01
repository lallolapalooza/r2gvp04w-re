/*
 * Function: FUN_00403844
 * Address: 00403844
 * Size: 50 bytes
 * Calling Convention: __register
 */

void FUN_00403844(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1 - 1 & 0xfffffffc;
  puVar2 = FUN_00402fb0(param_1);
  puVar1 = (uint *)(uVar3 + (int)puVar2);
  uVar3 = uVar3 | -(uint)(puVar2 == (undefined4 *)0x0);
  if (uVar3 < 0x40a2c) {
    iVar4 = -uVar3;
    do {
      *(double *)(iVar4 + (int)puVar1) = (double)(float10)0;
      iVar4 = iVar4 + 8;
    } while (iVar4 < 0);
    *puVar1 = -(uint)(puVar2 == (undefined4 *)0x0);
    ffree((float10)0);
  }
  return;
}


