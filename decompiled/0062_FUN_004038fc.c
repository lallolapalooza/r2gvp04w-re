/*
 * Function: FUN_004038fc
 * Address: 004038fc
 * Size: 33 bytes
 * Calling Convention: __register
 */

int FUN_004038fc(int param_1)

{
  int iVar1;
  
  iVar1 = (*(uint *)(param_1 + -4) & 0xfffffff0) + param_1;
  if ((*(uint *)(iVar1 + -4) & 0xfffffff0) == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


