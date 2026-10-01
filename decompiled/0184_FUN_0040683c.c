/*
 * Function: FUN_0040683c
 * Address: 0040683c
 * Size: 42 bytes
 * Calling Convention: __register
 */

bool FUN_0040683c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  for (iVar2 = 0xc; iVar1 = DAT_00427000, iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  LOCK();
  DAT_00427000 = 0;
  UNLOCK();
  return (bool)('\x01' - (iVar1 != 0));
}


