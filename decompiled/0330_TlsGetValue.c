/*
 * Function: TlsGetValue
 * Address: 0040adc4
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040adc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


