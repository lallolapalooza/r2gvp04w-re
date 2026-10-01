/*
 * Function: FUN_00405aa4
 * Address: 00405aa4
 * Size: 84 bytes
 * Calling Convention: __register
 */

undefined4 * FUN_00405aa4(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint local_c;
  
  puVar3 = (uint *)((int)param_1 + *(int *)(*param_1 + -0x34) + -4);
  local_c = *puVar3;
  puVar2 = (undefined4 *)(local_c & 0xfffffffe);
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_004056b0();
    do {
      LOCK();
      if (local_c == *puVar3) {
        *puVar3 = local_c & 1 | (uint)puVar1;
      }
      UNLOCK();
      local_c = *puVar3;
      puVar2 = (undefined4 *)(local_c & 0xfffffffe);
    } while (puVar2 == (undefined4 *)0x0);
    if (puVar1 != puVar2) {
      FUN_00403334(puVar1);
    }
  }
  return puVar2;
}


