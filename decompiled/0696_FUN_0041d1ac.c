/*
 * Function: FUN_0041d1ac
 * Address: 0041d1ac
 * Size: 115 bytes
 * Calling Convention: __register
 */

int * FUN_0041d1ac(int *param_1,char param_2,undefined4 param_3,byte param_4,undefined1 param_5,
                  undefined1 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  uint *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405424((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00404dc4(param_1,'\0',param_3);
  uVar1 = (uint)param_4;
  iVar2 = (**(code **)(*param_1 + 0x14))(param_1,param_3,param_6,uVar1,param_5);
  param_1[1] = iVar2;
  if ((param_1[1] == 0) || (param_1[1] == -1)) {
    FUN_0041d130(*param_1);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  if (cVar3 != '\0') {
    FUN_0040547c(param_1);
    *in_FS_OFFSET = uVar1;
  }
  return param_1;
}


