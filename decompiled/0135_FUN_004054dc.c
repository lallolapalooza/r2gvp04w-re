/*
 * Function: FUN_004054dc
 * Address: 004054dc
 * Size: 119 bytes
 * Calling Convention: __register
 */

void FUN_004054dc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0xb) && (1 < DAT_0042905c)) {
    FUN_00405588(4 << ((byte)iVar1 & 0x1f));
  }
  else {
    if (9 < iVar1) {
      iVar1 = iVar1 + -10;
    }
    if (iVar1 % 0x14 == 0x13) {
      Sleep(1);
    }
    else if (iVar1 % 5 == 4) {
      Sleep(0);
    }
    else {
      SwitchToThread();
    }
  }
  *param_1 = *param_1 + 1;
  if (*param_1 < 0) {
    *param_1 = 10;
  }
  return;
}


