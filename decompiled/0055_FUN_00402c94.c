/*
 * Function: FUN_00402c94
 * Address: 00402c94
 * Size: 122 bytes
 * Calling Convention: __register
 */

int FUN_00402c94(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_00402c28();
  puVar3 = VirtualAlloc((LPVOID)0x0,0x13fff0,0x1000,4);
  puVar1 = DAT_00429ad8;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_00429ad4;
    puVar2 = puVar3;
    puVar3[1] = DAT_00429ad8;
    DAT_00429ad8 = puVar2;
    *puVar1 = puVar3;
    puVar3[0x4fffb] = 2;
    DAT_00429aec = 0x13ffe0 - param_1;
    DAT_00429ae8 = (int)puVar3 + (0x13fff0 - param_1);
    iVar4 = DAT_00429ae8;
    *(uint *)(DAT_00429ae8 + -4) = param_1 | 2;
    return iVar4;
  }
  DAT_00429aec = 0;
  return 0;
}


