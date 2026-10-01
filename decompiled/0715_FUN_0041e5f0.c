/*
 * Function: FUN_0041e5f0
 * Address: 0041e5f0
 * Size: 195 bytes
 * Calling Convention: __register
 */

void FUN_0041e5f0(int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  SIZE_T dwSize;
  byte abStack_1c [8];
  int iStack_14;
  uint uStack_10;
  
  iVar1 = (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),abStack_1c,5);
  if (iVar1 != 5) {
    FUN_0041e408(1);
  }
  FUN_004048f8((double *)(param_1 + 0x14),0x50,0);
  iVar1 = FUN_0041f1a4((uint *)(param_1 + 0x14),0x50,abStack_1c,&uStack_10,&iStack_14,5);
  if (iVar1 != 0) {
    FUN_0041e408(3);
  }
  if (0x4000000 < uStack_10) {
    FUN_0041e408(7);
  }
  dwSize = iStack_14 + uStack_10;
  if (dwSize != *(SIZE_T *)(param_1 + 0x68)) {
    FUN_0041e598(param_1);
    pvVar2 = VirtualAlloc((LPVOID)0x0,dwSize,0x1000,4);
    *(LPVOID *)(param_1 + 100) = pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      FUN_00418abc();
    }
    *(SIZE_T *)(param_1 + 0x68) = dwSize;
  }
  FUN_0041f1f4(param_1 + 0x14,*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 100) + iStack_14);
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}


