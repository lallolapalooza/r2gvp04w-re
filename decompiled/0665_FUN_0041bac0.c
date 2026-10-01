/*
 * Function: FUN_0041bac0
 * Address: 0041bac0
 * Size: 102 bytes
 * Calling Convention: __register
 */

void FUN_0041bac0(undefined4 param_1,int *param_2)

{
  LPWSTR pWVar1;
  LPCWSTR lpFileName;
  longlong *in_stack_00000ff0;
  DWORD DVar2;
  WCHAR *lpBuffer;
  LPWSTR *lpFilePart;
  WCHAR aWStack_100c [2046];
  LPWSTR local_10;
  
  pWVar1 = (LPWSTR)0x2;
  do {
    local_10 = pWVar1;
    lpFilePart = &local_10;
    pWVar1 = (LPWSTR)((int)local_10 + -1);
  } while ((LPWSTR)((int)local_10 + -1) != (LPWSTR)0x0);
  lpBuffer = aWStack_100c;
  DVar2 = 0x1000;
  lpFileName = (LPCWSTR)FUN_004071e4((int)in_stack_00000ff0);
  DVar2 = GetFullPathNameW(lpFileName,DVar2,lpBuffer,lpFilePart);
  if (((int)DVar2 < 1) || (0xfff < (int)DVar2)) {
    FUN_00406dfc(param_2,in_stack_00000ff0);
  }
  else {
    FUN_00406c80(param_2,(longlong *)aWStack_100c,DVar2);
  }
  return;
}


