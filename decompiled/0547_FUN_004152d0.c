/*
 * Function: FUN_004152d0
 * Address: 004152d0
 * Size: 60 bytes
 * Calling Convention: __register
 */

void FUN_004152d0(int param_1,int *param_2)

{
  DWORD cchLength;
  longlong *plVar1;
  LPWSTR lpsz;
  
  cchLength = 0;
  if (param_1 != 0) {
    cchLength = *(DWORD *)(param_1 + -4);
  }
  plVar1 = (longlong *)FUN_004071e4(param_1);
  FUN_00406c80(param_2,plVar1,cchLength);
  if (0 < (int)cchLength) {
    lpsz = (LPWSTR)FUN_004071e4(*param_2);
    CharLowerBuffW(lpsz,cchLength);
  }
  return;
}


