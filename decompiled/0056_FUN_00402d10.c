/*
 * Function: FUN_00402d10
 * Address: 00402d10
 * Size: 73 bytes
 * Calling Convention: __register
 */

void FUN_00402d10(void)

{
  char cVar1;
  
  if (DAT_00429055 != '\0') {
    while( true ) {
      do {
        LOCK();
        cVar1 = DAT_0042bb74;
        if (DAT_0042bb74 == '\0') {
          DAT_0042bb74 = '\x01';
          cVar1 = '\0';
        }
        UNLOCK();
        if (cVar1 == '\0') {
          return;
        }
      } while (DAT_00429985 != '\0');
      Sleep(0);
      LOCK();
      cVar1 = DAT_0042bb74;
      if (DAT_0042bb74 == '\0') {
        DAT_0042bb74 = '\x01';
        cVar1 = '\0';
      }
      UNLOCK();
      if (cVar1 == '\0') break;
      Sleep(10);
    }
  }
  return;
}


