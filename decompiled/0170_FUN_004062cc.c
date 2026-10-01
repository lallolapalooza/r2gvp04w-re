/*
 * Function: FUN_004062cc
 * Address: 004062cc
 * Size: 108 bytes
 * Calling Convention: __register
 */

void FUN_004062cc(int param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_4c;
  int iStack_44;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  int local_14;
  
  if (param_1 == 0) {
    param_1 = FUN_00406a3c(0xd8);
  }
  local_1c = local_18;
  uStack_20 = 7;
  uStack_24 = 1;
  uStack_28 = 0xeedfade;
  puVar2 = local_18;
  local_14 = param_1;
  if (DAT_00429024 != (code *)0x0) {
    uStack_4c = 7;
    pcStack_58 = DAT_00429024;
    uStack_5c = 0x406318;
    puStack_54 = local_18;
    iStack_44 = param_1;
    puStack_30 = &stack0x00000004;
    iVar3 = FUN_00404590();
    pcVar1 = pcStack_58;
    puStack_54 = (undefined1 *)0x0;
    if (iVar3 != 0) {
      puStack_54 = *(undefined1 **)(iVar3 + 0xc);
    }
    pcStack_58 = (code *)0x1;
    uStack_5c = 0xeedfade;
    (*pcVar1)(&uStack_5c);
    puVar2 = local_1c;
  }
  local_1c = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00406332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0042901c)();
  return;
}


