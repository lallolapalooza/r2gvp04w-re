/*
 * Function: FUN_00404be8
 * Address: 00404be8
 * Size: 57 bytes
 * Calling Convention: __register
 */

void FUN_00404be8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 auStack_17f8 [1531];
  
  bVar4 = 0;
  FUN_00404b6c();
  iVar2 = 0;
  puVar1 = &DAT_004298f8;
  do {
    FUN_00404b90(iVar2,0,auStack_17f8 + 0x5f7);
    puVar3 = puVar1 + (uint)bVar4 * -2 + 1;
    *puVar1 = auStack_17f8[0x5f7];
    *puVar3 = auStack_17f8[(uint)bVar4 * -2 + 0x5f8];
    puVar3[(uint)bVar4 * -2 + 1] = auStack_17f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9];
    (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (auStack_17f8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9)[(uint)bVar4 * -2 + 1];
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 8);
  return;
}


