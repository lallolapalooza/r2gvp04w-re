/*
 * Function: FUN_00407430
 * Address: 00407430
 * Size: 174 bytes
 * Calling Convention: __register
 */

void FUN_00407430(int *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  code *UNRECOVERED_JUMPTABLE;
  longlong *local_1c;
  
  iVar7 = 0;
  iVar1 = *(int *)(&stack0x00000000 + param_2 * 4);
  if ((iVar1 == 0) || (*param_1 != iVar1)) {
    uVar3 = 0;
    iVar5 = param_2;
  }
  else {
    uVar3 = *(uint *)(iVar1 + -4);
    iVar5 = param_2 + -1;
    iVar7 = iVar1;
  }
  do {
    iVar1 = *(int *)(&stack0x00000000 + iVar5 * 4);
    if (iVar1 != 0) {
      uVar3 = uVar3 + *(int *)(iVar1 + -4);
      if ((uVar3 & 0xc0000000) != 0) {
        thunk_FUN_004045f4((byte)uVar3);
        return;
      }
      if (iVar7 == iVar1) {
        iVar7 = 0;
      }
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar7 == 0) {
    plVar4 = (longlong *)FUN_00406a94(uVar3);
    piVar8 = (int *)0x0;
    local_1c = plVar4;
  }
  else {
    iVar1 = *(int *)(iVar7 + -4);
    FUN_004072d0(param_1,uVar3);
    param_2 = param_2 + -1;
    plVar4 = (longlong *)(iVar1 * 2 + *param_1);
    piVar8 = param_1;
    local_1c = (longlong *)*param_1;
  }
  do {
    plVar2 = *(longlong **)(&stack0x00000000 + param_2 * 4);
    plVar6 = plVar4;
    if (plVar2 != (longlong *)0x0) {
      uVar3 = *(int *)((int)plVar2 + -4) * 2;
      plVar6 = (longlong *)((int)plVar4 + uVar3);
      FUN_0040465c(plVar2,plVar4,uVar3);
    }
    param_2 = param_2 + -1;
    plVar4 = plVar6;
  } while (param_2 != 0);
  if (piVar8 == (int *)0x0) {
    if (local_1c != (longlong *)0x0) {
      *(int *)(local_1c + -1) = (int)local_1c[-1] + -1;
    }
    FUN_00406dfc(param_1,local_1c);
  }
                    /* WARNING: Could not recover jumptable at 0x004074d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}


