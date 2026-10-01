/*
 * Function: FUN_0041be90
 * Address: 0041be90
 * Size: 149 bytes
 * Calling Convention: __register
 */

void FUN_0041be90(int param_1,int *param_2)

{
  DWORD DVar1;
  LPWSTR pWVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_228;
  undefined1 *puStack_224;
  undefined1 *puStack_220;
  WCHAR local_210 [260];
  longlong *local_8;
  
  puStack_220 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_224 = &LAB_0041bf25;
  uStack_228 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_228;
  if (param_1 == 0) {
    puStack_220 = &stack0xfffffffc;
    DVar1 = GetModuleFileNameW((HMODULE)0x0,local_210,0x104);
    FUN_00406c80(param_2,(longlong *)local_210,DVar1);
  }
  else {
    pWVar2 = GetCommandLineW();
    while (*pWVar2 != L'\0') {
      pWVar2 = (LPWSTR)FUN_0041bd50((ushort *)pWVar2,(int *)&local_8);
      if (param_1 == 0) goto LAB_0041bf05;
      param_1 = param_1 + -1;
    }
    FUN_00406b28((int *)&local_8);
LAB_0041bf05:
    FUN_00406dfc(param_2,local_8);
  }
  *in_FS_OFFSET = uStack_228;
  puStack_220 = &LAB_0041bf2c;
  puStack_224 = (undefined1 *)0x41bf24;
  FUN_00406b28((int *)&local_8);
  return;
}


