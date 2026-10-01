/*
 * Function: FUN_0041df50
 * Address: 0041df50
 * Size: 68 bytes
 * Calling Convention: __register
 */

void FUN_0041df50(int param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 == (int *)0x0) {
    uVar1 = FUN_0041def4(param_1,param_2,param_3);
    if (param_3 != uVar1) {
      piVar2 = FUN_00418ac8((int *)PTR_PTR_0041d4f8,'\x01',
                            (longlong *)L"Compressed block is corrupted");
      FUN_004062cc((int)piVar2);
    }
  }
  else {
    (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
  }
  return;
}


