/*
 * Function: QueryPerformanceCounter
 * Address: 00402880
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}


