/*
 * Function: FUN_004084dc
 * Address: 004084dc
 * Size: 655 bytes
 * Calling Convention: __register
 */

void FUN_004084dc(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  int *local_28;
  int *local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_24 = (int *)*param_1;
  iVar1 = *param_4;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      FUN_004045f4(4);
    }
    FUN_004088c8(local_8,local_c);
  }
  else {
    iVar6 = 0;
    if (local_24 != (int *)0x0) {
      iVar6 = local_24[-1];
      local_24 = local_24 + -2;
    }
    iVar5 = (uint)*(byte *)(param_2 + 1) + param_2;
    local_1c = *(int *)(iVar5 + 2);
    puVar2 = *(undefined4 **)(iVar5 + 6);
    if (puVar2 == (undefined4 *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = (char *)*puVar2;
    }
    iVar5 = iVar1 * local_1c;
    if (iVar5 / iVar1 != local_1c) {
      FUN_004045f4(4);
    }
    iVar5 = iVar5 + 8;
    if (iVar5 < 0) {
      FUN_004045f4(4);
    }
    if ((local_24 == (int *)0x0) || (*local_24 == 1)) {
      local_28 = local_24;
      if (local_20 == (char *)0x0) {
        FUN_004044ec((int *)&local_28,iVar5);
      }
      else {
        cVar3 = FUN_00408498(local_20);
        if (cVar3 == '\0') {
          if (iVar1 < iVar6) {
            thunk_FUN_00407970((int *)((int)local_24 + iVar1 * local_1c + 8),local_20,iVar6 - iVar1)
            ;
          }
          FUN_004044ec((int *)&local_28,iVar5);
        }
        else {
          local_18 = iVar6;
          if (iVar1 < iVar6) {
            local_18 = iVar1;
          }
          local_28 = (int *)FUN_004044b8(iVar5);
          FUN_004048f8((double *)(local_28 + 2),local_18 * local_1c,0);
          if (local_24 != (int *)0x0) {
            puStack_3c = (undefined1 *)0x4085eb;
            FUN_00408008((longlong *)(local_28 + 2),(longlong *)(local_24 + 2),local_20,local_18);
            if (iVar1 < iVar6) {
              thunk_FUN_00407970((int *)((int)local_24 + iVar1 * local_1c + 8),local_20,
                                 iVar6 - iVar1);
            }
            FUN_004044d4((int)local_24);
          }
        }
      }
      local_24 = local_28;
    }
    else {
      local_24 = (int *)FUN_004044b8(iVar5);
      local_18 = iVar6;
      if (iVar1 < iVar6) {
        local_18 = iVar1;
      }
      if (local_20 == (char *)0x0) {
        FUN_0040465c((longlong *)*local_8,(longlong *)(local_24 + 2),local_18 * local_1c);
      }
      else {
        FUN_004048f8((double *)(local_24 + 2),local_18 * local_1c,0);
        puStack_3c = (undefined1 *)0x408695;
        FUN_00408120();
      }
      FUN_004088c8(local_8,local_c);
    }
    *local_24 = 1;
    local_24[1] = iVar1;
    local_24 = local_24 + 2;
    if (((iVar6 < iVar1) &&
        (FUN_004048f8((double *)(local_1c * iVar6 + (int)local_24),(iVar1 - iVar6) * local_1c,0),
        local_20 != (char *)0x0)) && (uVar4 = FUN_00407850(local_20), (char)uVar4 != '\0')) {
      FUN_00408234((int)(iVar6 * local_1c + (int)local_24),local_20,iVar1 - iVar6);
    }
    if (1 < local_10) {
      local_10 = local_10 + -1;
      local_14 = 0;
      puStack_3c = &LAB_0040875a;
      uStack_40 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_40;
      if (0 < iVar1) {
        do {
          FUN_004084dc(local_24 + local_14,(int)local_20,local_10,param_4 + 1);
          local_14 = local_14 + 1;
        } while (local_14 < iVar1);
      }
      *in_FS_OFFSET = uStack_40;
    }
    *local_8 = (int)local_24;
  }
  return;
}


