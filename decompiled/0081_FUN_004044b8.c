/*
 * Function: FUN_004044b8
 * Address: 004044b8
 * Size: 27 bytes
 * Calling Convention: __register
 */

int FUN_004044b8(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_0042774c)();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_004045f4(1);
  return iVar1;
}


