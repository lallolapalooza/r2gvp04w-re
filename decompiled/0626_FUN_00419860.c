/*
 * Function: FUN_00419860
 * Address: 00419860
 * Size: 19 bytes
 * Calling Convention: __register
 */

void FUN_00419860(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = *param_1;
    *param_2 = iVar1;
    LOCK();
    iVar2 = *param_1;
    if (iVar1 == iVar2) {
      *param_1 = (int)param_2;
      iVar2 = iVar1;
    }
    UNLOCK();
  } while (iVar1 != iVar2);
  return;
}


