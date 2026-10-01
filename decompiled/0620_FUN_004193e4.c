/*
 * Function: FUN_004193e4
 * Address: 004193e4
 * Size: 35 bytes
 * Calling Convention: __register
 */

undefined4 FUN_004193e4(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00419364(param_1);
  return *(undefined4 *)
          (PTR_PTR_004284a4 + (uint)(byte)PTR_DAT_004285e0[(uVar1 & 0xff) * 8 + -0x18] * 4);
}


