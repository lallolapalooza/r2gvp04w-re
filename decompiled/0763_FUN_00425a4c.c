/*
 * Function: FUN_00425a4c
 * Address: 00425a4c
 * Size: 202 bytes
 * Calling Convention: __register
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425a4c(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  HMODULE in_stack_ffffffd4;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  longlong *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (longlong *)0x0;
  local_10 = 0;
  puStack_18 = &LAB_00425b16;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  bVar2 = _DAT_0042efb4 == 0;
  _DAT_0042efb4 = _DAT_0042efb4 + -1;
  puVar1 = &stack0xfffffffc;
  if (bVar2) {
    GetModuleHandleW(L"kernel32.dll");
    DAT_0042efb8 = FUN_0040bdc0();
    in_stack_ffffffd4 = GetModuleHandleW(L"kernel32.dll");
    DAT_0042efbc = FUN_0040bdc0();
    if ((DAT_0042efb8 == 0) || (DAT_0042efbc == 0)) {
      DAT_0042efc0 = 0;
    }
    else {
      DAT_0042efc0 = 1;
    }
    FUN_0041bf60((int *)&local_c);
    FUN_0041b87c(local_c,&local_8);
    FUN_00407350(&local_8,(longlong *)L"shell32.dll");
    FUN_0041b0f0(local_8,0x8000);
    FUN_0041c758(0x4c783afb,&local_10);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  *in_FS_OFFSET = in_stack_ffffffd4;
  FUN_00406b88(&local_10,3);
  return;
}


