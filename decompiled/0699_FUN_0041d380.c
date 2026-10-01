/*
 * Function: FUN_0041d380
 * Address: 0041d380
 * Size: 63 bytes
 * Calling Convention: __register
 */

void FUN_0041d380(undefined4 *param_1,LONG *param_2)

{
  DWORD DVar1;
  LONG local_10;
  
  local_10 = param_2[1];
  DVar1 = SetFilePointer((HANDLE)param_1[1],*param_2,&local_10,0);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      FUN_0041d130(*param_1);
    }
  }
  return;
}


