/*
 * Function: FUN_0041bb28
 * Address: 0041bb28
 * Size: 72 bytes
 * Calling Convention: __register
 */

int FUN_0041bb28(short *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (param_1 != (short *)0x0) {
    iVar2 = *(int *)(param_1 + -2);
  }
  iVar3 = FUN_0041ba50(param_1,'\x01');
  iVar1 = 0;
  iVar3 = iVar3 + 1;
  while (iVar3 <= iVar2) {
    if (param_1[iVar3 + -1] == 0x2e) {
      iVar1 = iVar3;
      iVar3 = iVar3 + 1;
    }
    else {
      iVar4 = FUN_0041b8c8();
      iVar3 = iVar3 + iVar4;
    }
  }
  return iVar1;
}


