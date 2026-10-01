/*
 * Function: FUN_0040a228
 * Address: 0040a228
 * Size: 156 bytes
 * Calling Convention: __register
 */

undefined4 * FUN_0040a228(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  do {
    puVar3 = *(undefined4 **)param_1;
    if (puVar3 == (undefined4 *)0x0) break;
    LOCK();
    lVar2 = *param_1;
    if (*param_1 == lVar2) {
      *param_1 = CONCAT44((int)lVar4 + 1,*puVar3);
      puVar5 = puVar3;
      iVar6 = *(int *)((int)param_1 + 4);
    }
    else {
      puVar5 = (undefined4 *)lVar2;
      iVar6 = (int)((ulonglong)lVar2 >> 0x20);
    }
    UNLOCK();
  } while ((iVar6 != *(int *)((int)param_1 + 4)) || (puVar5 != puVar3));
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + -1;
    UNLOCK();
  }
  return puVar3;
}


