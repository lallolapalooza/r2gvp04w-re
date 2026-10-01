/*
 * Function: FUN_0041ba50
 * Address: 0041ba50
 * Size: 109 bytes
 * Calling Convention: __register
 */

int FUN_0041ba50(short *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_0041b968(param_1,'\x01');
  iVar2 = 0;
  if (param_1 != (short *)0x0) {
    iVar2 = *(int *)(param_1 + -2);
  }
  iVar5 = iVar1 + 1;
  iVar4 = iVar1;
  while (iVar5 <= iVar2) {
    uVar3 = FUN_0041b8d0(param_1[iVar5 + -1]);
    if ((char)uVar3 == '\0') {
      iVar4 = FUN_0041b8c8();
      iVar5 = iVar5 + iVar4;
      iVar4 = iVar5 + -1;
    }
    else {
      iVar1 = iVar4;
      if (param_2 != '\0') {
        iVar1 = iVar5;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return iVar1;
}


