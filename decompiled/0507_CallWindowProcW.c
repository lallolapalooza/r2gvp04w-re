/*
 * Function: CallWindowProcW
 * Address: 0040c1e0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

LRESULT __stdcall
CallWindowProcW(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallWindowProcW(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return LVar1;
}


