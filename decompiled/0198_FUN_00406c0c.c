/*
 * Function: FUN_00406c0c
 * Address: 00406c0c
 * Size: 15 bytes
 * Calling Convention: __register
 */

void FUN_00406c0c(int param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -8))) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}


