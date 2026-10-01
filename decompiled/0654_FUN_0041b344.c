/*
 * Function: FUN_0041b344
 * Address: 0041b344
 * Size: 98 bytes
 * Calling Convention: __register
 */

int FUN_0041b344(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  do {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return -1;
      }
      iVar2 = 0;
      if (param_2 != 0) {
        iVar2 = *(int *)(param_2 + -4);
      }
    } while (iVar2 + -1 < 0);
    iVar3 = 0;
    do {
      if (*(short *)(param_2 + iVar3 * 2) == *(short *)(*param_1 + iVar1 * 2)) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  } while( true );
}


