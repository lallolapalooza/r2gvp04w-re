/*
 * Function: FindFirstFileW
 * Address: 00402768
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HANDLE __stdcall FindFirstFileW(LPCWSTR lpFileName,LPWIN32_FIND_DATAW lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileW(lpFileName,lpFindFileData);
  return pvVar1;
}


