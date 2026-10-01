/*
 * Function: FUN_00409234
 * Address: 00409234
 * Size: 200 bytes
 * Calling Convention: __register
 */

void FUN_00409234(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  longlong *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = (longlong *)0x0;
  puStack_20 = (undefined1 *)0x409254;
  local_c = param_2;
  local_8 = param_1;
  FUN_00406c0c(param_1);
  puStack_20 = (undefined1 *)0x40925c;
  FUN_00406c0c(local_c);
  puStack_24 = &LAB_004092fc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00406b28(param_3);
  if (local_c != 0) {
    FUN_00406e44((int *)&local_14,local_c);
    iVar1 = 0;
    if (local_c != 0) {
      iVar1 = *(int *)(local_c + -4);
    }
    if (0 < iVar1) {
      do {
        if (*(short *)(local_c + -2 + iVar1 * 2) == 0x2e) {
          FUN_004074e0(local_c,1,iVar1,(int *)&local_14);
          break;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00409024(local_8,&local_10);
    if (local_10 == 0) {
      FUN_00406b28(param_3);
    }
    else {
      FUN_00409150(local_14,local_10,param_3);
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00409303;
  puStack_24 = (undefined1 *)0x4092fb;
  FUN_00406b88((int *)&local_14,4);
  return;
}


