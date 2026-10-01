/*
 * Function: FUN_00407c88
 * Address: 00407c88
 * Size: 552 bytes
 * Calling Convention: __register
 */

void FUN_00407c88(int param_1,int param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  BSTR *ppOVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_20;
  uint local_14;
  
  bVar1 = param_3[1];
  if (*param_3 == '\x16') {
    FUN_00407abc(param_1,param_2,param_3);
    FUN_004078e0(param_2,param_3);
  }
  else {
    uVar9 = 0;
    local_14 = *(uint *)(param_3 + bVar1 + 6);
    if (local_14 != 0) {
      iVar8 = local_14 - 1;
      do {
        if (*(int *)(param_3 + iVar8 * 8 + bVar1 + 10) == 0) {
          local_14 = local_14 - 1;
          uVar6 = iVar8 + 1;
          break;
        }
        iVar8 = iVar8 + -1;
        uVar6 = local_14;
      } while (iVar8 != -1);
      local_20 = 0;
      do {
        if ((*(int *)(param_3 + local_20 * 8 + bVar1 + 10) == 0) ||
           ((uVar6 != *(uint *)(param_3 + bVar1 + 6) &&
            (*(uint *)(param_3 + uVar6 * 8 + bVar1 + 0xe) <=
             *(uint *)(param_3 + local_20 * 8 + bVar1 + 0xe))))) {
          uVar7 = uVar6 + 1;
        }
        else {
          uVar7 = uVar6;
          uVar6 = local_20;
          local_20 = local_20 + 1;
        }
        if (uVar9 < *(uint *)(param_3 + uVar6 * 8 + bVar1 + 0xe)) {
          FUN_0040465c((longlong *)(param_2 + uVar9),(longlong *)(param_1 + uVar9),
                       *(uint *)(param_3 + uVar6 * 8 + bVar1 + 0xe) - uVar9);
        }
        uVar9 = *(uint *)(param_3 + uVar6 * 8 + bVar1 + 0xe);
        pcVar3 = (char *)**(undefined4 **)(param_3 + uVar6 * 8 + bVar1 + 10);
        ppOVar4 = (BSTR *)(param_1 + uVar9);
        plVar5 = (longlong *)(param_2 + uVar9);
        switch(*pcVar3) {
        case '\n':
          FUN_00406e98((int *)ppOVar4,*(longlong **)plVar5);
          FUN_00406b4c((int *)plVar5);
          uVar9 = uVar9 + 4;
          break;
        case '\v':
          FUN_00406e70(ppOVar4,*(OLECHAR **)plVar5);
          FUN_00406b70((undefined4 *)plVar5);
          uVar9 = uVar9 + 4;
          break;
        case '\f':
          FUN_00407a98((char)ppOVar4,plVar5);
          FUN_00407958();
          uVar9 = uVar9 + 0x10;
          break;
        case '\r':
          bVar2 = pcVar3[1];
          FUN_00408008((longlong *)ppOVar4,plVar5,(char *)**(undefined4 **)(pcVar3 + bVar2 + 10),
                       *(int *)(pcVar3 + bVar2 + 6));
          uVar9 = uVar9 + *(int *)(pcVar3 + bVar2 + 2);
          break;
        case '\x0e':
        case '\x16':
          bVar2 = pcVar3[1];
          FUN_00407c88((int)ppOVar4,(int)plVar5,pcVar3);
          uVar9 = uVar9 + *(int *)(pcVar3 + bVar2 + 2);
          break;
        case '\x0f':
          if (local_20 < uVar6) {
            FUN_0040a8cc((int *)ppOVar4,*(int **)plVar5);
            FUN_0040a8a0((int *)plVar5);
          }
          else {
            FUN_00409588((int *)ppOVar4,*(int **)plVar5);
            FUN_00409570((int *)plVar5);
          }
          uVar9 = uVar9 + 4;
          break;
        default:
          FUN_004045f4(2);
          break;
        case '\x11':
          FUN_0040890c((int *)ppOVar4,(int)*plVar5,(int)pcVar3);
          FUN_004088c8((int *)plVar5,(int)pcVar3);
          uVar9 = uVar9 + 4;
          break;
        case '\x12':
          FUN_00406dfc((int *)ppOVar4,*(longlong **)plVar5);
          FUN_00406b28((int *)plVar5);
          uVar9 = uVar9 + 4;
        }
        local_14 = local_14 - 1;
        uVar6 = uVar7;
      } while (local_14 != 0);
    }
    if (uVar9 < *(uint *)(param_3 + bVar1 + 2)) {
      FUN_0040465c((longlong *)(param_2 + uVar9),(longlong *)(param_1 + uVar9),
                   *(uint *)(param_3 + bVar1 + 2) - uVar9);
    }
  }
  return;
}


