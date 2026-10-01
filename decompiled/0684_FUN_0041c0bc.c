/*
 * Function: FUN_0041c0bc
 * Address: 0041c0bc
 * Size: 310 bytes
 * Calling Convention: __register
 */

void FUN_0041c0bc(HKEY param_1,LPCWSTR param_2,int *param_3,DWORD param_4,DWORD param_5)

{
  LSTATUS LVar1;
  LPBYTE lpData;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  DWORD *lpcbData;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  DWORD local_18;
  DWORD local_14;
  int *local_10;
  LPCWSTR local_c;
  longlong *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_2c = &LAB_0041c1f2;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_10 = param_3;
  local_c = param_2;
  while( true ) {
    local_18 = 0;
    LVar1 = RegQueryValueExW(param_1,local_c,(LPDWORD)0x0,&local_14,(LPBYTE)0x0,&local_18);
    if ((LVar1 != 0) || ((local_14 != param_5 && (local_14 != param_4)))) goto LAB_0041c1dc;
    if (local_18 == 0) break;
    if (0x6fffffff < local_18) {
      FUN_00418abc();
    }
    FUN_00406c80((int *)&local_8,(longlong *)0x0,local_18 + 1 >> 1);
    lpcbData = &local_18;
    lpData = (LPBYTE)thunk_FUN_00406f14((int *)&local_8);
    LVar1 = RegQueryValueExW(param_1,local_c,(LPDWORD)0x0,&local_14,lpData,lpcbData);
    if (LVar1 != 0xea) {
      if ((LVar1 == 0) && ((local_14 == param_5 || (local_14 == param_4)))) {
        uVar3 = local_18 >> 1;
        while ((uVar3 != 0 && (*(short *)((int)local_8 + uVar3 * 2 + -2) == 0))) {
          uVar3 = uVar3 - 1;
        }
        if ((local_14 == 7) && (uVar3 != 0)) {
          uVar3 = uVar3 + 1;
        }
        FUN_004072d0((int *)&local_8,uVar3);
        if ((local_14 == 7) && (uVar3 != 0)) {
          iVar2 = thunk_FUN_00406f14((int *)&local_8);
          *(undefined2 *)(iVar2 + -2 + uVar3 * 2) = 0;
        }
        FUN_00406dfc(local_10,local_8);
      }
LAB_0041c1dc:
      *in_FS_OFFSET = uStack_30;
      puStack_28 = &LAB_0041c1f9;
      puStack_2c = (undefined1 *)0x41c1f1;
      FUN_00406b28((int *)&local_8);
      return;
    }
  }
  FUN_00406b28(local_10);
  goto LAB_0041c1dc;
}


