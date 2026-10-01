/*
 * Function: FUN_00425000
 * Address: 00425000
 * Size: 215 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425000(void)

{
  WORD WVar1;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004250d7;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar2 = _DAT_00429988 == 0;
  _DAT_00429988 = _DAT_00429988 + -1;
  if (bVar2) {
    FUN_00404be8();
    FUN_00404270();
    SetThreadLocale(0x400);
    FUN_004089c4();
    DAT_0042700c = 2;
    DAT_0042901c = &DAT_00402798;
    DAT_00429020 = &DAT_004027a0;
    DAT_00429056 = 2;
    DAT_0042905c = FUN_0040abf0();
    _DAT_00429008 = &LAB_00408384;
    FUN_00404c24();
    FUN_00404c40();
    _DAT_00429064 = 0xd7b0;
    DAT_00429340 = 0xd7b0;
    _DAT_0042961c = 0xd7b0;
    _DAT_0042904c = GetCommandLineW();
    WVar1 = FUN_004028d8();
    _DAT_00429048 = CONCAT22(extraout_var,WVar1);
    DAT_00429978 = GetACP();
    DAT_0042997c = 0x4b0;
    _DAT_00429040 = GetCurrentThreadId();
    FUN_0040ac04();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


