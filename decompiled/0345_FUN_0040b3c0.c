/*
 * Function: FUN_0040b3c0
 * Address: 0040b3c0
 * Size: 73 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b3c0(int param_1)

{
  _tls_index = 0;
  _DAT_00427a0c = GetModuleHandleW((LPCWSTR)0x0);
  _DAT_00427a10 = 0;
  _DAT_00427a14 = 0;
  _DAT_00427a1c = param_1 + 8;
  DAT_0042c584 = _DAT_00427a0c;
  FUN_0040ae94();
  FUN_00406634(param_1,0x427a08);
  return;
}


