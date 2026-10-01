/*
 * Function: FUN_0040352c
 * Address: 0040352c
 * Size: 1107 bytes
 * Calling Convention: __register
 */

undefined4 * FUN_0040352c(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  LPCVOID lpAddress;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint local_20;
  DWORD in_stack_ffffffe4;
  
  piVar1 = (int *)param_1[-1];
  if (((uint)piVar1 & 7) == 0) {
    iVar2 = *piVar1;
    uVar5 = *(ushort *)(iVar2 + 2) - 4;
    if (uVar5 < param_2) {
      uVar5 = *(ushort *)(iVar2 + 2) + 0x1c + uVar5;
      puVar4 = FUN_00402fb0(((uVar5 < param_2) - 1 & uVar5 - param_2) + param_2);
      if (puVar4 != (undefined4 *)0x0) {
        if (0x40a2c < param_2) {
          puVar4[-2] = param_2;
        }
        (**(code **)(iVar2 + 0x1c))(param_1,puVar4,*(ushort *)(iVar2 + 2) - 4);
        FUN_00403334(param_1);
      }
      return puVar4;
    }
    if (uVar5 <= param_2 * 4 + 0x40) {
      return param_1;
    }
    puVar4 = FUN_00402fb0(param_2);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00402b6c((int)param_1,(int)puVar4,param_2);
      FUN_00403334(param_1);
    }
    return puVar4;
  }
  if (((uint)piVar1 & 5) != 0) {
    if (((uint)piVar1 & 3) != 0) {
      return (undefined4 *)0x0;
    }
    uVar5 = (param_1[-1] & 0xfffffff0) - 0x14;
    if (uVar5 < param_2) {
      uVar8 = (uVar5 >> 2) + uVar5;
      uVar6 = param_2;
      if (param_2 < uVar8) {
        uVar6 = uVar8;
      }
      lpAddress = (LPCVOID)((int)param_1 + ((param_1[-1] & 0xfffffff0) - 0x10));
      VirtualQuery(lpAddress,(PMEMORY_BASIC_INFORMATION)&stack0xffffffd4,0x1c);
      if ((in_stack_ffffffe4 == 0x10000) &&
         (local_20 = local_20 & 0xffff0000, param_2 - uVar5 < local_20)) {
        uVar5 = (uVar6 - uVar5) + 0xffff & 0xffff0000;
        if (local_20 < uVar5) {
          uVar5 = local_20;
        }
        pvVar3 = VirtualAlloc(lpAddress,uVar5,0x2000,4);
        if ((pvVar3 != (LPVOID)0x0) &&
           (pvVar3 = VirtualAlloc(lpAddress,uVar5,0x1000,4), pvVar3 != (LPVOID)0x0)) {
          param_1[-2] = param_2;
          param_1[-1] = uVar5 + param_1[-1] | 8;
          return param_1;
        }
      }
      puVar4 = FUN_00402fb0(uVar6);
      if (puVar4 != (undefined4 *)0x0) {
        if (0x40a2c < uVar6) {
          puVar4[-2] = param_2;
        }
        FUN_00402b3c((int)param_1,(int)puVar4,param_1[-2]);
        FUN_00403334(param_1);
      }
    }
    else if (param_2 < uVar5 >> 1) {
      puVar4 = FUN_00402fb0(param_2);
      if (puVar4 != (undefined4 *)0x0) {
        if (0x40a2c < param_2) {
          param_1[-2] = param_2;
        }
        FUN_00402b6c((int)param_1,(int)puVar4,param_2);
        FUN_00403334(param_1);
      }
    }
    else {
      param_1[-2] = param_2;
      puVar4 = param_1;
    }
    return puVar4;
  }
  uVar6 = (uint)piVar1 & 0xfffffff0;
  puVar4 = (undefined4 *)(uVar6 + (int)param_1);
  uVar5 = uVar6 - 4;
  uVar8 = (uint)piVar1 & 0xf;
  if (param_2 <= uVar5) {
    if (uVar5 <= param_2 * 2) {
      return param_1;
    }
    if (param_2 < 0xb2c) {
      if (param_2 < 0x2cc) {
        puVar4 = FUN_00402fb0(param_2);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00402b6c((int)param_1,(int)puVar4,param_2);
          FUN_00403334(param_1);
        }
        return puVar4;
      }
      param_2 = 0xb2c;
      if (uVar5 < 0xb2d) {
        return param_1;
      }
    }
    uVar5 = param_2 + 0xd3 & 0xffffff00;
    uVar9 = uVar5 + 0x30;
    uVar6 = uVar6 - uVar9;
    if (DAT_00429055 != '\0') {
      while( true ) {
        do {
          LOCK();
          bVar11 = DAT_00429ae4 == '\0';
          if (bVar11) {
            DAT_00429ae4 = '\x01';
          }
          UNLOCK();
          if (bVar11) goto LAB_0040366c;
        } while (DAT_00429985 != '\0');
        Sleep(0);
        LOCK();
        bVar11 = DAT_00429ae4 == '\0';
        if (bVar11) {
          DAT_00429ae4 = '\x01';
        }
        UNLOCK();
        if (bVar11) break;
        Sleep(10);
      }
LAB_0040366c:
      uVar8 = param_1[-1] & 0xf;
    }
    param_1[-1] = uVar8 | uVar9;
    uVar8 = puVar4[-1];
    if ((uVar8 & 1) == 0) {
      puVar4[-1] = uVar8 | 8;
      puVar10 = puVar4;
    }
    else {
      uVar8 = uVar8 & 0xfffffff0;
      uVar6 = uVar6 + uVar8;
      puVar10 = (undefined4 *)((int)puVar4 + uVar8);
      if (0xb2f < uVar8) {
        FUN_00402b88(puVar4);
      }
    }
    puVar10[-2] = uVar6;
    *(uint *)((int)param_1 + uVar5 + 0x2c) = uVar6 + 3;
    if (0xb2f < uVar6) {
      FUN_00402bc8((undefined4 *)((int)param_1 + uVar9),uVar6);
    }
    DAT_00429ae4 = 0;
    return param_1;
  }
  if ((puVar4[-1] & 1) != 0) {
    uVar9 = puVar4[-1] & 0xfffffff0;
    uVar6 = uVar5 + uVar9;
    if (param_2 <= uVar6) {
      if (DAT_00429055 == '\0') {
LAB_00403771:
        if (0xb2f < uVar9) {
          FUN_00402b88(puVar4);
        }
        uVar5 = (uVar5 >> 2) + uVar5;
        uVar5 = param_2 + 0xd3 + (uVar5 - param_2 & (uVar5 < param_2) - 1) & 0xffffff00;
        uVar9 = uVar5 + 0x30;
        uVar7 = (uVar6 + 4) - uVar9;
        if (uVar6 + 4 < uVar9 || uVar7 == 0) {
          *(uint *)((int)param_1 + uVar6) = *(uint *)((int)param_1 + uVar6) & 0xfffffff7;
          uVar9 = uVar6 + 4;
        }
        else {
          *(uint *)((int)param_1 + (uVar6 - 4)) = uVar7;
          *(uint *)(uVar5 + 0x2c + (int)param_1) = uVar7 + 3;
          if (0xb2f < uVar7) {
            FUN_00402bc8((undefined4 *)(uVar9 + (int)param_1),uVar7);
          }
        }
        param_1[-1] = uVar9 | uVar8;
        DAT_00429ae4 = 0;
        return param_1;
      }
      while( true ) {
        do {
          LOCK();
          bVar11 = DAT_00429ae4 == '\0';
          if (bVar11) {
            DAT_00429ae4 = '\x01';
          }
          UNLOCK();
          if (bVar11) goto LAB_00403758;
        } while (DAT_00429985 != '\0');
        local_20 = 0x403739;
        Sleep(0);
        LOCK();
        bVar11 = DAT_00429ae4 == '\0';
        if (bVar11) {
          DAT_00429ae4 = '\x01';
        }
        UNLOCK();
        if (bVar11) break;
        local_20 = 0x403753;
        Sleep(10);
      }
LAB_00403758:
      uVar8 = param_1[-1] & 0xf;
      if ((puVar4[-1] & 1) != 0) {
        uVar9 = puVar4[-1] & 0xfffffff0;
        uVar6 = uVar5 + uVar9;
        if (param_2 <= uVar6) goto LAB_00403771;
      }
      DAT_00429ae4 = '\0';
    }
  }
  uVar6 = (uVar5 >> 2) + uVar5;
  uVar6 = (uVar6 - param_2 & (uVar6 < param_2) - 1) + param_2;
  puVar4 = FUN_00402fb0(uVar6);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (0x40a2c < uVar6) {
    puVar4[-2] = param_2;
  }
  FUN_00402b3c((int)param_1,(int)puVar4,uVar5);
  FUN_00403334(param_1);
  return puVar4;
}


