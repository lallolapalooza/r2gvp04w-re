/*
 * Function: FUN_004083fc
 * Address: 004083fc
 * Size: 156 bytes
 * Calling Convention: __register
 */

undefined1 FUN_004083fc(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    while( true ) {
      if (param_1 == DAT_0042bbf4) {
        return DAT_0042bbf8;
      }
      if (*param_1 != '\r') break;
      param_1 = (char *)**(undefined4 **)(param_1 + (byte)param_1[1] + 10);
    }
    if (((*param_1 == '\x0e') && (bVar1 = param_1[1], *(int *)(param_1 + bVar1 + 6) != 0)) &&
       (iVar4 = *(int *)(param_1 + bVar1 + 6), -1 < iVar4 + -1)) {
      iVar5 = 0;
      do {
        if (*(int *)(param_1 + iVar5 * 8 + bVar1 + 10) == 0) {
          return 1;
        }
        pcVar2 = (char *)**(undefined4 **)(param_1 + iVar5 * 8 + bVar1 + 10);
        if ((*pcVar2 == '\r') &&
           (cVar3 = FUN_004083fc((char *)**(undefined4 **)(pcVar2 + (byte)pcVar2[1] + 10)),
           cVar3 != '\0')) {
          return 1;
        }
        if ((*pcVar2 == '\x0e') && (cVar3 = FUN_004083fc(pcVar2), cVar3 != '\0')) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}


