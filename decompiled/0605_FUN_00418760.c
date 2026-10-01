/*
 * Function: FUN_00418760
 * Address: 00418760
 * Size: 428 bytes
 * Calling Convention: __register
 */

void FUN_00418760(int *param_1,LPCVOID param_2,ushort *param_3,uint param_4)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  HINSTANCE hInstance;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *in_FS_OFFSET;
  UINT uID;
  WCHAR *lpBuffer;
  undefined4 uStack_680;
  undefined1 *puStack_67c;
  undefined1 *puStack_678;
  int local_668;
  int local_664;
  undefined1 local_660;
  longlong *local_65c;
  undefined1 local_658;
  int local_654;
  undefined1 local_650;
  undefined *local_64c;
  undefined1 local_648;
  undefined *local_644;
  undefined1 local_640;
  _MEMORY_BASIC_INFORMATION local_63c;
  WCHAR local_620 [256];
  WCHAR local_420 [261];
  longlong local_216 [65];
  int local_c;
  ushort *local_8;
  
  puStack_678 = &stack0xfffffffc;
  local_668 = 0;
  puStack_67c = &LAB_0041890c;
  uStack_680 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_680;
  local_8 = param_3;
  VirtualQuery(param_2,&local_63c,0x1c);
  if (local_63c.State == 0x1000) {
    DVar1 = GetModuleFileNameW(local_63c.AllocationBase,local_420,0x105);
    if (DVar1 != 0) {
      local_c = (int)param_2 - (int)local_63c.AllocationBase;
      goto LAB_004187ec;
    }
  }
  GetModuleFileNameW(DAT_0042c584,local_420,0x105);
  local_c = FUN_00418754((int)param_2);
LAB_004187ec:
  iVar2 = FUN_00419eac(local_420,0x5c);
  FUN_00415d98(local_216,(longlong *)(iVar2 + 2),0x104);
  puVar4 = &DAT_00418920;
  puVar5 = &DAT_00418920;
  uVar3 = FUN_00405108(param_1,(int)PTR_PTR_00412e00);
  if ((char)uVar3 != '\0') {
    puVar4 = (undefined *)FUN_004071e4(param_1[1]);
    iVar2 = FUN_00406f00((int)puVar4);
    if ((iVar2 != 0) && (*(short *)(puVar4 + iVar2 * 2 + -2) != 0x2e)) {
      puVar5 = &DAT_00418924;
    }
  }
  iVar2 = 0x100;
  lpBuffer = local_620;
  uID = *(UINT *)(PTR_PTR_00428604 + 4);
  hInstance = (HINSTANCE)FUN_00408990((int)DAT_0042c584);
  LoadStringW(hInstance,uID,lpBuffer,iVar2);
  FUN_00404c5c(*param_1,&local_668);
  local_664 = local_668;
  local_660 = 0x11;
  local_65c = local_216;
  local_658 = 10;
  local_654 = local_c;
  local_650 = 5;
  local_648 = 10;
  local_640 = 10;
  local_64c = puVar4;
  local_644 = puVar5;
  FUN_00415f08(local_8,param_4,(ushort *)local_620,4,(int)&local_664);
  FUN_00406f00((int)local_8);
  *in_FS_OFFSET = uStack_680;
  puStack_678 = &LAB_00418913;
  puStack_67c = (undefined1 *)0x41890b;
  FUN_00406b28(&local_668);
  return;
}


