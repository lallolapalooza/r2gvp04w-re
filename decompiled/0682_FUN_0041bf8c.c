/*
 * Function: FUN_0041bf8c
 * Address: 0041bf8c
 * Size: 183 bytes
 * Calling Convention: __register
 */

void FUN_0041bf8c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  longlong *local_c;
  longlong *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (longlong *)0x0;
  local_c = (longlong *)0x0;
  puStack_18 = &LAB_0041c043;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0041bcac(0x41c05c,param_1);
  if (*param_1 != 0) {
    uVar1 = FUN_0041bc88((longlong *)*param_1);
    if ((char)uVar1 != '\0') goto LAB_0041c009;
  }
  FUN_0041bcac(0x41c070,param_1);
  if (*param_1 != 0) {
    uVar1 = FUN_0041bc88((longlong *)*param_1);
    if ((char)uVar1 != '\0') goto LAB_0041c009;
  }
  iVar2 = FUN_00419bc4();
  if (iVar2 == 2) {
    FUN_0041bcac(0x41c088,param_1);
    if (*param_1 != 0) {
      uVar1 = FUN_0041bc88((longlong *)*param_1);
      if ((char)uVar1 != '\0') goto LAB_0041c009;
    }
  }
  FUN_0041bf34(param_1);
LAB_0041c009:
  FUN_0041bac0(*param_1,(int *)&local_c);
  FUN_0041b87c(local_c,(int *)&local_8);
  FUN_00406dfc(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041c04a;
  puStack_18 = (undefined1 *)0x41c042;
  FUN_00406b88((int *)&local_c,2);
  return;
}


