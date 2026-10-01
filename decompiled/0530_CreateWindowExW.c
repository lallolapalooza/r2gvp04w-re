/*
 * Function: CreateWindowExW
 * Address: 0040c308
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HWND __stdcall
CreateWindowExW(DWORD dwExStyle,LPCWSTR lpClassName,LPCWSTR lpWindowName,DWORD dwStyle,int X,int Y,
               int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam
               )

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExW(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}


