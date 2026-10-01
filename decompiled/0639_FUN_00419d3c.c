/*
 * Function: FUN_00419d3c
 * Address: 00419d3c
 * Size: 45 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00419d3c(ushort *param_1)

{
  if ((((0xd7ff < *param_1) && (*param_1 < 0xdc00)) && (0xdbff < param_1[1])) &&
     (param_1[1] < 0xe000)) {
    return 4;
  }
  return 2;
}


