/*
 * Function: FUN_0041b1ec
 * Address: 0041b1ec
 * Size: 95 bytes
 * Calling Convention: __register
 */

uint FUN_0041b1ec(undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  byte abStack_1010 [4096];
  undefined2 local_10;
  undefined2 uStack_e;
  
  _local_10 = CONCAT22((short)((uint)param_3 >> 0x10),param_1);
  uVar5 = 0;
  uVar3 = 0;
  puVar4 = &DAT_004282d4;
  do {
    bVar1 = (byte)uVar3;
    bVar6 = bVar1 < 0xf;
    if (bVar1 < 0x10) {
      bVar6 = (*(byte *)((int)&local_10 + ((int)(short)(uVar3 & 0x7f) >> 3)) >> (uVar3 & 7) & 1) !=
              0;
    }
    if (bVar6) {
      if (bVar1 == 0) {
        uVar2 = FUN_0041b480(6,0);
        if ((char)uVar2 == '\0') goto LAB_0041b23b;
      }
      if (bVar1 == 8) {
        uVar2 = FUN_0041b480(6,1);
        if ((char)uVar2 == '\0') goto LAB_0041b23b;
      }
      uVar5 = uVar5 | *puVar4;
    }
LAB_0041b23b:
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
    if ((char)uVar3 == '\n') {
      return uVar5;
    }
  } while( true );
}


