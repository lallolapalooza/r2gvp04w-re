/*
 * Function: __dbk_fcall_wrapper
 * Address: 0040b294
 * Size: 167 bytes
 * Calling Convention: __register
 */

void __dbk_fcall_wrapper(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
                    /* 0xb294  2  __dbk_fcall_wrapper */
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_0040b335;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0040aea4();
  *in_FS_OFFSET = uStack_20;
  return;
}


