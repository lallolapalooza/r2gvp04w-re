/*
 * Function: GetWindowsDirectoryW
 * Address: 0040bf60
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

UINT __stdcall GetWindowsDirectoryW(LPWSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryW(lpBuffer,uSize);
  return UVar1;
}


