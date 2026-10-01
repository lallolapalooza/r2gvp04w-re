/*
 * Function: FUN_00415b04
 * Address: 00415b04
 * Size: 29 bytes
 * Calling Convention: __register
 */

bool FUN_00415b04(ushort *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint local_c;
  
  local_c = param_3;
  uVar1 = FUN_00404994(param_1,&local_c);
  *param_2 = uVar1;
  return local_c == 0;
}


