/*
 * Function: GetFileAttributesW
 * Address: 0040bcf0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

DWORD __stdcall GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}


