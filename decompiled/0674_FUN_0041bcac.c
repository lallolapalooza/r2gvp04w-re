/*
 * Function: FUN_0041bcac
 * Address: 0041bcac
 * Size: 84 bytes
 * Calling Convention: __register
 */

void FUN_0041bcac(int param_1,int *param_2)

{
  bool bVar1;
  LPWSTR lpBuffer;
  LPCWSTR lpName;
  DWORD DVar2;
  
  FUN_004072d0(param_2,0xff);
  while( true ) {
    DVar2 = 0;
    if (*param_2 != 0) {
      DVar2 = *(DWORD *)(*param_2 + -4);
    }
    lpBuffer = (LPWSTR)FUN_004071e4(*param_2);
    lpName = (LPCWSTR)FUN_004071e4(param_1);
    DVar2 = GetEnvironmentVariableW(lpName,lpBuffer,DVar2);
    if (DVar2 == 0) break;
    bVar1 = FUN_0041c0a0(param_2,DVar2);
    if (bVar1) {
      return;
    }
  }
  FUN_00406b28(param_2);
  return;
}


