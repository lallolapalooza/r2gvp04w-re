/*
 * Function: FUN_00405698
 * Address: 00405698
 * Size: 24 bytes
 * Calling Convention: __register
 */

DWORD FUN_00405698(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = *(DWORD *)(param_1 + 8);
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
    FUN_004045f4(0x19);
  }
  return DVar1;
}


