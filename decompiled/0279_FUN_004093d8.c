/*
 * Function: FUN_004093d8
 * Address: 004093d8
 * Size: 42 bytes
 * Calling Convention: __register
 */

void FUN_004093d8(undefined *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00427030;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    uVar3 = FUN_00408948((int)puVar1);
    cVar2 = (*(code *)param_1)(uVar3,param_2);
    if (cVar2 == '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return;
}


