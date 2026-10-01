/*
 * Function: FUN_00420638
 * Address: 00420638
 * Size: 247 bytes
 * Calling Convention: __register
 */

void FUN_00420638(char param_1,longlong *param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_20;
  int local_1c;
  longlong *local_18;
  int local_14;
  undefined4 local_10;
  longlong *local_c;
  longlong *local_8;
  
  local_c = (longlong *)0x0;
  local_14 = 0;
  local_18 = (longlong *)0x0;
  local_1c = 0;
  local_20 = 0;
  puStack_30 = (undefined1 *)0x42065c;
  local_10 = param_3;
  local_8 = param_2;
  FUN_00406c0c((int)param_2);
  puStack_34 = &LAB_0042072f;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_0041b87c(local_8,&local_14);
  FUN_00406e44((int *)&local_8,local_14);
  uVar1 = FUN_004047c8(0x2000000);
  uVar4 = uVar1;
  do {
    uVar4 = uVar4 + 1;
    if (0x1ffffff < (int)uVar4) {
      uVar4 = 0;
    }
    if (uVar1 == uVar4) {
      uVar2 = FUN_0041bbc8(local_8,&local_1c);
      FUN_0042028c(CONCAT31((int3)((uint)uVar2 >> 8),0x4c),local_1c,(int *)&local_18);
      piVar3 = FUN_00418ac8((int *)PTR_PTR_00412e00,'\x01',local_18);
      FUN_004062cc((int)piVar3);
    }
    FUN_004205c0(uVar4,&local_20);
    uStack_38 = local_10;
    FUN_00407430((int *)&local_c,4);
    uVar2 = FUN_00420548(param_1,local_c);
  } while ((char)uVar2 != '\0');
  FUN_00406dfc(param_4,local_c);
  *in_FS_OFFSET = uStack_38;
  FUN_00406b88(&local_20,4);
  FUN_00406b88((int *)&local_c,2);
  return;
}


