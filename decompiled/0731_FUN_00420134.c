/*
 * Function: FUN_00420134
 * Address: 00420134
 * Size: 263 bytes
 * Calling Convention: __register
 */

void FUN_00420134(longlong *param_1,int param_2,int param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  ushort *puVar3;
  longlong *plVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  longlong *local_18;
  ushort local_12;
  int local_10;
  int local_c;
  longlong *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = (longlong *)0x0;
  local_8 = (longlong *)0x0;
  puStack_2c = &LAB_0042023b;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_10 = param_3;
  local_c = param_2;
  FUN_00406b28(param_4);
  if (param_1 != (longlong *)0x0) {
    while( true ) {
      plVar1 = (longlong *)thunk_FUN_00415dde((short *)param_1,0x25);
      if (plVar1 == (longlong *)0x0) break;
      plVar4 = param_1;
      if (param_1 != plVar1) {
        iVar2 = (int)plVar1 - (int)param_1 >> 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + (uint)(((int)plVar1 - (int)param_1 & 1U) != 0);
        }
        FUN_00406c80((int *)&local_8,param_1,iVar2);
        FUN_00407350(param_4,local_8);
        plVar4 = plVar1;
      }
      puVar3 = (ushort *)((int)plVar1 + 2);
      local_12 = *puVar3;
      if (((ushort)(local_12 - 0x31) < 9) && ((int)(*puVar3 - 0x31) <= local_10)) {
        FUN_00407350(param_4,*(longlong **)(local_c + -0xc4 + (uint)*puVar3 * 4));
        param_1 = (longlong *)((int)plVar4 + 4);
      }
      else {
        FUN_00407350(param_4,(longlong *)&DAT_00420258);
        param_1 = (longlong *)((int)plVar4 + 2);
        if (*puVar3 == 0x25) {
          param_1 = (longlong *)((int)plVar4 + 4);
        }
      }
    }
    FUN_0040723c((int *)&local_18,param_1);
    FUN_00407350(param_4,local_18);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00420242;
  puStack_2c = (undefined1 *)0x420232;
  FUN_00406b28((int *)&local_18);
  puStack_2c = (undefined1 *)0x42023a;
  FUN_00406b28((int *)&local_8);
  return;
}


