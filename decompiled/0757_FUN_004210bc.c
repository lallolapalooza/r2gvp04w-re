/*
 * Function: FUN_004210bc
 * Address: 004210bc
 * Size: 67 bytes
 * Calling Convention: __register
 */

void FUN_004210bc(void)

{
  int *piVar1;
  
  if (*(int *)(PTR_DAT_00428580 + 0x278) != 0) {
    piVar1 = FUN_00418ac8((int *)PTR_PTR_00412e00,'\x01',*(longlong **)(PTR_DAT_00428580 + 0x278));
    FUN_004062cc((int)piVar1);
    return;
  }
  piVar1 = FUN_00418ac8((int *)PTR_PTR_00412e00,'\x01',
                        (longlong *)
                        L"The setup files are corrupted. Please obtain a new copy of the program.");
  FUN_004062cc((int)piVar1);
  return;
}


