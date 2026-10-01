/*
 * Function: FUN_0040a2c4
 * Address: 0040a2c4
 * Size: 67 bytes
 * Calling Convention: __register
 */

void FUN_0040a2c4(longlong *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((char)param_1[0x12a] != '\0') {
    iVar4 = 0xc5;
    puVar3 = (undefined4 *)((int)param_1 + 0x14);
    do {
      FUN_0040a09c(puVar3);
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    do {
      piVar2 = FUN_0040a228(param_1);
      bVar1 = FUN_00409dac(piVar2);
    } while (bVar1);
    if (*(undefined4 **)(param_1 + 2) != (undefined4 *)0x0) {
      FUN_00405728(*(undefined4 **)(param_1 + 2));
    }
  }
  return;
}


