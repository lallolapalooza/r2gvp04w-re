/*
 * Function: SysReAllocStringLen
 * Address: 00402898
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

INT __stdcall SysReAllocStringLen(BSTR *pbstr,OLECHAR *psz,uint len)

{
  INT IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = SysReAllocStringLen(pbstr,psz,len);
  return IVar1;
}


