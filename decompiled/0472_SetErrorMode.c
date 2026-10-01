/*
 * Function: SetErrorMode
 * Address: 0040c038
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

UINT __stdcall SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}


