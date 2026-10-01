/*
 * Function: FUN_0040aa98
 * Address: 0040aa98
 * Size: 130 bytes
 * Calling Convention: __register
 */

void FUN_0040aa98(byte *param_1,int *param_2)

{
  LPWSTR pWVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  longlong *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_1c = &LAB_0040ab1a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00406b28(param_2);
  if (*param_1 != 0) {
    uVar3 = (uint)*param_1;
    FUN_004072d0((int *)&local_8,uVar3);
    uVar2 = uVar3;
    pWVar1 = (LPWSTR)FUN_004071e4((int)local_8);
    uVar2 = FUN_0040a9d0(pWVar1,uVar3 + 1,(LPCSTR)(param_1 + 1),uVar2);
    if ((int)uVar2 < 1) {
      FUN_00406b28((int *)&local_8);
    }
    else {
      FUN_004072d0((int *)&local_8,uVar2 - 1);
    }
    FUN_00406dfc(param_2,local_8);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040ab21;
  puStack_1c = (undefined1 *)0x40ab19;
  FUN_00406b28((int *)&local_8);
  return;
}


