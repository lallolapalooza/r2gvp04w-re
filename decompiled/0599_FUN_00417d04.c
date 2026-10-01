/*
 * Function: FUN_00417d04
 * Address: 00417d04
 * Size: 171 bytes
 * Calling Convention: __register
 */

void FUN_00417d04(LCID param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  longlong *local_14;
  longlong *local_10;
  int local_c;
  LCID local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = (longlong *)0x0;
  local_10 = (longlong *)0x0;
  puStack_28 = &LAB_00417daf;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar3 = 1;
  piVar2 = (int *)(param_2 + 0x84);
  local_c = param_2;
  local_8 = param_1;
  do {
    iVar1 = (iVar3 + 5) % 7;
    FUN_004182fc(local_8,iVar1 + 0x31,iVar3 + -1,(int *)&local_10,6,0x428248);
    FUN_00406dfc(piVar2,local_10);
    FUN_004182fc(local_8,iVar1 + 0x2a,iVar3 + -1,(int *)&local_14,6,0x428264);
    FUN_00406dfc(piVar2 + 7,local_14);
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 8);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00417db6;
  puStack_28 = (undefined1 *)0x417dae;
  FUN_00406b88((int *)&local_14,2);
  return;
}


