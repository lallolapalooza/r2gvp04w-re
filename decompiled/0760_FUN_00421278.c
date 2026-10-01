/*
 * Function: FUN_00421278
 * Address: 00421278
 * Size: 84 bytes
 * Calling Convention: __register
 */

LPVOID FUN_00421278(void)

{
  HRSRC hResInfo;
  DWORD DVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  hResInfo = FindResourceW((HMODULE)0x0,(LPCWSTR)0x2b67,(LPCWSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    FUN_004210bc();
  }
  DVar1 = SizeofResource((HMODULE)0x0,hResInfo);
  if (DVar1 != 0x2c) {
    FUN_004210bc();
  }
  hResData = LoadResource((HMODULE)0x0,hResInfo);
  if (hResData == (HGLOBAL)0x0) {
    FUN_004210bc();
  }
  pvVar2 = LockResource(hResData);
  if (pvVar2 == (LPVOID)0x0) {
    FUN_004210bc();
  }
  return pvVar2;
}


