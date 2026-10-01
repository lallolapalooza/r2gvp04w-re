/*
 * Function: FUN_00407278
 * Address: 00407278
 * Size: 24 bytes
 * Calling Convention: __register
 */

void FUN_00407278(int *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  
  bVar3 = true;
  uVar1 = param_3;
  plVar2 = param_2;
  do {
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    bVar3 = (short)*plVar2 == 0;
    plVar2 = (longlong *)((int)plVar2 + 2);
  } while (!bVar3);
  if (bVar3) {
    uVar1 = ~uVar1;
  }
  FUN_00406c80(param_1,param_2,uVar1 + param_3);
  return;
}


