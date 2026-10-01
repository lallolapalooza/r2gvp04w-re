/*
 * Function: FUN_00405a24
 * Address: 00405a24
 * Size: 96 bytes
 * Calling Convention: __register
 */

int FUN_00405a24(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD dwMilliseconds;
  
  dwMilliseconds = 1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    while( true ) {
      iVar1 = (*(code *)*DAT_004298f4)();
      LOCK();
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0xc) = iVar1;
        iVar2 = 0;
      }
      UNLOCK();
      iVar3 = iVar1;
      if ((iVar2 != 0) && (iVar3 = iVar2, iVar1 != 0)) {
        (*(code *)DAT_004298f4[1])(iVar1);
      }
      if (iVar3 != 0) break;
      Sleep(dwMilliseconds);
      if ((int)dwMilliseconds < 0x201) {
        dwMilliseconds = dwMilliseconds * 2;
      }
      else {
        dwMilliseconds = 1;
      }
    }
  }
  return iVar3;
}


