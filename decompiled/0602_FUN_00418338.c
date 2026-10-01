/*
 * Function: FUN_00418338
 * Address: 00418338
 * Size: 67 bytes
 * Calling Convention: __register
 */

void FUN_00418338(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  short *psVar2;
  
  bVar1 = false;
  psVar2 = (short *)FUN_004071e4(*param_1);
  if (psVar2 != (short *)0x0) {
    for (; *psVar2 != 0; psVar2 = psVar2 + 1) {
      if (*psVar2 == 0x27) {
        bVar1 = (bool)(bVar1 ^ 1);
      }
      if ((*psVar2 == *(short *)(param_4 + 0xc)) && (!bVar1)) {
        *psVar2 = 0x2f;
      }
    }
  }
  return;
}


