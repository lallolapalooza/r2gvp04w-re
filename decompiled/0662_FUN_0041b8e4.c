/*
 * Function: FUN_0041b8e4
 * Address: 0041b8e4
 * Size: 116 bytes
 * Calling Convention: __register
 */

void FUN_0041b8e4(longlong *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  longlong *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (longlong *)0x0;
  puStack_20 = &LAB_0041b958;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  iVar1 = FUN_0041bb28((short *)param_1);
  if (iVar1 == 0) {
    FUN_004073a8(local_8,param_1,param_2);
  }
  else {
    FUN_004074e0((int)param_1,1,iVar1 + -1,(int *)&local_c);
    FUN_004073a8(local_8,local_c,param_2);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041b95f;
  puStack_20 = (undefined1 *)0x41b957;
  FUN_00406b28((int *)&local_c);
  return;
}


