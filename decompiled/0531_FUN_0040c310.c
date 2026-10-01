/*
 * Function: FUN_0040c310
 * Address: 0040c310
 * Size: 87 bytes
 * Calling Convention: __register
 */

HWND FUN_0040c310(DWORD param_1,LPCWSTR param_2,LPCWSTR param_3,LPVOID param_4,HINSTANCE param_5,
                 HMENU param_6,HWND param_7,int param_8,int param_9,int param_10,int param_11,
                 DWORD param_12)

{
  undefined2 uVar1;
  HWND pHVar2;
  
  uVar1 = FUN_004047e8();
  pHVar2 = CreateWindowExW(param_1,param_2,param_3,param_12,param_11,param_10,param_9,param_8,
                           param_7,param_6,param_5,param_4);
  FUN_004047d8(uVar1);
  return pHVar2;
}


