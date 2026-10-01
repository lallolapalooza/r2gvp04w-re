/*
 * Function: FUN_0040a828
 * Address: 0040a828
 * Size: 11 bytes
 * Calling Convention: __register
 */

void FUN_0040a828(int *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00405a84(param_1);
  LOCK();
  *puVar1 = *puVar1 | 1;
  UNLOCK();
  return;
}


