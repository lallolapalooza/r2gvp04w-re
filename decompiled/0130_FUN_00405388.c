/*
 * Function: FUN_00405388
 * Address: 00405388
 * Size: 114 bytes
 * Calling Convention: __register
 */

int FUN_00405388(int *param_1,byte *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar7 = 0;
  bVar6 = *param_2;
  piVar4 = param_1;
  do {
    iVar1 = *piVar4;
    puVar2 = *(undefined2 **)(iVar1 + -0x44);
    if ((puVar2 != (undefined2 *)0x0) &&
       (iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),*puVar2), iVar7 != 0)) {
      piVar4 = (int *)(puVar2 + 3);
      do {
        iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),*(byte *)((int)piVar4 + 6));
        if (*(byte *)((int)piVar4 + 6) == bVar6) {
          while ((bVar6 = *(byte *)(iVar5 + 6 + (int)piVar4), (bVar6 & 0x80) == 0 &&
                 (bVar6 = bVar6 ^ param_2[iVar5], (bVar6 & 0x80) == 0))) {
            if ((bVar6 & 0xdf) != 0) goto LAB_004053bd;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_004053f1;
          }
          bVar3 = FUN_00405218((byte *)((int)piVar4 + 6),param_2);
          iVar5 = 0;
          if (bVar3) {
LAB_004053f1:
            return *piVar4 + (int)param_1;
          }
LAB_004053bd:
          bVar6 = *param_2;
          iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)((int)piVar4 + 6));
        }
        piVar4 = (int *)(iVar5 + 7 + (int)piVar4);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    piVar4 = *(int **)(iVar1 + -0x30);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
  } while( true );
}


