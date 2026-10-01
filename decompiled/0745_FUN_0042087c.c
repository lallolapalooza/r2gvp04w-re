/*
 * Function: FUN_0042087c
 * Address: 0042087c
 * Size: 245 bytes
 * Calling Convention: __register
 */

void FUN_0042087c(int *param_1)

{
  LPCWSTR lpPathName;
  BOOL BVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  longlong **pplVar5;
  longlong **pplVar6;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  longlong *local_10;
  longlong *local_c;
  longlong *local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 4;
  do {
    local_8 = (longlong *)0x0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_00420971;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_10 = (longlong *)0x0;
  while( true ) {
    pplVar6 = &local_8;
    FUN_00420754((int *)&local_c);
    FUN_00420638('\0',local_c,L".tmp",(int *)pplVar6);
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    lpPathName = (LPCWSTR)FUN_004071e4((int)local_8);
    BVar1 = CreateDirectoryW(lpPathName,lpSecurityAttributes);
    if (BVar1 != 0) break;
    DVar2 = GetLastError();
    if (DVar2 != 0xb7) {
      pplVar5 = &local_10;
      FUN_0042028c(CONCAT31((int3)((uint)pplVar5 >> 8),0x36),local_8,(int *)&local_20);
      local_1c = local_20;
      FUN_00415740(&local_24,0,extraout_ECX,DVar2,0);
      FUN_0041c758(DVar2,(int *)&stack0xffffffd8);
      FUN_0042025c(CONCAT31((int3)((uint)pplVar6 >> 8),0x68),(int)&local_1c,2,(int *)pplVar5);
      piVar3 = FUN_00418ac8((int *)PTR_PTR_00412e00,'\x01',local_10);
      FUN_004062cc((int)piVar3);
    }
  }
  FUN_00406dfc(param_1,local_8);
  *in_FS_OFFSET = local_24;
  local_20 = &LAB_00420978;
  local_24 = 0x420963;
  FUN_00406b88((int *)&stack0xffffffd8,3);
  local_24 = 0x420970;
  FUN_00406b88((int *)&local_10,3);
  return;
}


