/*
 * Function: FUN_00409088
 * Address: 00409088
 * Size: 91 bytes
 * Calling Convention: __register
 */

void FUN_00409088(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if (DAT_004279f8 != (longlong *)0x0) {
    FUN_00403334((undefined4 *)DAT_004279f8);
  }
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (iVar2 < 1) {
    DAT_004279f8 = (longlong *)0x0;
  }
  else {
    uVar1 = (iVar2 + 1) * 2;
    DAT_004279f8 = (longlong *)FUN_00402fb0(uVar1);
    plVar3 = (longlong *)FUN_004071e4(param_1);
    FUN_0040465c(plVar3,DAT_004279f8,uVar1);
  }
  return;
}


