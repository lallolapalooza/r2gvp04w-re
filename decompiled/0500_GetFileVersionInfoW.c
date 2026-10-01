/*
 * Function: GetFileVersionInfoW
 * Address: 0040c188
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall GetFileVersionInfoW(LPCWSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoW(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}


