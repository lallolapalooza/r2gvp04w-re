/*
 * Function: FUN_0041629c
 * Address: 0041629c
 * Size: 75 bytes
 * Calling Convention: __register
 */

void FUN_0041629c(undefined4 *param_1,int *param_2)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = *param_1;
  uStack_10 = param_1[1];
  uStack_c = param_1[2];
  uStack_8 = param_1[3];
  FUN_00406b28(param_2);
  if ((short)local_14 != 1) {
    if (*(int *)PTR_DAT_00428464 == 0) {
      FUN_004045f4(0x10);
    }
    else {
      (**(code **)PTR_DAT_00428464)(param_2,&local_14);
    }
  }
  return;
}


