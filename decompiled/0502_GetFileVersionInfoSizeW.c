/*
 * Function: GetFileVersionInfoSizeW
 * Address: 0040c1a0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall GetFileVersionInfoSizeW(LPCWSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeW(lptstrFilename,lpdwHandle);
  return DVar1;
}


