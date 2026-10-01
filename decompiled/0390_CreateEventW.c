/*
 * Function: CreateEventW
 * Address: 0040bb80
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

HANDLE __stdcall
CreateEventW(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,
            LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateEventW(lpEventAttributes,bManualReset,bInitialState,lpName);
  return pvVar1;
}


