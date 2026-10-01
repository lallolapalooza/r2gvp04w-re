/*
 * Function: FUN_004205c0
 * Address: 004205c0
 * Size: 104 bytes
 * Calling Convention: __register
 */

void FUN_004205c0(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  longlong *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_1c = &LAB_00420628;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00406b28(param_2);
  iVar1 = 5;
  do {
    FUN_004071fc((int *)&local_8,
                 (uint)(ushort)u_0123456789ABCDEFGHIJKLMNOPQRSTUV_004283cc[param_1 & 0x1f]);
    FUN_00407528(local_8,param_2,1);
    param_1 = param_1 >> 5;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042062f;
  puStack_1c = (undefined1 *)0x420627;
  FUN_00406b28((int *)&local_8);
  return;
}


