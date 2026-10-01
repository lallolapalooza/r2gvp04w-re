/*
 * Function: DeleteCriticalSection
 * Address: 00402778
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00402778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


