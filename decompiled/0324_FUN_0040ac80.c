/*
 * Function: FUN_0040ac80
 * Address: 0040ac80
 * Size: 66 bytes
 * Calling Convention: __register
 */

void FUN_0040ac80(undefined4 *param_1,char param_2,undefined4 *param_3)

{
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  if (param_2 != '\0') {
    *param_3 = CONCAT22(CONCAT11((char)*(undefined2 *)param_3,
                                 (char)((ushort)*(undefined2 *)param_3 >> 8)),
                        CONCAT11((char)((uint)*param_3 >> 0x10),(char)((uint)*param_3 >> 0x18)));
    *(ushort *)(param_3 + 1) =
         CONCAT11((char)*(undefined2 *)(param_3 + 1),
                  (char)((ushort)*(undefined2 *)(param_3 + 1) >> 8));
    *(ushort *)((int)param_3 + 6) =
         CONCAT11((char)*(undefined2 *)((int)param_3 + 6),
                  (char)((ushort)*(undefined2 *)((int)param_3 + 6) >> 8));
  }
  return;
}


