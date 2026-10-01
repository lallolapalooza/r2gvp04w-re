/*
 * Function: FUN_004044ec
 * Address: 004044ec
 * Size: 77 bytes
 * Calling Convention: __register
 */

void FUN_004044ec(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *param_1 = 0;
      iVar1 = (*(code *)PTR_FUN_00427750)(iVar1);
      if (iVar1 == 0) {
        return;
      }
      FUN_004045f4(2);
      return;
    }
    iVar1 = (*(code *)PTR_FUN_00427754)(iVar1);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      return;
    }
LAB_0040451d:
    FUN_004045f4(1);
    return;
  }
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_FUN_0042774c)(param_2);
    if (iVar1 == 0) goto LAB_0040451d;
    *param_1 = iVar1;
  }
  return;
}


