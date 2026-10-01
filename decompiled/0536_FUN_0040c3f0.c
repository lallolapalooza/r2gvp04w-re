/*
 * Function: FUN_0040c3f0
 * Address: 0040c3f0
 * Size: 41 bytes
 * Calling Convention: __register
 */

void FUN_0040c3f0(int *param_1)

{
  WCHAR local_20c [260];
  
  GetSystemDirectoryW(local_20c,0x104);
  FUN_0040c3dc((longlong *)local_20c,param_1);
  return;
}


