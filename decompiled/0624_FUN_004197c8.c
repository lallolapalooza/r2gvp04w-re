/*
 * Function: FUN_004197c8
 * Address: 004197c8
 * Size: 125 bytes
 * Calling Convention: __register
 */

void FUN_004197c8(void)

{
  if (DAT_0042c71c != (int *)0x0) {
    *(undefined1 *)(DAT_0042c71c + 6) = 1;
    (**(code **)(*DAT_0042c71c + -8))();
    DAT_0042c71c = (int *)0x0;
  }
  if (DAT_0042c720 != (int *)0x0) {
    *(undefined1 *)(DAT_0042c720 + 6) = 1;
    FUN_00404df4(DAT_0042c720);
    DAT_0042c720 = (int *)0x0;
  }
  *(undefined4 *)PTR_DAT_00428458 = 0;
  *(undefined4 *)PTR_DAT_004284c8 = 0;
  *(undefined4 *)PTR_DAT_00428484 = 0;
  *(undefined4 *)PTR_DAT_004284bc = 0;
  *(undefined4 *)PTR_DAT_004284cc = 0;
  *(undefined4 *)PTR_DAT_00428574 = 0;
  return;
}


