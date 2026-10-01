/*
 * Function: SysAllocStringLen
 * Address: 00402890
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BSTR __stdcall SysAllocStringLen(OLECHAR *strIn,UINT ui)

{
  BSTR pOVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = SysAllocStringLen(strIn,ui);
  return pOVar1;
}


