/*
 * Function: FUN_0040465c
 * Address: 0040465c
 * Size: 215 bytes
 * Calling Convention: __register
 */

void FUN_0040465c(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  
  if (param_1 != param_2) {
    if (0x20 < param_3) {
      if (0x20 < (int)param_3) {
        if ((param_2 < param_1) ||
           (plVar12 = (longlong *)((int)param_2 - param_3),
           param_2 = (longlong *)(param_3 + (int)plVar12), param_1 <= plVar12)) {
          lVar2 = *param_1;
          plVar12 = (longlong *)((param_3 - 8) + (int)param_1);
          plVar1 = (longlong *)((int)param_2 + (param_3 - 8));
          lVar3 = *plVar12;
          iVar9 = (((uint)param_2 & 0xfffffff8) + 8) - (int)plVar1;
          do {
            *(longlong *)(iVar9 + (int)plVar1) =
                 (longlong)ROUND((float10)*(longlong *)(iVar9 + (int)plVar12));
            bVar8 = iVar9 < -8;
            iVar9 = iVar9 + 8;
          } while (bVar8);
          *plVar1 = (longlong)ROUND((float10)lVar3);
          *param_2 = (longlong)ROUND((float10)lVar2);
          return;
        }
        iVar10 = param_3 - 8;
        lVar2 = *(longlong *)(iVar10 + (int)param_1);
        lVar3 = *param_1;
        iVar9 = (iVar10 + (int)param_2 & 0xfffffff8U) - (int)param_2;
        do {
          *(longlong *)(iVar9 + (int)param_2) =
               (longlong)ROUND((float10)*(longlong *)(iVar9 + (int)param_1));
          iVar11 = iVar9 + -8;
          bVar8 = 7 < iVar9;
          iVar9 = iVar11;
        } while (iVar11 != 0 && bVar8);
        *param_2 = (longlong)ROUND((float10)lVar3);
        *(longlong *)(iVar10 + (int)param_2) = (longlong)ROUND((float10)lVar2);
      }
      return;
    }
    iVar9 = param_3 - 8;
    if (iVar9 == 0 || (int)param_3 < 8) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_3) {
      case 1:
        *(char *)param_2 = (char)*param_1;
        return;
      case 2:
        *(short *)param_2 = (short)*param_1;
        return;
      case 3:
        uVar5 = *(undefined1 *)((int)param_1 + 2);
        *(short *)param_2 = (short)*param_1;
        *(undefined1 *)((int)param_2 + 2) = uVar5;
        return;
      case 4:
        *(int *)param_2 = (int)*param_1;
        return;
      case 5:
        uVar5 = *(undefined1 *)((int)param_1 + 4);
        *(int *)param_2 = (int)*param_1;
        *(undefined1 *)((int)param_2 + 4) = uVar5;
        return;
      case 6:
        uVar6 = *(undefined2 *)((int)param_1 + 4);
        *(int *)param_2 = (int)*param_1;
        *(undefined2 *)((int)param_2 + 4) = uVar6;
        return;
      case 7:
        uVar7 = *(undefined4 *)((int)param_1 + 3);
        *(int *)param_2 = (int)*param_1;
        *(undefined4 *)((int)param_2 + 3) = uVar7;
        return;
      case 8:
        *param_2 = (longlong)ROUND((float10)*param_1);
        return;
      }
    }
    else {
      lVar2 = *(longlong *)(iVar9 + (int)param_1);
      lVar3 = *param_1;
      if (8 < iVar9) {
        lVar4 = param_1[1];
        if (0x10 < iVar9) {
          param_2[2] = (longlong)ROUND((float10)param_1[2]);
        }
        param_2[1] = (longlong)ROUND((float10)lVar4);
      }
      *param_2 = (longlong)ROUND((float10)lVar3);
      *(longlong *)(iVar9 + (int)param_2) = (longlong)ROUND((float10)lVar2);
    }
  }
  return;
}


