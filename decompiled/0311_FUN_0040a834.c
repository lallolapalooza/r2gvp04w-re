/*
 * Function: FUN_0040a834
 * Address: 0040a834
 * Size: 55 bytes
 * Calling Convention: __register
 */

void FUN_0040a834(undefined4 param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    if ((*(byte *)((int)param_2 + *(int *)(*param_2 + -0x34) + -4) & 1) == 0) {
      FUN_0040a828(param_2);
    }
    FUN_0040a464((longlong *)&DAT_0042bc28,param_1,(uint)param_2);
  }
  return;
}


