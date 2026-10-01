/*
 * Function: FUN_00408948
 * Address: 00408948
 * Size: 71 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00408948(int param_1)

{
  int iVar1;
  WCHAR local_214 [262];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    GetModuleFileNameW(*(HMODULE *)(param_1 + 4),local_214,0x20a);
    iVar1 = FUN_0040930c((longlong *)local_214);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 4);
    }
  }
  return *(undefined4 *)(param_1 + 0x10);
}


