/*
 * Function: FUN_00405ce0
 * Address: 00405ce0
 * Size: 63 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00405ce0(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 == param_1[2]) {
    param_1[1] = param_1[1] + 1;
    return CONCAT31((int3)(DVar1 >> 8),1);
  }
  if (*param_1 == 0) {
    LOCK();
    iVar2 = *param_1;
    if (iVar2 == 0) {
      *param_1 = 1;
      iVar2 = 0;
    }
    UNLOCK();
    if (iVar2 == 0) {
      DVar1 = GetCurrentThreadId();
      param_1[2] = DVar1;
      param_1[1] = 1;
      return CONCAT31((int3)(DVar1 >> 8),1);
    }
  }
  return 0;
}


