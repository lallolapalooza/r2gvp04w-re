/*
 * Function: FUN_00406eec
 * Address: 00406eec
 * Size: 18 bytes
 * Calling Convention: __register
 */

int FUN_00406eec(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    for (; *(char *)(param_1 + iVar1) != '\0'; iVar1 = iVar1 + 1) {
    }
  }
  return iVar1;
}


