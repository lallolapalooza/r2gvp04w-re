/*
 * Function: FUN_0040bdc0
 * Address: 0040bdc0
 * Size: 151 bytes
 * Calling Convention: __register
 */

void FUN_0040bdc0(void)

{
  LPCSTR lpProcName;
  undefined4 *in_FS_OFFSET;
  HMODULE in_stack_00000004;
  LPCWSTR in_stack_00000008;
  undefined1 *puVar1;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0040be5e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((uint)in_stack_00000008 >> 0x10 == 0) {
    puStack_18 = &stack0xfffffffc;
    GetProcAddress(in_stack_00000004,(LPCSTR)in_stack_00000008);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = &LAB_0040be65;
    puStack_1c = (undefined1 *)0x40be5d;
    FUN_00406b4c(&local_8);
    return;
  }
  puVar1 = &LAB_0040be41;
  *in_FS_OFFSET = &stack0xffffffd4;
  FUN_00406b4c(&local_8);
  FUN_00407068(&local_8,in_stack_00000008,0);
  lpProcName = (LPCSTR)FUN_004070e0(local_8);
  GetProcAddress(in_stack_00000004,lpProcName);
  *in_FS_OFFSET = puVar1;
  uStack_20 = 0x40be48;
  FUN_00406b4c(&local_8);
  return;
}


