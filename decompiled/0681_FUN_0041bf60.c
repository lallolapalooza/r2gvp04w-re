/*
 * Function: FUN_0041bf60
 * Address: 0041bf60
 * Size: 41 bytes
 * Calling Convention: __register
 */

void FUN_0041bf60(int *param_1)

{
  WCHAR local_20c [260];
  
  GetSystemDirectoryW(local_20c,0x104);
  FUN_00415e78((longlong *)local_20c,param_1);
  return;
}


