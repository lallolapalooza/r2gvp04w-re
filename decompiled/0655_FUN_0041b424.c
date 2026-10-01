/*
 * Function: FUN_0041b424
 * Address: 0041b424
 * Size: 91 bytes
 * Calling Convention: __register
 */

bool FUN_0041b424(void)

{
  BOOL BVar1;
  undefined4 extraout_EDX;
  _OSVERSIONINFOEXW local_128;
  undefined4 local_c;
  
  FUN_004048f8((double *)&local_128,0x11c,0);
  local_128.wProductType = '\x01';
  local_c = VerSetConditionMask();
  BVar1 = VerifyVersionInfoW(&local_128,0x80,(DWORDLONG)CONCAT44(extraout_EDX,local_c));
  return BVar1 == 0;
}


