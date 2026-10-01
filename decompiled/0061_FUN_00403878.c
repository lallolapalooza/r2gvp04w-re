/*
 * Function: FUN_00403878
 * Address: 00403878
 * Size: 131 bytes
 * Calling Convention: __register
 */

void FUN_00403878(LPCSTR param_1,LPCSTR param_2,DWORD param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  undefined *lpBuffer;
  DWORD *pDVar3;
  LPOVERLAPPED p_Var4;
  DWORD local_c;
  
  pDVar3 = &local_c;
  local_c = param_3;
  if (DAT_00429054 == '\0') {
    MessageBoxA((HWND)0x0,param_1,param_2,0x2010);
  }
  else {
    p_Var4 = (LPOVERLAPPED)0x0;
    DVar1 = FUN_00406eec((int)param_2);
    pvVar2 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar2,param_2,DVar1,pDVar3,p_Var4);
    pDVar3 = &local_c;
    p_Var4 = (LPOVERLAPPED)0x0;
    DVar1 = FUN_00406eec((int)PTR_DAT_00427064);
    lpBuffer = PTR_DAT_00427064;
    pvVar2 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar2,lpBuffer,DVar1,pDVar3,p_Var4);
    pDVar3 = &local_c;
    p_Var4 = (LPOVERLAPPED)0x0;
    DVar1 = FUN_00406eec((int)param_1);
    pvVar2 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar2,param_1,DVar1,pDVar3,p_Var4);
  }
  return;
}


