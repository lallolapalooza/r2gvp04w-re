/*
 * Function: FUN_00418958
 * Address: 00418958
 * Size: 293 bytes
 * Calling Convention: __register
 */

void FUN_00418958(int *param_1,LPCVOID param_2)

{
  int iVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  HINSTANCE hInstance;
  undefined4 *in_FS_OFFSET;
  LPSTR lpBuffer;
  undefined *lpBuffer_00;
  UINT uID;
  DWORD *pDVar4;
  WCHAR *lpBuffer_01;
  LPOVERLAPPED p_Var5;
  undefined4 uVar6;
  undefined4 uStack_8a0;
  undefined1 *puStack_89c;
  undefined1 *puStack_898;
  WCHAR local_88c [1024];
  WCHAR local_8c [64];
  DWORD local_c;
  LPSTR local_8;
  
  puStack_898 = &stack0xfffffffc;
  local_8 = (LPSTR)0x0;
  puStack_89c = &LAB_00418a7d;
  uStack_8a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8a0;
  uVar6 = 0x400;
  iVar1 = FUN_00418760(param_1,param_2,(ushort *)local_88c,0x400);
  if (*PTR_DAT_004285ac == '\0') {
    iVar1 = 0x40;
    lpBuffer_01 = local_8c;
    uID = *(UINT *)(PTR_PTR_0042848c + 4);
    hInstance = (HINSTANCE)FUN_00408990(DAT_0042c584);
    LoadStringW(hInstance,uID,lpBuffer_01,iVar1);
    MessageBoxW((HWND)0x0,local_88c,local_8c,0x2010);
  }
  else {
    FUN_00404894(PTR_DAT_004284b4);
    FUN_0040460c();
    DVar2 = WideCharToMultiByte(1,0,local_88c,iVar1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_004087a4((int *)&local_8,(int)PTR_DAT_00418928,1);
    WideCharToMultiByte(1,0,local_88c,iVar1,local_8,DVar2,(LPCSTR)0x0,(LPBOOL)0x0);
    p_Var5 = (LPOVERLAPPED)0x0;
    pDVar4 = &local_c;
    lpBuffer = local_8;
    pvVar3 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar3,lpBuffer,DVar2,pDVar4,p_Var5);
    p_Var5 = (LPOVERLAPPED)0x0;
    pDVar4 = &local_c;
    DVar2 = 2;
    lpBuffer_00 = &DAT_00418a98;
    pvVar3 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar3,lpBuffer_00,DVar2,pDVar4,p_Var5);
  }
  *in_FS_OFFSET = uVar6;
  puStack_89c = &LAB_00418a84;
  uStack_8a0 = 0x418a7c;
  FUN_004088c8((int *)&local_8,(int)PTR_DAT_00418928);
  return;
}


