/*
 * Function: FUN_00409150
 * Address: 00409150
 * Size: 214 bytes
 * Calling Convention: __register
 */

void FUN_00409150(longlong *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  longlong *local_18;
  int local_14;
  int *local_10;
  int local_c;
  longlong *local_8;
  
  local_18 = (longlong *)0x0;
  puStack_28 = (undefined1 *)0x40916f;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00406c0c((int)param_1);
  puStack_28 = (undefined1 *)0x409177;
  FUN_00406c0c(local_c);
  puStack_2c = &LAB_00409226;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00406b28(local_10);
  iVar2 = 1;
  while( true ) {
    iVar4 = 0;
    if (local_c != 0) {
      iVar4 = *(int *)(local_c + -4);
    }
    iVar3 = iVar2;
    if (iVar4 < iVar2) break;
    while( true ) {
      iVar4 = 0;
      if (local_c != 0) {
        iVar4 = *(int *)(local_c + -4);
      }
      if ((iVar4 < iVar3) || (*(short *)(local_c + -2 + iVar3 * 2) == 0x2c)) break;
      iVar3 = iVar3 + 1;
    }
    local_14 = iVar2;
    if (iVar3 != iVar2) {
      FUN_004074e0(local_c,iVar2,iVar3 - iVar2,(int *)&local_18);
      FUN_004073a8(local_10,local_8,local_18);
      cVar1 = FUN_004090e4(*local_10);
      if (cVar1 != '\0') goto LAB_00409203;
    }
    iVar2 = iVar3 + 1;
  }
  FUN_00406b28(local_10);
LAB_00409203:
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0040922d;
  puStack_2c = (undefined1 *)0x409218;
  FUN_00406b28((int *)&local_18);
  puStack_2c = (undefined1 *)0x409225;
  FUN_00406b88(&local_c,2);
  return;
}


