/*
 * Function: FUN_0040ae10
 * Address: 0040ae10
 * Size: 68 bytes
 * Calling Convention: __register
 */

void FUN_0040ae10(void)

{
  SIZE_T SVar1;
  LPVOID lpTlsValue;
  
  SVar1 = FUN_0040ae08();
  if (SVar1 != 0) {
    if (_tls_index == 0xffffffff) {
      FUN_00406a3c(0xe2);
    }
    lpTlsValue = (LPVOID)FUN_0040adfc(SVar1);
    if (lpTlsValue == (LPVOID)0x0) {
      FUN_00406a3c(0xe2);
    }
    else {
      TlsSetValue(_tls_index,lpTlsValue);
    }
  }
  return;
}


