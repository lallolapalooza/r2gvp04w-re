/*
 * Function: MessageBoxW
 * Address: 0040c2b8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

int __stdcall MessageBoxW(HWND hWnd,LPCWSTR lpText,LPCWSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxW(hWnd,lpText,lpCaption,uType);
  return iVar1;
}


