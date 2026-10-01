/*
 * Function: FUN_0041c69c
 * Address: 0041c69c
 * Size: 48 bytes
 * Calling Convention: __register
 */

void FUN_0041c69c(longlong *param_1,uint *param_2)

{
  ushort *puVar1;
  
  FUN_00406dfc((int *)param_2,param_1);
  if (*param_2 != 0) {
    puVar1 = (ushort *)FUN_0041bb98(*param_2);
    if (0x2e < *puVar1) {
      FUN_00407350((int *)param_2,(longlong *)&LAB_0041c6d8);
    }
  }
  return;
}


