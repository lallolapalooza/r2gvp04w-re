/*
 * Function: FUN_0041bf34
 * Address: 0041bf34
 * Size: 41 bytes
 * Calling Convention: __register
 */

void FUN_0041bf34(int *param_1)

{
  WCHAR local_20c [260];
  
  GetWindowsDirectoryW(local_20c,0x104);
  FUN_00415e78((longlong *)local_20c,param_1);
  return;
}


