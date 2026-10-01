/*
 * Function: FindResourceW
 * Address: 0040bc10
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HRSRC __stdcall FindResourceW(HMODULE hModule,LPCWSTR lpName,LPCWSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceW(hModule,lpName,lpType);
  return pHVar1;
}


