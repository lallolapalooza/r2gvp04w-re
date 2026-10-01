/*
 * Function: FUN_00415a14
 * Address: 00415a14
 * Size: 100 bytes
 * Calling Convention: __register
 */

void FUN_00415a14(int param_1,int *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint local_c;
  uint local_8;
  
  iVar1 = 1;
  local_c = param_4 >> 4 | param_5 << 0x1c;
  local_8 = param_5;
  while (local_8 = local_8 >> 4, local_8 != 0 || local_c != 0) {
    iVar1 = iVar1 + 1;
    local_c = local_c >> 4 | local_8 << 0x1c;
  }
  FUN_004158bc(param_1,iVar1,0x30,param_2,param_4,param_5);
  return;
}


