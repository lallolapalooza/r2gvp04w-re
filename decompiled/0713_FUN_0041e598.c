/*
 * Function: FUN_0041e598
 * Address: 0041e598
 * Size: 35 bytes
 * Calling Convention: __register
 */

void FUN_0041e598(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(LPVOID *)(param_1 + 100) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_1 + 100),0,0x8000);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


