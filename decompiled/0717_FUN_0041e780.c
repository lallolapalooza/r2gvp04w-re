/*
 * Function: FUN_0041e780
 * Address: 0041e780
 * Size: 61 bytes
 * Calling Convention: __register
 */

undefined1 FUN_0041e780(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iStack_c;
  
  if (*param_1 == param_1[1]) {
    iStack_c = param_3;
    iVar2 = (**(code **)param_1[4])((undefined4 *)param_1[4],param_1,&iStack_c);
    param_1[5] = iVar2;
    param_1[1] = *param_1 + iStack_c;
    if (iStack_c == 0) {
      param_1[6] = 1;
      return 0xff;
    }
  }
  puVar1 = (undefined1 *)*param_1;
  *param_1 = *param_1 + 1;
  return *puVar1;
}


