/*
 * Function: FUN_0040b7fc
 * Address: 0040b7fc
 * Size: 183 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0040b7fc(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  undefined4 local_8;
  
  local_8 = 0x8007007e;
  if (*(int *)(IMAGE_DOS_HEADER_00400000.e_program + IMAGE_DOS_HEADER_00400000.e_lfanew + 0xa4) != 0
     ) {
    for (iVar1 = FUN_0040b9b4(); *(int *)(iVar1 + 4) != 0; iVar1 = iVar1 + 0x20) {
      FUN_0040b8bc();
      pcVar2 = FUN_0040b90c();
      pcVar3 = FUN_0040b90c();
      if ((pcVar2 == pcVar3) && (iVar4 = FUN_0040b920(), iVar4 == 0)) break;
    }
    if (*(int *)(iVar1 + 4) != 0) {
      pFVar5 = (FARPROC)FUN_0040b9c4();
      iVar1 = FUN_0040b950();
      if (pFVar5 < pFVar5 + iVar1 * 4) {
        do {
          pFVar6 = FUN_0040b40c();
          pFVar5 = pFVar5 + 4;
        } while (pFVar5 < pFVar6);
      }
      local_8 = 0;
    }
  }
  return local_8;
}


