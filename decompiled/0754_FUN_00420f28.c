/*
 * Function: FUN_00420f28
 * Address: 00420f28
 * Size: 94 bytes
 * Calling Convention: __register
 */

LRESULT FUN_00420f28(void)

{
  LRESULT LVar1;
  HWND in_stack_00000004;
  UINT in_stack_00000008;
  WPARAM in_stack_0000000c;
  LPARAM in_stack_00000010;
  
  LVar1 = 0;
  if (in_stack_00000008 != 0x11) {
    if (in_stack_00000008 == 0x496) {
      if (in_stack_0000000c == 10000) {
        DAT_00428420 = 1;
      }
      else if (in_stack_0000000c == 0x2711) {
        DAT_00428414 = in_stack_00000010;
      }
    }
    else {
      LVar1 = CallWindowProcW(DAT_0042f0f0,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                              in_stack_00000010);
    }
  }
  return LVar1;
}


