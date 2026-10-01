/*
 * Function: FUN_00403334
 * Address: 00403334
 * Size: 651 bytes
 * Calling Convention: __register
 */

int FUN_00403334(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  BOOL BVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *lpAddress;
  int iVar9;
  bool bVar10;
  uint local_20;
  DWORD DStack_18;
  
  puVar7 = (undefined4 *)param_1[-1];
  if (((uint)puVar7 & 7) != 0) {
    if (((uint)puVar7 & 5) != 0) {
      if (((uint)puVar7 & 3) != 0) {
        return -1;
      }
      lpAddress = param_1 + -4;
      FUN_00402d10();
      iVar3 = *lpAddress;
      piVar4 = (int *)param_1[-3];
      if ((param_1[-1] & 8) == 0) {
        BVar5 = VirtualFree(lpAddress,0,0x8000);
        if (BVar5 == 0) {
          iVar9 = -1;
        }
        else {
          iVar9 = 0;
        }
      }
      else {
        uVar8 = param_1[-1] & 0xfffffff0;
        iVar9 = 0;
        while( true ) {
          VirtualQuery(lpAddress,(PMEMORY_BASIC_INFORMATION)&stack0xffffffd4,0x1c);
          BVar5 = VirtualFree(lpAddress,0,0x8000);
          if (BVar5 == 0) break;
          if (uVar8 <= local_20) goto LAB_00402e3b;
          uVar8 = uVar8 - local_20;
          lpAddress = (int *)((int)lpAddress + local_20);
        }
        iVar9 = -1;
      }
LAB_00402e3b:
      if (iVar9 == 0) {
        *piVar4 = iVar3;
        *(int **)(iVar3 + 4) = piVar4;
      }
      DAT_0042bb74 = 0;
      return iVar9;
    }
    goto LAB_00403435;
  }
  pcVar2 = (char *)*puVar7;
  if (DAT_00429055 != '\0') {
    while( true ) {
      do {
        LOCK();
        cVar1 = *pcVar2;
        if (cVar1 == '\0') {
          *pcVar2 = '\x01';
        }
        UNLOCK();
        if (cVar1 == '\0') goto LAB_0040334f;
      } while (DAT_00429985 != '\0');
      Sleep(0);
      LOCK();
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        *pcVar2 = '\x01';
      }
      UNLOCK();
      if (cVar1 == '\0') break;
      Sleep(10);
    }
  }
LAB_0040334f:
  piVar4 = puVar7 + 5;
  *piVar4 = *piVar4 + -1;
  iVar3 = puVar7[4];
  if (*piVar4 != 0) {
    puVar7[4] = param_1;
    param_1[-1] = iVar3 + 1;
    if (iVar3 == 0) {
      iVar3 = *(int *)(pcVar2 + 8);
      puVar7[3] = pcVar2;
      puVar7[2] = iVar3;
      *(undefined4 **)(iVar3 + 0xc) = puVar7;
      *(undefined4 **)(pcVar2 + 8) = puVar7;
      *pcVar2 = '\0';
      return 0;
    }
    *pcVar2 = '\0';
    return 0;
  }
  if (iVar3 == 0) {
LAB_0040339b:
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
  }
  else {
    iVar3 = puVar7[3];
    iVar9 = puVar7[2];
    *(int *)(iVar3 + 8) = iVar9;
    *(int *)(iVar9 + 0xc) = iVar3;
    if (*(undefined4 **)(pcVar2 + 0x18) == puVar7) goto LAB_0040339b;
  }
  *pcVar2 = '\0';
  param_1 = puVar7;
  puVar7 = (undefined4 *)puVar7[-1];
LAB_00403435:
  uVar8 = (uint)puVar7 & 0xfffffff0;
  if (DAT_00429055 != '\0') {
    while( true ) {
      do {
        LOCK();
        bVar10 = DAT_00429ae4 == '\0';
        if (bVar10) {
          DAT_00429ae4 = '\x01';
        }
        UNLOCK();
        if (bVar10) goto LAB_00403441;
      } while (DAT_00429985 != '\0');
      Sleep(0);
      LOCK();
      bVar10 = DAT_00429ae4 == '\0';
      if (bVar10) {
        DAT_00429ae4 = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      Sleep(10);
    }
  }
LAB_00403441:
  uVar6 = *(uint *)((uVar8 - 4) + (int)param_1);
  if ((*(uint *)((uVar8 - 4) + (int)param_1) & 1) == 0) {
    *(uint *)((uVar8 - 4) + (int)param_1) = uVar6 | 8;
  }
  else {
    puVar7 = (undefined4 *)(uVar8 + (int)param_1);
    uVar6 = uVar6 & 0xfffffff0;
    uVar8 = uVar8 + uVar6;
    if (0xb2f < uVar6) {
      FUN_00402b88(puVar7);
    }
  }
  if ((*(byte *)(param_1 + -1) & 8) != 0) {
    uVar6 = param_1[-2];
    param_1 = (undefined4 *)((int)param_1 - uVar6);
    uVar8 = uVar8 + uVar6;
    if (0xb2f < uVar6) {
      FUN_00402b88(param_1);
    }
  }
  if (uVar8 == 0x13ffe0) {
    if (DAT_00429aec != 0x13ffe0) {
      FUN_00402c28();
      param_1[0x4fff7] = 2;
      DAT_00429aec = 0x13ffe0;
      DAT_00429ae8 = param_1 + 0x4fff8;
      DAT_00429ae4 = 0;
      return 0;
    }
    iVar3 = param_1[-4];
    piVar4 = (int *)param_1[-3];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    DAT_00429ae4 = 0;
    DStack_18 = 0x4034e1;
    BVar5 = VirtualFree(param_1 + -4,0,0x8000);
    return -(uint)(BVar5 == 0);
  }
  param_1[-1] = uVar8 + 3;
  *(uint *)((uVar8 - 8) + (int)param_1) = uVar8;
  FUN_00402bc8(param_1,uVar8);
  DAT_00429ae4 = 0;
  return 0;
}


