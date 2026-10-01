/*
 * Function: GetSystemMetrics
 * Address: 0040c288
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

int __stdcall GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


