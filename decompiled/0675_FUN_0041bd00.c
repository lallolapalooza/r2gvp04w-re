/*
 * Function: FUN_0041bd00
 * Address: 0041bd00
 * Size: 78 bytes
 * Calling Convention: __register
 */

void FUN_0041bd00(ushort *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  
  *param_3 = 0;
  bVar2 = false;
  for (; (uVar1 = *param_1, uVar1 != 0 && (0x20 < uVar1 || bVar2)); param_1 = param_1 + 1) {
    if (uVar1 == 0x22) {
      bVar2 = (bool)(bVar2 ^ 1);
    }
    else {
      if (param_2 != 0) {
        *(ushort *)(param_2 + *param_3 * 2) = uVar1;
      }
      *param_3 = *param_3 + 1;
    }
  }
  return;
}


