/*
 * Function: FUN_004048f8
 * Address: 004048f8
 * Size: 150 bytes
 * Calling Convention: __register
 */

void FUN_004048f8(double *param_1,int param_2,undefined1 param_3)

{
  double dVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = CONCAT11(param_3,param_3);
  if (0x1f < param_2) {
    *(undefined2 *)param_1 = uVar3;
    *(undefined2 *)((int)param_1 + 2) = uVar3;
    *(undefined2 *)((int)param_1 + 4) = uVar3;
    *(undefined2 *)((int)param_1 + 6) = uVar3;
    dVar1 = *param_1;
    *(double *)(param_2 + -0x10 + (int)param_1) = dVar1;
    *(double *)(param_2 + -8 + (int)param_1) = dVar1;
    iVar4 = ((uint)param_1 & 7) - 8;
    iVar5 = param_2 + -0x10 + iVar4;
    iVar4 = iVar5 - iVar4;
    iVar5 = -iVar5;
    do {
      *(double *)((int)param_1 + iVar5 + iVar4) = dVar1;
      *(double *)((int)param_1 + iVar5 + 8 + iVar4) = dVar1;
      bVar2 = iVar5 < -0x10;
      iVar5 = iVar5 + 0x10;
    } while (bVar2);
    ffree((float10)dVar1);
    return;
  }
  if (0 < param_2) {
    *(undefined1 *)(param_2 + -1 + (int)param_1) = param_3;
    switch(param_2) {
    case 1:
      break;
    case 0x1e:
    case 0x1f:
      *(undefined2 *)((int)param_1 + 0x1c) = uVar3;
    case 0x1c:
    case 0x1d:
      *(undefined2 *)((int)param_1 + 0x1a) = uVar3;
    case 0x1a:
    case 0x1b:
      *(undefined2 *)(param_1 + 3) = uVar3;
    case 0x18:
    case 0x19:
      *(undefined2 *)((int)param_1 + 0x16) = uVar3;
    case 0x16:
    case 0x17:
      *(undefined2 *)((int)param_1 + 0x14) = uVar3;
    case 0x14:
    case 0x15:
      *(undefined2 *)((int)param_1 + 0x12) = uVar3;
    case 0x12:
    case 0x13:
      *(undefined2 *)(param_1 + 2) = uVar3;
    case 0x10:
    case 0x11:
      *(undefined2 *)((int)param_1 + 0xe) = uVar3;
    case 0xe:
    case 0xf:
      *(undefined2 *)((int)param_1 + 0xc) = uVar3;
    case 0xc:
    case 0xd:
      *(undefined2 *)((int)param_1 + 10) = uVar3;
    case 10:
    case 0xb:
      *(undefined2 *)(param_1 + 1) = uVar3;
    case 8:
    case 9:
      *(undefined2 *)((int)param_1 + 6) = uVar3;
    case 6:
    case 7:
      *(undefined2 *)((int)param_1 + 4) = uVar3;
    case 4:
    case 5:
      *(undefined2 *)((int)param_1 + 2) = uVar3;
    default:
      *(undefined2 *)param_1 = uVar3;
      return;
    }
  }
  return;
}


