/*
 * Function: FUN_0040b6ec
 * Address: 0040b6ec
 * Size: 272 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0040b6ec(void)

{
  undefined4 *puVar1;
  HMODULE hLibModule;
  undefined4 *hMem;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_stack_00000004;
  undefined4 local_8;
  
  local_8 = 0;
  if (in_stack_00000004 == 0) {
    pcVar2 = (char *)0x0;
    puVar1 = DAT_00427a24;
  }
  else {
    pcVar2 = FUN_0040b90c();
    puVar1 = DAT_00427a24;
  }
  do {
    do {
      hMem = puVar1;
      if (hMem == (undefined4 *)0x0) {
        return local_8;
      }
      FUN_0040b8bc();
      pcVar3 = FUN_0040b90c();
      puVar1 = (undefined4 *)*hMem;
    } while ((in_stack_00000004 != 0) &&
            ((pcVar3 != pcVar2 || (iVar4 = FUN_0040b920(), iVar4 != 0))));
    if ((hMem != (undefined4 *)0x0) && (*(int *)(hMem[1] + 0x18) != 0)) {
      puVar5 = (undefined4 *)FUN_0040b8cc();
      hLibModule = (HMODULE)*puVar5;
      FUN_0040b8ec();
      FUN_0040b8dc();
      FUN_0040b950();
      FUN_0040b968();
      FreeLibrary(hLibModule);
      *puVar5 = 0;
      if (hMem != (undefined4 *)0x0) {
        FUN_0040b990();
        LocalFree(hMem);
      }
      local_8 = 1;
    }
  } while (in_stack_00000004 == 0);
  return local_8;
}


