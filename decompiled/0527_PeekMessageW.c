/*
 * Function: PeekMessageW
 * Address: 0040c2e8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall
PeekMessageW(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PeekMessageW(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return BVar1;
}


