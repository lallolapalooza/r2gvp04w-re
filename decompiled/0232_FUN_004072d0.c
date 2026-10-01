/*
 * Function: FUN_004072d0
 * Address: 004072d0
 * Size: 126 bytes
 * Calling Convention: __register
 */

/* WARNING: Removing unreachable block (ram,0x00407310) */

void FUN_004072d0(int *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iStack_10;
  
  plVar3 = (longlong *)0x0;
  if (0 < param_2) {
    iStack_10 = *param_1;
    if ((iStack_10 != 0) && (*(int *)(iStack_10 + -8) == 1)) {
      iStack_10 = iStack_10 + -0xc;
      if ((!SCARRY4(param_2,param_2)) && (!SCARRY4(param_2 * 2,0xe))) {
        FUN_004044ec(&iStack_10,param_2 * 2 + 0xe);
        *param_1 = iStack_10 + 0xc;
        *(int *)(iStack_10 + 8) = param_2;
        *(undefined2 *)(iStack_10 + 0xc + param_2 * 2) = 0;
        return;
      }
      thunk_FUN_004045f4((byte)iStack_10);
      return;
    }
    iStack_10 = 0x407327;
    plVar3 = (longlong *)FUN_00406a94(param_2);
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      iVar2 = *(int *)((int)plVar1 + -4);
      if (param_2 <= *(int *)((int)plVar1 + -4)) {
        iVar2 = param_2;
      }
      iStack_10 = 0x407341;
      FUN_0040465c(plVar1,plVar3,iVar2 << 1);
    }
  }
  iStack_10 = 0x407348;
  FUN_00406b4c(param_1);
  *param_1 = (int)plVar3;
  return;
}


