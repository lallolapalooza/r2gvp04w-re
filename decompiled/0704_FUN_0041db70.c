/*
 * Function: FUN_0041db70
 * Address: 0041db70
 * Size: 188 bytes
 * Calling Convention: __register
 */

void FUN_0041db70(int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (4 < param_2) {
    iVar1 = 0;
    if (0 < param_2 + -4) {
      do {
        if ((*(char *)(param_1 + iVar1) == -0x18) || (*(char *)(param_1 + iVar1) == -0x17)) {
          iVar2 = iVar1 + 1;
          if ((*(char *)(param_1 + 3 + iVar2) == '\0') || (*(char *)(param_1 + 3 + iVar2) == -1)) {
            uVar3 = param_4 + iVar2 + 4U & 0xffffff;
            uVar4 = (uint)CONCAT12(*(undefined1 *)(param_1 + 2 + iVar2),
                                   CONCAT11(*(undefined1 *)(param_1 + 1 + iVar2),
                                            *(undefined1 *)(param_1 + iVar2)));
            if (param_3 == '\0') {
              uVar4 = uVar4 - uVar3;
            }
            if ((uVar4 & 0x800000) != 0) {
              *(byte *)(param_1 + 3 + iVar2) = ~*(byte *)(param_1 + 3 + iVar2);
            }
            if (param_3 != '\0') {
              uVar4 = uVar4 + uVar3;
            }
            *(char *)(param_1 + iVar2) = (char)uVar4;
            *(char *)(param_1 + 1 + iVar2) = (char)(uVar4 >> 8);
            *(char *)(param_1 + 2 + iVar2) = (char)(uVar4 >> 0x10);
          }
          iVar1 = iVar1 + 5;
        }
        else {
          iVar1 = iVar1 + 1;
        }
      } while (iVar1 < param_2 + -4);
    }
  }
  return;
}


