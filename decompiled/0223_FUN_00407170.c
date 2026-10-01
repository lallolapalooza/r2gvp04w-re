/*
 * Function: FUN_00407170
 * Address: 00407170
 * Size: 21 bytes
 * Calling Convention: __register
 */

void FUN_00407170(int *param_1,LPCWSTR param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != (LPCWSTR)0x0) {
    iVar1 = *(int *)(param_2 + -2);
  }
  FUN_00406d78(param_1,param_2,iVar1,param_3);
  return;
}


