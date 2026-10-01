/*
 * Function: FUN_0040a9d0
 * Address: 0040a9d0
 * Size: 142 bytes
 * Calling Convention: __register
 */

uint FUN_0040a9d0(LPWSTR param_1,uint param_2,LPCSTR param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != (LPCSTR)0x0) {
    if ((param_1 == (LPWSTR)0x0) || (param_2 == 0)) {
      uVar1 = FUN_0040abd0(0xfde9,0,param_3,0,(LPWSTR)0x0,param_4);
    }
    else {
      uVar1 = FUN_0040abd0(0xfde9,0,param_3,param_2,param_1,param_4);
      if (((uVar1 != 0) && (uVar1 <= param_2)) && ((param_4 != -1 || (param_1[uVar1 - 1] != L'\0')))
         ) {
        if (param_2 == uVar1) {
          if (((1 < uVar1) && (0xdbff < (ushort)param_1[uVar1 - 1])) &&
             ((ushort)param_1[uVar1 - 1] < 0xe000)) {
            uVar1 = uVar1 - 1;
          }
        }
        else {
          uVar1 = uVar1 + 1;
        }
        param_1[uVar1 - 1] = L'\0';
      }
    }
  }
  return uVar1;
}


