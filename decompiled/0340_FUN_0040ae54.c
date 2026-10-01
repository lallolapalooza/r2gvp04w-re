/*
 * Function: FUN_0040ae54
 * Address: 0040ae54
 * Size: 64 bytes
 * Calling Convention: __register
 */

LPVOID FUN_0040ae54(void)

{
  LPVOID pvVar1;
  int in_FS_OFFSET;
  
  if (DAT_0042c580 == '\0') {
    return *(LPVOID *)(*(int *)(in_FS_OFFSET + 0x2c) + _tls_index * 4);
  }
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  FUN_0040ae10();
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  return DAT_0042c59c;
}


