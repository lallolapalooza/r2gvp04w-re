/*
 * Function: FUN_00408990
 * Address: 00408990
 * Size: 50 bytes
 * Calling Convention: __register
 */

int FUN_00408990(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_00427030;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return param_1;
    }
    if (((param_1 == puVar1[1]) || (param_1 == puVar1[2])) || (param_1 == puVar1[3])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  iVar2 = FUN_00408948((int)puVar1);
  return iVar2;
}


