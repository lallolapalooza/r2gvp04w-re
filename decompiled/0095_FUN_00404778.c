/*
 * Function: FUN_00404778
 * Address: 00404778
 * Size: 60 bytes
 * Calling Convention: __register
 */

void FUN_00404778(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceCounter(&local_8);
  if (BVar1 == 0) {
    local_8.s.LowPart = GetTickCount();
    local_8.s.HighPart = 0;
  }
  FUN_004047c8(0x7fffffff);
  (*(code *)PTR_FUN_0042702c)();
  return;
}


