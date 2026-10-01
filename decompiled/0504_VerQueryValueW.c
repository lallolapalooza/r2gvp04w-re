/*
 * Function: VerQueryValueW
 * Address: 0040c1b8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall VerQueryValueW(LPCVOID pBlock,LPCWSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueW(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}


