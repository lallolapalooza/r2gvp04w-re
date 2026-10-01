/*
 * Function: FUN_004056b0
 * Address: 004056b0
 * Size: 92 bytes
 * Calling Convention: __register
 */

void FUN_004056b0(void)

{
  int iVar1;
  
  if (DAT_00429000 == 0) {
    DAT_00429000 = FUN_00405598();
    LOCK();
    UNLOCK();
  }
  if ((1 < DAT_0042905c) && (DAT_00429004 == 0)) {
    LOCK();
    DAT_00429004 = 1000;
    UNLOCK();
  }
  if ((int)DAT_00429000 < 0x1d) {
    iVar1 = FUN_00403844(0x1c);
  }
  else {
    iVar1 = FUN_00403844(DAT_00429000);
  }
  *(int *)(iVar1 + 0x10) = DAT_00429004;
  return;
}


