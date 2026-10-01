/*
 * Function: FUN_00405820
 * Address: 00405820
 * Size: 405 bytes
 * Calling Convention: __register
 */

bool FUN_00405820(uint *param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int local_14;
  
  uVar8 = param_1[4];
  do {
    uVar2 = FUN_00405ce0((int *)param_1);
    if ((char)uVar2 != '\0') {
      return (bool)(char)uVar2;
    }
    if (param_2 == 0) {
      return false;
    }
    bVar1 = false;
    if (0 < (int)uVar8) {
      DVar3 = GetTickCount();
      local_14 = 0;
      for (; 0 < (int)uVar8; uVar8 = uVar8 - 1) {
        if ((param_2 != 0xffffffff) && (DVar4 = GetTickCount(), param_2 <= DVar4 - DVar3)) {
          return false;
        }
        if (1 < (int)*param_1) break;
        if (*param_1 == 0) {
          LOCK();
          uVar7 = *param_1;
          if (uVar7 == 0) {
            *param_1 = 1;
            uVar7 = 0;
          }
          UNLOCK();
          if (uVar7 == 0) {
            DVar3 = GetCurrentThreadId();
            param_1[2] = DVar3;
            param_1[1] = 1;
            return true;
          }
        }
        FUN_004054dc(&local_14);
      }
      if (param_2 != 0xffffffff) {
        DVar4 = GetTickCount();
        if (param_2 <= DVar4 - DVar3) {
          return false;
        }
        param_2 = param_2 - (DVar4 - DVar3);
      }
    }
    while (uVar7 = *param_1, uVar7 != 0) {
      LOCK();
      uVar5 = *param_1;
      if (uVar7 == uVar5) {
        *param_1 = uVar7 + 2;
        uVar5 = uVar7;
      }
      UNLOCK();
      if (uVar7 == uVar5) goto LAB_00405900;
    }
  } while( true );
LAB_00405900:
  DVar3 = GetTickCount();
  iVar6 = FUN_00405a24((int)param_1);
  iVar6 = (**(code **)(DAT_004298f4 + 0x10))(0,iVar6,param_2);
  bVar9 = iVar6 == 0;
  if (param_2 != 0xffffffff) {
    DVar4 = GetTickCount();
    if (DVar4 - DVar3 < param_2) {
      param_2 = param_2 - (DVar4 - DVar3);
    }
    else {
      param_2 = 0;
    }
  }
  if (bVar9) {
    do {
      uVar8 = *param_1;
      if ((uVar8 & 1) != 0) goto LAB_00405989;
      LOCK();
      uVar7 = *param_1;
      if (uVar8 == uVar7) {
        *param_1 = uVar8 - 2 | 1;
        uVar7 = uVar8;
      }
      UNLOCK();
    } while (uVar8 != uVar7);
    bVar1 = true;
  }
  else {
    do {
      uVar7 = *param_1;
      LOCK();
      uVar8 = *param_1;
      if (uVar7 == uVar8) {
        *param_1 = uVar7 - 2;
        uVar8 = uVar7;
      }
      UNLOCK();
    } while (uVar7 != uVar8);
    bVar1 = true;
  }
LAB_00405989:
  if (bVar1) {
    if (bVar9) {
      DVar3 = GetCurrentThreadId();
      param_1[2] = DVar3;
      param_1[1] = 1;
    }
    return bVar9;
  }
  goto LAB_00405900;
}


