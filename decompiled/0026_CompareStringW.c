/*
 * Function: CompareStringW
 * Address: 00402820
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

int __stdcall
CompareStringW(LCID Locale,DWORD dwCmpFlags,PCNZWCH lpString1,int cchCount1,PCNZWCH lpString2,
              int cchCount2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringW(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}


