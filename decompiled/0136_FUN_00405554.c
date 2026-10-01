/*
 * Function: FUN_00405554
 * Address: 00405554
 * Size: 42 bytes
 * Calling Convention: __register
 */

void FUN_00405554(int *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if (*param_1 == 0) {
      LOCK();
      iVar1 = *param_1;
      if (iVar1 == 0) {
        *param_1 = 1;
        iVar1 = 0;
      }
      UNLOCK();
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_004054dc(&local_8);
  } while( true );
}


