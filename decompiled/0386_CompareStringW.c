/*
 * Function: CompareStringW
 * Address: 0040bb50
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

int __stdcall
CompareStringW(LCID Locale,DWORD dwCmpFlags,PCNZWCH lpString1,int cchCount1,PCNZWCH lpString2,
              int cchCount2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringW(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}


