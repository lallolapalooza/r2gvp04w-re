/*
 * Function: FUN_0041b24c
 * Address: 0041b24c
 * Size: 163 bytes
 * Calling Convention: __register
 */

int FUN_0041b24c(int param_1,int param_2,int param_3,LCID param_4,undefined2 param_5,int param_6,
                int param_7,int param_8)

{
  int iVar1;
  uint dwCmpFlags;
  bool bVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
  }
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = *(int *)(param_3 + -4);
    }
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + -4);
    }
    if (iVar1 < 1) {
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = *(int *)(param_3 + -4);
      }
      if (iVar1 < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    dwCmpFlags = FUN_0041b1ec(param_5,param_1,param_3);
    iVar1 = CompareStringW(param_4,dwCmpFlags,(PCNZWCH)(param_1 + param_2 * 2),param_7,
                           (PCNZWCH)(param_3 + param_8 * 2),param_6);
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}


