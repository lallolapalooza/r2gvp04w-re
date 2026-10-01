/*
 * Function: SetWindowLongW
 * Address: 0040c378
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

LONG __stdcall SetWindowLongW(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongW(hWnd,nIndex,dwNewLong);
  return LVar1;
}


