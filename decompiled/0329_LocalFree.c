/*
 * Function: LocalFree
 * Address: 0040adbc
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


