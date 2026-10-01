/*
 * Function: GetSystemDirectoryW
 * Address: 0040be98
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

UINT __stdcall GetSystemDirectoryW(LPWSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemDirectoryW(lpBuffer,uSize);
  return UVar1;
}


