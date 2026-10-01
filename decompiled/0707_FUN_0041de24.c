/*
 * Function: FUN_0041de24
 * Address: 0041de24
 * Size: 133 bytes
 * Calling Convention: __register
 */

void FUN_0041de24(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uStack_c;
  
  uStack_c = param_3;
  if (*(uint *)(param_1 + 0xc) < 5) {
    piVar1 = FUN_00418ac8((int *)PTR_PTR_0041d4f8,'\x01',
                          (longlong *)L"Compressed block is corrupted");
    FUN_004062cc((int)piVar1);
  }
  FUN_0041d144(*(int **)(param_1 + 8),&uStack_c,4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
  uVar2 = *(uint *)(param_1 + 0xc);
  if (0x1000 < uVar2) {
    uVar2 = 0x1000;
  }
  FUN_0041d144(*(int **)(param_1 + 8),param_1 + 0x1c,uVar2);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - uVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_0041db58((byte *)(param_1 + 0x1c),uVar2);
  if (uVar2 != uStack_c) {
    piVar1 = FUN_00418ac8((int *)PTR_PTR_0041d4f8,'\x01',
                          (longlong *)L"Compressed block is corrupted");
    FUN_004062cc((int)piVar1);
  }
  return;
}


