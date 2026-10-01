/*
 * Function: FUN_00408234
 * Address: 00408234
 * Size: 249 bytes
 * Calling Convention: __register
 */

void FUN_00408234(int param_1,char *param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  char *local_c;
  
  puStack_24 = &stack0xfffffffc;
  for (local_c = param_2; *local_c == '\r';
      local_c = (char *)**(undefined4 **)(local_c + (byte)local_c[1] + 10)) {
    param_3 = param_3 * *(int *)(local_c + (byte)local_c[1] + 6);
  }
  bVar1 = local_c[1];
  if (((*local_c == '\x16') &&
      (pcVar3 = local_c + *(int *)(local_c + bVar1 + 6) * 8 + bVar1 + 10, *pcVar3 != '\0')) &&
     (*(int *)(pcVar3 + 1) != 0)) {
    pcVar2 = *(code **)(pcVar3 + 1);
    puStack_28 = &LAB_004082db;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      (*pcVar2)(param_1);
      param_1 = param_1 + *(int *)(local_c + bVar1 + 2);
    }
    *in_FS_OFFSET = uStack_2c;
  }
  else if ((*local_c == '\x0e') || (*local_c == '\x16')) {
    puStack_28 = &LAB_00408352;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_00408140(param_1,local_c);
      param_1 = param_1 + *(int *)(local_c + bVar1 + 2);
    }
    *in_FS_OFFSET = uStack_2c;
  }
  return;
}


