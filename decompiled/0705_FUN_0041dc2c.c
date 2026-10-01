/*
 * Function: FUN_0041dc2c
 * Address: 0041dc2c
 * Size: 71 bytes
 * Calling Convention: __register
 */

int * FUN_0041dc2c(int *param_1,char param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 extraout_ECX;
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
  param_1[2] = param_4;
  param_1[3] = param_5;
  if (cVar1 != '\0') {
    FUN_0040547c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


