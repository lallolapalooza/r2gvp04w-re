/*
 * Function: FUN_0040484c
 * Address: 0040484c
 * Size: 69 bytes
 * Calling Convention: __register
 */

int FUN_0040484c(undefined *param_1,undefined *param_2)

{
  ushort uVar1;
  int iVar2;
  
  if ((ushort)(*(short *)(param_1 + 4) + 0x284fU) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (ushort)(*(short *)(param_1 + 4) + 0x284fU) - 1;
    uVar1 = (ushort)iVar2;
    if (uVar1 < 2) {
      iVar2 = (*(code *)param_2)(param_1,param_2,CONCAT22((short)((uint)iVar2 >> 0x10),uVar1 - 2));
    }
    else if ((param_1 == &DAT_0042933c) || (param_1 == &DAT_00429618)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0x67;
    }
  }
  if (iVar2 != 0) {
    FUN_0040462c(iVar2);
  }
  return iVar2;
}


