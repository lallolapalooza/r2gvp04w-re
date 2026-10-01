/*
 * Function: FUN_0040444c
 * Address: 0040444c
 * Size: 81 bytes
 * Calling Convention: __register
 */

void FUN_0040444c(void)

{
  if (DAT_0042bb90 != (HANDLE)0x0) {
    CloseHandle(DAT_0042bb90);
    DAT_0042bb90 = (HANDLE)0x0;
  }
  if (DAT_00429984 != '\0') {
    FUN_00403e20();
  }
  if (DAT_0042bb88 != (LPVOID)0x0) {
    VirtualFree(DAT_0042bb88,0,0x8000);
    DAT_0042bb88 = (LPVOID)0x0;
  }
  FUN_0040439c();
  return;
}


