/*
 * Function: FUN_00407850
 * Address: 00407850
 * Size: 142 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00407850(char *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  for (; *param_1 == '\r'; param_1 = (char *)**(undefined4 **)(param_1 + (byte)param_1[1] + 10)) {
  }
  if (*param_1 == '\x16') {
    pcVar3 = param_1 + *(int *)(param_1 + (byte)param_1[1] + 6) * 8 + (byte)param_1[1] + 10;
    if ((*pcVar3 == '\0') || (*(int *)(pcVar3 + 1) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)pcVar3 >> 8),1);
    }
  }
  if (((char)uVar2 == '\0') &&
     (((*param_1 == '\x0e' || (*param_1 == '\x16')) &&
      (bVar1 = param_1[1], *(int *)(param_1 + bVar1 + 6) != 0)))) {
    iVar5 = *(int *)(param_1 + bVar1 + 6);
    iVar4 = 0;
    do {
      if ((*(undefined4 **)(param_1 + iVar4 * 8 + bVar1 + 10) != (undefined4 *)0x0) &&
         (uVar2 = FUN_00407850((char *)**(undefined4 **)(param_1 + iVar4 * 8 + bVar1 + 10)),
         (char)uVar2 != '\0')) {
        return uVar2;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar2;
}


