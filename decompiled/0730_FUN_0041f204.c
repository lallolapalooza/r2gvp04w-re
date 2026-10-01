/*
 * Function: FUN_0041f204
 * Address: 0041f204
 * Size: 255 bytes
 * Calling Convention: __register
 */

void FUN_0041f204(int param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint local_18;
  int local_14;
  longlong *local_10;
  longlong *local_c;
  longlong *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  local_c = (longlong *)0x0;
  puStack_2c = &LAB_0041f303;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar4 = param_5;
  puVar1 = &stack0xfffffffc;
  local_14 = param_3;
  local_10 = param_2;
  if (0 < param_5) {
    do {
      FUN_0041df50(param_1,(longlong *)&local_18,4);
      iVar3 = (int)local_18 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((local_18 & 1) != 0);
      }
      FUN_004072d0((int *)&local_8,iVar3);
      if (local_18 != 0) {
        plVar2 = (longlong *)thunk_FUN_00406f14((int *)&local_8);
        FUN_0041df50(param_1,plVar2,local_18);
      }
      FUN_00406dfc((int *)param_2,local_8);
      param_2 = (longlong *)((int)param_2 + 4);
      iVar4 = iVar4 + -1;
      puVar1 = puStack_28;
    } while (iVar4 != 0);
  }
  puStack_28 = puVar1;
  iVar4 = param_4;
  if (0 < param_4) {
    do {
      FUN_0041df50(param_1,(longlong *)&local_18,4);
      FUN_004070f8((int *)&local_c,local_18,0);
      if (local_18 != 0) {
        plVar2 = (longlong *)thunk_FUN_00406f58((int *)&local_c);
        FUN_0041df50(param_1,plVar2,local_18);
      }
      FUN_00406e98((int *)param_2,local_c);
      param_2 = (longlong *)((int)param_2 + 4);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0041df50(param_1,param_2,local_14 + (param_5 + param_4) * -4);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0041f30a;
  puStack_2c = (undefined1 *)0x41f2fa;
  FUN_00406b4c((int *)&local_c);
  puStack_2c = (undefined1 *)0x41f302;
  FUN_00406b28((int *)&local_8);
  return;
}


