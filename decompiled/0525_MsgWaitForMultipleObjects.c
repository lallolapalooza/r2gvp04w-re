/*
 * Function: MsgWaitForMultipleObjects
 * Address: 0040c2d0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall
MsgWaitForMultipleObjects
          (DWORD nCount,HANDLE *pHandles,BOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = MsgWaitForMultipleObjects(nCount,pHandles,fWaitAll,dwMilliseconds,dwWakeMask);
  return DVar1;
}


