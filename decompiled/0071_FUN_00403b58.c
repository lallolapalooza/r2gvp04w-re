/*
 * Function: FUN_00403b58
 * Address: 00403b58
 * Size: 116 bytes
 * Calling Convention: __register
 */

bool FUN_00403b58(void)

{
  char cVar1;
  
  if (DAT_00429055 != '\0') {
    while( true ) {
      do {
        LOCK();
        cVar1 = DAT_0042bb8c;
        if (DAT_0042bb8c == '\0') {
          DAT_0042bb8c = '\x01';
          cVar1 = '\0';
        }
        UNLOCK();
        if (cVar1 == '\0') goto LAB_00403ba0;
      } while (DAT_00429985 != '\0');
      Sleep(0);
      LOCK();
      cVar1 = DAT_0042bb8c;
      if (DAT_0042bb8c == '\0') {
        DAT_0042bb8c = '\x01';
        cVar1 = '\0';
      }
      UNLOCK();
      if (cVar1 == '\0') break;
      Sleep(10);
    }
  }
LAB_00403ba0:
  if (DAT_0042bb88 == (LPVOID)0x0) {
    DAT_0042bb88 = VirtualAlloc((LPVOID)0x0,0x10000,0x1000,4);
  }
  return DAT_0042bb88 != (LPVOID)0x0;
}


