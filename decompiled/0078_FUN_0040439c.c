/*
 * Function: FUN_0040439c
 * Address: 0040439c
 * Size: 175 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040439c(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = DAT_00429ad8;
  while ((undefined4 **)puVar3 != &DAT_00429ad4) {
    puVar1 = (undefined4 *)puVar3[1];
    VirtualFree(puVar3,0,0x8000);
    puVar3 = puVar1;
  }
  iVar4 = 0x37;
  puVar2 = &DAT_0042706c;
  do {
    *(undefined **)(puVar2 + 0xc) = puVar2;
    *(undefined **)(puVar2 + 8) = puVar2;
    *(undefined4 *)(puVar2 + 0x10) = 1;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    puVar2 = puVar2 + 0x20;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  DAT_00429ad4 = &DAT_00429ad4;
  DAT_00429ad8 = &DAT_00429ad4;
  iVar4 = 0x400;
  puVar3 = &DAT_00429b74;
  do {
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  _DAT_00429af0 = 0;
  FUN_004048f8((double *)&DAT_00429af4,0x80,0);
  DAT_00429aec = 0;
  puVar3 = DAT_0042bb7c;
  while ((undefined4 **)puVar3 != &DAT_0042bb78) {
    puVar1 = (undefined4 *)puVar3[1];
    VirtualFree(puVar3,0,0x8000);
    puVar3 = puVar1;
  }
  DAT_0042bb78 = &DAT_0042bb78;
  DAT_0042bb7c = &DAT_0042bb78;
  return;
}


