/*
 * Function: FUN_0041e6b4
 * Address: 0041e6b4
 * Size: 129 bytes
 * Calling Convention: __register
 */

void FUN_0041e6b4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined1 local_10;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0041e5f0(param_1);
  }
  local_20 = &LAB_0041e560;
  local_1c = param_1;
  iVar1 = FUN_0041eb08((undefined4 *)(param_1 + 0x14),&local_20,param_2,&local_18,param_3);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_0041e408(5);
    }
    else {
      local_10 = 0;
      local_14 = iVar1;
      FUN_0041e508((ushort *)L"LzmaDecode failed (%d)",(int)&local_14,0);
    }
  }
  if (local_18 != param_3) {
    FUN_0041e408(6);
  }
  return;
}


