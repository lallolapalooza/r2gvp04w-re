/*
 * Function: FUN_00419bec
 * Address: 00419bec
 * Size: 249 bytes
 * Calling Convention: __register
 */

void FUN_00419bec(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  LPCWSTR pWVar1;
  DWORD dwLen;
  LPVOID lpData;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  DWORD *lpdwHandle;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  uint local_1c;
  LPVOID local_18;
  LPVOID local_14;
  DWORD local_10;
  undefined1 local_9;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  puStack_30 = &LAB_00419cec;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_9 = 0;
  FUN_00406e44(&local_8,param_1);
  thunk_FUN_00406f14(&local_8);
  lpdwHandle = &local_10;
  pWVar1 = (LPCWSTR)FUN_004071e4(local_8);
  uStack_40 = 0x419c36;
  dwLen = GetFileVersionInfoSizeW(pWVar1,lpdwHandle);
  if (dwLen != 0) {
    lpData = (LPVOID)FUN_004044b8(dwLen);
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    local_14 = lpData;
    pWVar1 = (LPCWSTR)FUN_004071e4(local_8);
    BVar2 = GetFileVersionInfoW(pWVar1,local_10,dwLen,lpData);
    if (BVar2 != 0) {
      BVar2 = VerQueryValueW(local_14,L"\\",&local_18,&local_1c);
      if (BVar2 != 0) {
        *param_2 = *(uint *)((int)local_18 + 0x10) >> 0x10;
        *param_3 = (uint)*(ushort *)((int)local_18 + 0x10);
        *param_4 = *(uint *)((int)local_18 + 0x14) >> 0x10;
        local_9 = 1;
      }
    }
    *in_FS_OFFSET = uStack_40;
    FUN_004044d4((int)local_14);
    return;
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00419cf3;
  puStack_30 = (undefined1 *)0x419ceb;
  FUN_00406b28(&local_8);
  return;
}


