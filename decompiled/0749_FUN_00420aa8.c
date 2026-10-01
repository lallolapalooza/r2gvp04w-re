/*
 * Function: FUN_00420aa8
 * Address: 00420aa8
 * Size: 43 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00420aa8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = param_3;
  iVar1 = GetLocaleInfoW(param_1 & 0xffff,0x20001004,(LPWSTR)&local_8,2);
  if (iVar1 < 1) {
    local_8 = 0xffffffff;
  }
  return local_8;
}


