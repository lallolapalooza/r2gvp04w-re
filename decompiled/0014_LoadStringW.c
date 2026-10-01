/*
 * Function: LoadStringW
 * Address: 004027c0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

int __stdcall LoadStringW(HINSTANCE hInstance,UINT uID,LPWSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004027c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringW(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}


