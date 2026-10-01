/*
 * Function: FUN_0040723c
 * Address: 0040723c
 * Size: 56 bytes
 * Calling Convention: __register
 */

void FUN_0040723c(int *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  plVar2 = param_2;
  if (param_2 != (longlong *)0x0) {
    for (; (short)*plVar2 != 0; plVar2 = plVar2 + 1) {
      if (*(short *)((int)plVar2 + 2) == 0) {
LAB_00407265:
        plVar2 = (longlong *)((int)plVar2 + 2);
        break;
      }
      if (*(short *)((int)plVar2 + 4) == 0) {
LAB_00407262:
        plVar2 = (longlong *)((int)plVar2 + 2);
        goto LAB_00407265;
      }
      if (*(short *)((int)plVar2 + 6) == 0) {
        plVar2 = (longlong *)((int)plVar2 + 2);
        goto LAB_00407262;
      }
    }
    uVar1 = (uint)((int)plVar2 - (int)param_2) >> 1;
  }
  FUN_00406c80(param_1,param_2,uVar1);
  return;
}


