/*
 * Function: FUN_004044d4
 * Address: 004044d4
 * Size: 23 bytes
 * Calling Convention: __register
 */

void FUN_004044d4(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_00427750)();
    if (iVar1 != 0) {
      FUN_004045f4(2);
      return;
    }
  }
  return;
}


