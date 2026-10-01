/*
 * Function: FUN_00403a04
 * Address: 00403a04
 * Size: 51 bytes
 * Calling Convention: __register
 */

void FUN_00403a04(int param_1,longlong *param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    FUN_004039ec((longlong *)(*(byte **)(param_1 + -0x38) + 1),param_2,
                 (uint)**(byte **)(param_1 + -0x38));
    return;
  }
  uVar1 = FUN_00406eec((int)PTR_s_Unknown_00427058);
  FUN_004039ec((longlong *)PTR_s_Unknown_00427058,param_2,uVar1);
  return;
}


