/*
 * Function: FUN_00406a94
 * Address: 00406a94
 * Size: 64 bytes
 * Calling Convention: __register
 */

undefined2 * FUN_00406a94(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  bool bVar3;
  
  if (param_1 < 1) {
    return (undefined2 *)0x0;
  }
  iVar1 = param_1 * 2;
  if ((!SCARRY4(param_1,param_1)) && (bVar3 = SCARRY4(iVar1,0xe), iVar1 = iVar1 + 0xe, !bVar3)) {
    puVar2 = (undefined2 *)FUN_004044b8(iVar1);
    *(undefined4 *)(puVar2 + 2) = 1;
    *(int *)(puVar2 + 4) = param_1;
    (puVar2 + 6)[param_1] = 0;
    puVar2[1] = 2;
    *puVar2 = (short)DAT_0042997c;
    return puVar2 + 6;
  }
  puVar2 = (undefined2 *)thunk_FUN_004045f4((byte)iVar1);
  return puVar2;
}


