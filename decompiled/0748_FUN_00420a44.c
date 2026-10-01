/*
 * Function: FUN_00420a44
 * Address: 00420a44
 * Size: 98 bytes
 * Calling Convention: __register
 */

void FUN_00420a44(char param_1,int param_2,int param_3,DWORD param_4,DWORD param_5)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  if (-1 < param_3 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 == 1) {
        Sleep(param_5);
      }
      else if (1 < iVar3) {
        Sleep(param_4);
      }
      iVar1 = FUN_004204d0(param_1,param_2);
      if (iVar1 != 0) {
        return;
      }
      DVar2 = GetLastError();
      if (DVar2 == 2) {
        return;
      }
      DVar2 = GetLastError();
      if (DVar2 == 3) {
        return;
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


