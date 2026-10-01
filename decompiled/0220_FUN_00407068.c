/*
 * Function: FUN_00407068
 * Address: 00407068
 * Size: 63 bytes
 * Calling Convention: __register
 */

void FUN_00407068(int *param_1,LPCWSTR param_2,ushort param_3)

{
  uint uVar1;
  LPCWSTR pWVar2;
  
  uVar1 = 0;
  pWVar2 = param_2;
  if (param_2 != (LPCWSTR)0x0) {
    for (; *pWVar2 != L'\0'; pWVar2 = pWVar2 + 4) {
      if (pWVar2[1] == L'\0') {
LAB_00407098:
        pWVar2 = pWVar2 + 1;
        break;
      }
      if (pWVar2[2] == L'\0') {
LAB_00407095:
        pWVar2 = pWVar2 + 1;
        goto LAB_00407098;
      }
      if (pWVar2[3] == L'\0') {
        pWVar2 = pWVar2 + 1;
        goto LAB_00407095;
      }
    }
    uVar1 = (uint)((int)pWVar2 - (int)param_2) >> 1;
  }
  FUN_00406d78(param_1,param_2,uVar1,param_3);
  return;
}


