/*
 * Function: FUN_00403920
 * Address: 00403920
 * Size: 61 bytes
 * Calling Convention: __register
 */

uint FUN_00403920(uint param_1)

{
  uint uVar1;
  
  if (((DAT_00429aec != 0) && (param_1 <= DAT_00429ae8)) && (DAT_00429ae8 <= param_1 + 0x13fff0)) {
    uVar1 = DAT_00429ae8;
    if (DAT_00429aec == 0x13ffe0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return param_1 + 0x10;
}


