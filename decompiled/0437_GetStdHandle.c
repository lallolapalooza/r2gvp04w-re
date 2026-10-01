/*
 * Function: GetStdHandle
 * Address: 0040be80
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


