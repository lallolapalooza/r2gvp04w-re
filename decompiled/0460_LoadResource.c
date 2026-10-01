/*
 * Function: LoadResource
 * Address: 0040bfa8
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}


