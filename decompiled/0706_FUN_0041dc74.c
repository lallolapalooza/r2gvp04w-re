/*
 * Function: FUN_0041dc74
 * Address: 0041dc74
 * Size: 275 bytes
 * Calling Convention: __register
 */

int * FUN_0041dc74(int *param_1,char param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  uint local_24 [2];
  uint local_1c [2];
  uint local_11;
  char local_d;
  uint local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405424((int)param_1,param_2,param_3,in_stack_ffffffc0,in_stack_ffffffc4);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  FUN_00404dc4(param_1,'\0',param_3);
  param_1[2] = (int)param_3;
  iVar1 = (**(code **)(*param_3 + 8))(param_3,&local_c,4);
  if (iVar1 == 4) {
    iVar1 = (**(code **)(*param_3 + 8))(param_3,&local_11,5);
    if (iVar1 == 5) goto LAB_0041dcda;
  }
  piVar2 = FUN_00418ac8((int *)PTR_PTR_0041d4f8,'\x01',(longlong *)L"Compressed block is corrupted")
  ;
  FUN_004062cc((int)piVar2);
LAB_0041dcda:
  uVar3 = FUN_0041db58((byte *)&local_11,5);
  if (uVar3 != local_c) {
    piVar2 = FUN_00418ac8((int *)PTR_PTR_0041d4f8,'\x01',
                          (longlong *)L"Compressed block is corrupted");
    FUN_004062cc((int)piVar2);
  }
  (**(code **)*param_3)(param_3,local_1c);
  FUN_0041b870(local_1c,local_11);
  (**(code **)(*param_3 + 4))(param_3,local_24);
  iVar1 = FUN_0041b850(local_1c,local_24);
  if (0 < iVar1) {
    piVar2 = FUN_00418ac8((int *)PTR_PTR_0041d4f8,'\x01',
                          (longlong *)L"Compressed block is corrupted");
    FUN_004062cc((int)piVar2);
  }
  if (local_d != '\0') {
    iVar1 = (*(code *)*param_4)(param_4,1);
    param_1[1] = iVar1;
  }
  param_1[3] = local_11;
  *(undefined1 *)(param_1 + 4) = 1;
  if (local_5 != '\0') {
    FUN_0040547c(param_1);
    *in_FS_OFFSET = in_stack_ffffffc0;
  }
  return param_1;
}


