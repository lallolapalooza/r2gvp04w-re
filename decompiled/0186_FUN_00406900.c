/*
 * Function: FUN_00406900
 * Address: 00406900
 * Size: 300 bytes
 * Calling Convention: __register
 */

void FUN_00406900(void)

{
  HMODULE hLibModule;
  code *pcVar1;
  undefined4 uVar2;
  DWORD DVar3;
  int *piVar4;
  DWORD extraout_ECX;
  undefined1 *extraout_ECX_00;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (DAT_00427004 != 0) {
    uVar2 = FUN_004067e0();
    FUN_00406868(uVar2,extraout_EDX,extraout_ECX);
    DAT_00427004 = 0;
  }
  if ((DAT_0042bbc8 != 0) && (DVar3 = GetCurrentThreadId(), DVar3 == DAT_0042bbf0)) {
    FUN_00406538(0x42bbc4);
    FUN_0040683c((undefined4 *)&DAT_0042bbc4);
  }
  pcVar1 = DAT_00429050;
  if (DAT_0042bbbc == 0) {
    while (DAT_00429050 = pcVar1, pcVar1 != (code *)0x0) {
      DAT_00429050 = (code *)0x0;
      (*pcVar1)();
      pcVar1 = DAT_00429050;
    }
  }
  while( true ) {
    if ((DAT_0042bbbc == 2) && (DAT_00427000 == 0)) {
      DAT_0042bba0 = 0;
    }
    if (DAT_0042bbbc == 0) {
      piVar4 = (int *)FUN_0040455c();
      while (piVar4 != (int *)0x0) {
        FUN_00404df4(piVar4);
        piVar4 = (int *)FUN_0040455c();
      }
    }
    FUN_00406560();
    if (((DAT_0042bbbc < 2) || (DAT_00427000 != 0)) && (DAT_0042bba4 != (undefined4 *)0x0)) {
      FUN_00409500(DAT_0042bba4,extraout_EDX_00,extraout_ECX_00);
      hLibModule = (HMODULE)DAT_0042bba4[4];
      if ((hLibModule != (HMODULE)DAT_0042bba4[1]) && (hLibModule != (HMODULE)0x0)) {
        FreeLibrary(hLibModule);
      }
    }
    FUN_00406538(0x42bb94);
    if (DAT_0042bbbc == 1) {
      (*DAT_0042bbb8)();
    }
    if (DAT_0042bbbc != 0) {
      FUN_0040683c(&DAT_0042bb94);
    }
    if (DAT_0042bb94 == (undefined4 *)0x0) break;
    puVar6 = DAT_0042bb94;
    puVar7 = &DAT_0042bb94;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
  }
  if (DAT_00429034 != (code *)0x0) {
    (*DAT_00429034)();
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_00427000);
}


