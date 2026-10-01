/*
 * Function: FUN_004044a0
 * Address: 004044a0
 * Size: 23 bytes
 * Calling Convention: __register
 */

void FUN_004044a0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_00427758)();
    if (iVar1 == 0) {
      FUN_004045f4(1);
      return;
    }
  }
  return;
}


