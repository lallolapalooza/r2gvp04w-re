/*
 * Function: FUN_00420484
 * Address: 00420484
 * Size: 59 bytes
 * Calling Convention: __register
 */

bool FUN_00420484(char param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  
  *param_2 = 0;
  if (param_1 == '\0') {
    return true;
  }
  if (DAT_0042efc0 == '\0') {
    SetLastError(1);
    cVar1 = '\0';
  }
  else {
    iVar2 = (*DAT_0042efb8)();
    cVar1 = '\x01' - (iVar2 == 0);
    if (cVar1 != '\0') {
      *param_2 = 1;
    }
  }
  return (bool)cVar1;
}


