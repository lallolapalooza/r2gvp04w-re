/*
 * Function: FUN_0041e408
 * Address: 0041e408
 * Size: 43 bytes
 * Calling Convention: __register
 */

void FUN_0041e408(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined1 local_8;
  
  local_8 = 0;
  local_c = param_1;
  iVar1 = FUN_00418b04((int)PTR_PTR_0041d4f8,'\x01',
                       (ushort *)L"lzmadecompsmall: Compressed data is corrupted (%d)",0,
                       (int)&local_c);
  FUN_004062cc(iVar1);
  return;
}


