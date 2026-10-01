/*
 * Function: FUN_00415aec
 * Address: 00415aec
 * Size: 22 bytes
 * Calling Convention: __register
 */

uint FUN_00415aec(ushort *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint local_8;
  
  local_8 = param_3;
  uVar1 = FUN_00404994(param_1,&local_8);
  if (local_8 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}


