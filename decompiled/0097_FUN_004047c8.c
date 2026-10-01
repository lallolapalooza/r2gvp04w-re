/*
 * Function: FUN_004047c8
 * Address: 004047c8
 * Size: 13 bytes
 * Calling Convention: __register
 */

undefined4 FUN_004047c8(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_FUN_00427028)();
  return (int)((ulonglong)uVar1 * (ulonglong)param_1 >> 0x20);
}


