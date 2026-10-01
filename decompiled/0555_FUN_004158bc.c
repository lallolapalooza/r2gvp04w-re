/*
 * Function: FUN_004158bc
 * Address: 004158bc
 * Size: 272 bytes
 * Calling Convention: __register
 */

void FUN_004158bc(int param_1,int param_2,undefined2 param_3,int *param_4,uint param_5,uint param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  longlong *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  puStack_20 = &LAB_004159cc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_2 < param_1) {
    puStack_1c = &stack0xfffffffc;
    FUN_004087a4((int *)&local_8,(int)PTR_DAT_004024c4,1);
    iVar1 = param_1 - param_2;
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        *(undefined2 *)((int)local_8 + iVar3 * 2) = param_3;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = param_1 - param_2;
  }
  else {
    FUN_004087a4((int *)&local_8,(int)PTR_DAT_004024c4,1);
    iVar1 = 0;
  }
  puVar2 = (undefined4 *)((int)local_8 + (param_2 + iVar1) * 2);
  for (; 1 < param_2; param_2 = param_2 + -2) {
    puVar2 = puVar2 + -1;
    *puVar2 = *(undefined4 *)(&DAT_00427d9c + (param_5 & 0xff) * 4);
    param_5 = param_5 >> 8 | param_6 << 0x18;
    param_6 = param_6 >> 8;
  }
  if (param_2 == 1) {
    *(undefined2 *)((int)local_8 + iVar1 * 2) = *(undefined2 *)(&DAT_0042819c + (param_5 & 0xf) * 2)
    ;
  }
  iVar1 = 0;
  if (local_8 != (longlong *)0x0) {
    iVar1 = *(int *)((int)local_8 + -4);
  }
  FUN_0041b314(local_8,iVar1 + -1,param_4);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004159d3;
  puStack_20 = (undefined1 *)0x4159cb;
  FUN_004088c8((int *)&local_8,(int)PTR_DAT_004024c4);
  return;
}


