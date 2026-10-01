/*
 * Function: FUN_0041e5bc
 * Address: 0041e5bc
 * Size: 49 bytes
 * Calling Convention: __register
 */

void FUN_0041e5bc(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  *param_2 = param_1 + 0x6c;
  *param_3 = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1 + 0x6c,0x10000);
    *param_3 = iVar1;
    if (*param_3 == 0) {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
  }
  return;
}


