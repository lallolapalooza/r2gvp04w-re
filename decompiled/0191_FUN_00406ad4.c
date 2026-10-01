/*
 * Function: FUN_00406ad4
 * Address: 00406ad4
 * Size: 74 bytes
 * Calling Convention: __register
 */

undefined2 * FUN_00406ad4(int param_1,int param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  
  if (param_1 < 1) {
    return (undefined2 *)0x0;
  }
  if (!SCARRY4(param_1,0xe)) {
    uVar1 = param_1 + 0xeU & 0xfffffffe;
    puVar2 = (undefined2 *)FUN_004044b8(uVar1);
    *(undefined2 *)((uVar1 - 2) + (int)puVar2) = 0;
    *(int *)(puVar2 + 4) = param_1;
    *(undefined4 *)(puVar2 + 2) = 1;
    if (param_2 == 0) {
      param_2 = DAT_00429978;
    }
    *puVar2 = (short)param_2;
    puVar2[1] = 1;
    return puVar2 + 6;
  }
  puVar2 = (undefined2 *)thunk_FUN_004045f4((byte)(param_1 + 0xeU));
  return puVar2;
}


