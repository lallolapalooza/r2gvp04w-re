/*
 * Function: FUN_004059b8
 * Address: 004059b8
 * Size: 71 bytes
 * Calling Convention: __register
 */

void FUN_004059b8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00405698((int)param_1);
  param_1[1] = param_1[1] - 1;
  if (param_1[1] == 0) {
    param_1[2] = 0;
    do {
      uVar1 = *param_1;
      LOCK();
      uVar2 = *param_1;
      if (uVar1 == uVar2) {
        *param_1 = uVar1 - 1;
        uVar2 = uVar1;
      }
      UNLOCK();
    } while (uVar1 != uVar2);
    if ((uVar1 & 0xfffffffe) != 0) {
      iVar3 = FUN_00405a24((int)param_1);
      (**(code **)(DAT_004298f4 + 0x10))(iVar3,0,0);
    }
  }
  return;
}


