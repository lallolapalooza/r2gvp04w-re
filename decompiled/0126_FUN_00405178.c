/*
 * Function: FUN_00405178
 * Address: 00405178
 * Size: 48 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00405178(int param_1,ushort param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  bool bVar5;
  
  do {
    puVar1 = *(ushort **)(param_1 + -0x3c);
    if (puVar1 != (ushort *)0x0) {
      bVar5 = puVar1 + 1 == (ushort *)0x0;
      uVar2 = (uint)*puVar1;
      puVar3 = puVar1 + 1;
      do {
        puVar4 = puVar3;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        puVar4 = puVar3 + 1;
        bVar5 = param_2 == *puVar3;
        puVar3 = puVar4;
      } while (!bVar5);
      if (bVar5) {
        return *(undefined4 *)(puVar4 + ((uint)*puVar1 * 2 - uVar2) + -2);
      }
    }
    if (*(int **)(param_1 + -0x30) == (int *)0x0) {
      return 0;
    }
    param_1 = **(int **)(param_1 + -0x30);
  } while( true );
}


