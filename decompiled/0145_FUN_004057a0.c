/*
 * Function: FUN_004057a0
 * Address: 004057a0
 * Size: 121 bytes
 * Calling Convention: __register
 */

int * FUN_004057a0(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x4057b4;
  local_8 = param_1;
  FUN_00405554((int *)(param_1 + 0x18));
  puStack_14 = &LAB_00405812;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_c = *(int **)(local_8 + 0x14);
  if ((local_c != (int *)0x0) && ((int *)*local_c != local_c)) {
    local_c = (int *)**(undefined4 **)(local_8 + 0x14);
    **(undefined4 **)(local_8 + 0x14) = *local_c;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x405819;
    puStack_14 = (undefined1 *)0x405811;
    piVar1 = (int *)FUN_00405580((undefined4 *)(local_8 + 0x18));
    return piVar1;
  }
  *(undefined4 *)(local_8 + 0x14) = 0;
  puStack_10 = &stack0xfffffffc;
  FUN_004063c0();
  return local_c;
}


