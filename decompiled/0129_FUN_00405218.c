/*
 * Function: FUN_00405218
 * Address: 00405218
 * Size: 118 bytes
 * Calling Convention: __register
 */

bool FUN_00405218(byte *param_1,byte *param_2)

{
  int iVar1;
  int cchCount2;
  WCHAR local_408 [256];
  WCHAR local_208 [256];
  
  iVar1 = MultiByteToWideChar(0xfde9,0,(LPCSTR)(param_1 + 1),(uint)*param_1,local_408,0x100);
  cchCount2 = MultiByteToWideChar(0xfde9,0,(LPCSTR)(param_2 + 1),(uint)*param_2,local_208,0x100);
  iVar1 = CompareStringW(DAT_00429980,1,local_408,iVar1,local_208,cchCount2);
  return iVar1 == 2;
}


