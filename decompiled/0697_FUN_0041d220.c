/*
 * Function: FUN_0041d220
 * Address: 0041d220
 * Size: 60 bytes
 * Calling Convention: __register
 */

int * FUN_0041d220(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405424((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00404dc4(param_1,'\0',param_3);
  param_1[1] = param_3;
  if (cVar1 != '\0') {
    FUN_0040547c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


