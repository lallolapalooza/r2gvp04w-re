/*
 * Function: FUN_00408140
 * Address: 00408140
 * Size: 176 bytes
 * Calling Convention: __register
 */

void FUN_00408140(int param_1,char *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint local_10;
  
  puStack_20 = &stack0xfffffffc;
  bVar1 = param_2[1];
  if (((*param_2 == '\x16') &&
      (pcVar2 = param_2 + *(int *)(param_2 + bVar1 + 6) * 8 + bVar1 + 10, *pcVar2 != '\0')) &&
     (*(int *)(pcVar2 + 1) != 0)) {
    puStack_20 = (undefined1 *)0x408183;
    (**(code **)(pcVar2 + 1))(param_1);
    return;
  }
  if (*(int *)(param_2 + bVar1 + 6) != 0) {
    local_10 = 0;
    puStack_24 = &LAB_004081e9;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    while ((local_10 < *(uint *)(param_2 + bVar1 + 6) &&
           (*(undefined4 **)(param_2 + local_10 * 8 + bVar1 + 10) != (undefined4 *)0x0))) {
      FUN_00408234(*(int *)(param_2 + local_10 * 8 + bVar1 + 0xe) + param_1,
                   (char *)**(undefined4 **)(param_2 + local_10 * 8 + bVar1 + 10),1);
      local_10 = local_10 + 1;
    }
    *in_FS_OFFSET = uStack_28;
  }
  return;
}


