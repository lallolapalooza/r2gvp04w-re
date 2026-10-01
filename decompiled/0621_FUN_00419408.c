/*
 * Function: FUN_00419408
 * Address: 00419408
 * Size: 518 bytes
 * Calling Convention: __register
 */

void FUN_00419408(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  int *in_FS_OFFSET;
  int in_stack_00000004;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puStack_28c;
  undefined1 *puStack_288;
  undefined1 *puStack_284;
  ushort *local_278;
  undefined4 local_274;
  undefined1 local_270;
  int local_26c;
  undefined1 local_268;
  undefined4 local_264;
  undefined1 local_260;
  ushort *local_25c;
  int local_258;
  int local_254;
  undefined4 local_250;
  undefined1 local_24c;
  int local_248;
  undefined1 local_244;
  int local_240;
  undefined1 local_23c;
  undefined4 local_238;
  undefined1 local_234;
  WCHAR local_22e [261];
  _MEMORY_BASIC_INFORMATION local_24;
  int local_8;
  
  puStack_284 = &stack0xfffffffc;
  local_278 = (ushort *)0x0;
  local_254 = 0;
  local_25c = (ushort *)0x0;
  local_258 = 0;
  local_8 = 0;
  puStack_288 = &LAB_0041960e;
  puStack_28c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28c;
  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x14);
  if (iVar3 == 0) {
    FUN_0040ab3c(PTR_PTR_0042861c,&local_8);
  }
  else if (iVar3 == 1) {
    puStack_284 = &stack0xfffffffc;
    FUN_0040ab3c(PTR_PTR_0042857c,&local_8);
  }
  else if (iVar3 == 8) {
    puStack_284 = &stack0xfffffffc;
    FUN_0040ab3c(PTR_PTR_00428470,&local_8);
  }
  else {
    puStack_284 = &stack0xfffffffc;
    FUN_0040ab3c(PTR_PTR_0042851c,&local_8);
  }
  uVar1 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x18);
  VirtualQuery(*(LPCVOID *)(*(int *)(in_stack_00000004 + -4) + 0xc),&local_24,0x1c);
  if ((local_24.State == 0x1000) || (local_24.State == 0x10000)) {
    DVar2 = GetModuleFileNameW(local_24.AllocationBase,local_22e,0x105);
    if (DVar2 != 0) {
      local_250 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0xc);
      local_24c = 5;
      FUN_00407278(&local_258,(longlong *)local_22e,0x105);
      FUN_00415c34(local_258,&local_254);
      local_248 = local_254;
      local_244 = 0x11;
      local_240 = local_8;
      local_23c = 0x11;
      local_234 = 5;
      puVar4 = &local_250;
      iVar3 = 3;
      local_238 = uVar1;
      FUN_0040ab3c(PTR_PTR_004285b8,(int *)&local_25c);
      FUN_00418b04((int)PTR_PTR_004141d8,'\x01',local_25c,iVar3,(int)puVar4);
      goto LAB_004195dd;
    }
  }
  local_274 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0xc);
  local_270 = 5;
  local_26c = local_8;
  local_268 = 0x11;
  local_260 = 5;
  puVar4 = &local_274;
  iVar3 = 2;
  local_264 = uVar1;
  FUN_0040ab3c(PTR_PTR_00428584,(int *)&local_278);
  FUN_00418b04((int)PTR_PTR_004141d8,'\x01',local_278,iVar3,(int)puVar4);
LAB_004195dd:
  *in_FS_OFFSET = iVar3;
  puStack_28c = &LAB_00419615;
  FUN_00406b28((int *)&local_278);
  FUN_00406b88((int *)&local_25c,3);
  FUN_00406b28(&local_8);
  return;
}


