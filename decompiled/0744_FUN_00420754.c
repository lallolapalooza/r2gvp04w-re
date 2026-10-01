/*
 * Function: FUN_00420754
 * Address: 00420754
 * Size: 224 bytes
 * Calling Convention: __register
 */

void FUN_00420754(int *param_1)

{
  char cVar1;
  LPCWSTR pWVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  int *piVar5;
  LPSECURITY_ATTRIBUTES p_Var6;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  longlong *local_18;
  int local_14;
  int local_10;
  longlong *local_c;
  longlong *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  local_c = (longlong *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = (longlong *)0x0;
  puStack_28 = &LAB_00420834;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0041bf8c((int *)&local_8);
  piVar5 = (int *)0x42077d;
  cVar1 = FUN_0041c47c();
  if (cVar1 != '\0') {
    FUN_0041bf34((int *)&local_c);
    FUN_0041b87c(local_c,(int *)&local_18);
    FUN_004073a8(&local_10,local_18,(longlong *)L"TempInst");
    p_Var6 = (LPSECURITY_ATTRIBUTES)0x0;
    pWVar2 = (LPCWSTR)FUN_004071e4(local_10);
    BVar3 = CreateDirectoryW(pWVar2,p_Var6);
    if (BVar3 == 0) {
      piVar5 = (int *)0x4207ce;
      DVar4 = GetLastError();
      if (DVar4 == 0xb7) {
        piVar5 = &local_14;
        FUN_00420638('\0',local_c,L".tmp",piVar5);
        p_Var6 = (LPSECURITY_ATTRIBUTES)0x0;
        pWVar2 = (LPCWSTR)FUN_004071e4(local_14);
        BVar3 = CreateDirectoryW(pWVar2,p_Var6);
        if (BVar3 != 0) {
          RemoveDirectoryW(pWVar2);
          FUN_00406e44((int *)&local_8,local_10);
        }
      }
    }
    else {
      piVar5 = (int *)0x4207c7;
      FUN_00406e44((int *)&local_8,local_10);
    }
  }
  FUN_00406dfc(param_1,local_8);
  *in_FS_OFFSET = piVar5;
  puStack_28 = &LAB_0042083b;
  uStack_2c = 0x420833;
  FUN_00406b88((int *)&local_18,5);
  return;
}


