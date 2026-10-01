/*
 * Function: FUN_0041c758
 * Address: 0041c758
 * Size: 78 bytes
 * Calling Convention: __register
 */

void FUN_0041c758(DWORD param_1,int *param_2)

{
  DWORD DVar1;
  WCHAR local_804 [1024];
  
  DVar1 = FormatMessageW(0x3200,(LPCVOID)0x0,param_1,0,local_804,0x400,(va_list *)0x0);
  for (; (0 < (int)DVar1 &&
         (((ushort)local_804[DVar1 - 1] < 0x21 || (local_804[DVar1 - 1] == L'.'))));
      DVar1 = DVar1 - 1) {
  }
  FUN_00406c80(param_2,(longlong *)local_804,DVar1);
  return;
}


