/*
 * Function: FUN_00403c64
 * Address: 00403c64
 * Size: 442 bytes
 * Calling Convention: __register
 */

void FUN_00403c64(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar5;
  int local_2c;
  int *local_28;
  int *local_24;
  char local_1d;
  ushort *local_1c;
  byte *local_18;
  uint local_14;
  int local_10;
  int *local_8;
  
  iVar2 = param_4 + -0x1b800 + (*param_1 - 0x42706cU >> 5) * 0x800;
  local_8 = param_1;
  FUN_00403960(param_1,&local_24,(int *)&local_28);
  do {
    if (local_28 < local_24) {
      return;
    }
    if (((*(byte *)(local_24 + -1) & 1) == 0) &&
       (uVar3 = FUN_00403c0c((int)local_24), (char)uVar3 == '\0')) {
      *(undefined1 *)(param_4 + -0x1b801) = 0;
      iVar5 = 0;
      iVar4 = FUN_00403b30(local_24,extraout_EDX,extraout_ECX);
      if (iVar4 == 0) {
        if (local_24[1] < 0x100) {
          local_10 = local_24[2];
          local_14 = (uint)*(ushort *)((int)local_24 + 2);
          if ((((local_14 == 1) || (local_14 == 2)) && (0 < local_10)) &&
             (local_10 < (int)(*(ushort *)(*local_8 + 2) - 0x10) / (int)local_14)) {
            local_1d = '\x01';
            local_2c = local_10;
            if (local_14 == 1) {
              local_18 = (byte *)(local_24 + 3);
              if (0 < local_10) {
                do {
                  if ((local_1d == '\0') || (*local_18 < 0x20)) {
                    local_1d = '\0';
                  }
                  else {
                    local_1d = '\x01';
                  }
                  local_18 = local_18 + 1;
                  local_2c = local_2c + -1;
                } while (local_2c != 0);
              }
              if ((local_1d != '\0') && (*local_18 == 0)) {
                iVar5 = 1;
              }
            }
            else {
              local_1c = (ushort *)(local_24 + 3);
              if (0 < local_10) {
                do {
                  if ((local_1d == '\0') || (*local_1c < 0x20)) {
                    local_1d = '\0';
                  }
                  else {
                    local_1d = '\x01';
                  }
                  local_1c = local_1c + 1;
                  local_2c = local_2c + -1;
                } while (local_2c != 0);
              }
              if ((local_1d != '\0') && (*local_1c == 0)) {
                iVar5 = 2;
              }
            }
          }
        }
      }
      else {
        iVar5 = 3;
        do {
          if ((iVar4 == *(int *)(iVar2 + iVar5 * 8)) || (*(int *)(iVar2 + iVar5 * 8) == 0)) break;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x100);
        if (iVar5 < 0x100) {
          *(int *)(iVar2 + iVar5 * 8) = iVar4;
        }
        else {
          iVar5 = 0;
        }
      }
      piVar1 = (int *)(iVar2 + 4 + iVar5 * 8);
      *piVar1 = *piVar1 + 1;
    }
    local_24 = (int *)((int)local_24 + (uint)*(ushort *)(*local_8 + 2));
  } while( true );
}


