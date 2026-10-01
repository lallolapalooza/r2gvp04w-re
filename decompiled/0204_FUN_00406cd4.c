/*
 * Function: FUN_00406cd4
 * Address: 00406cd4
 * Size: 148 bytes
 * Calling Convention: __register
 */

void FUN_00406cd4(int *param_1,LPCSTR param_2,int param_3,UINT param_4)

{
  int iVar1;
  WCHAR local_1008 [2];
  int *piStack_1004;
  LPCSTR local_8;
  
  piStack_1004 = param_1;
  local_8 = param_2;
  if (param_3 < 1) {
    FUN_00406b28(param_1);
  }
  else {
    if ((param_3 + 1 < 0x7ff) &&
       (iVar1 = FUN_00406c64(local_1008,0x7ff,param_2,param_4,param_3), 0 < iVar1)) {
      FUN_00406c80(param_1,(longlong *)local_1008,iVar1);
      return;
    }
    FUN_004072d0(param_1,param_3 + 1);
    iVar1 = FUN_00406c64((LPWSTR)*param_1,param_3 + 1,local_8,param_4,param_3);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    FUN_004072d0(param_1,iVar1);
  }
  return;
}


