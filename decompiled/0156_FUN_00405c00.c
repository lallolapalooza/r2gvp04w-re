/*
 * Function: FUN_00405c00
 * Address: 00405c00
 * Size: 155 bytes
 * Calling Convention: __register
 */

void FUN_00405c00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  uStack_14 = 0x405c23;
  FUN_00405554((int *)(param_1 + 0x18));
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    while (puVar2 = puVar1, puVar2 != *(undefined4 **)(param_1 + 0x14)) {
      if (puVar2 == param_2) {
        *puVar3 = *puVar2;
        break;
      }
      puVar3 = puVar2;
      puVar1 = (undefined4 *)*puVar2;
    }
    if ((puVar2 == *(undefined4 **)(param_1 + 0x14)) && (puVar2 == param_2)) {
      puVar1 = (undefined4 *)*puVar2;
      if (puVar2 == puVar1) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        *(undefined4 **)(param_1 + 0x14) = puVar1;
        *puVar3 = puVar1;
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  uStack_14 = 0x405c9d;
  uStack_18 = 0x405c95;
  FUN_00405580((undefined4 *)(param_1 + 0x18));
  return;
}


