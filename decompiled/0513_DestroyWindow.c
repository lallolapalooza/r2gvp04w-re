/*
 * Function: DestroyWindow
 * Address: 0040c240
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


