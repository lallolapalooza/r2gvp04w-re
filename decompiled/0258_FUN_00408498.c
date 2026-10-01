/*
 * Function: FUN_00408498
 * Address: 00408498
 * Size: 67 bytes
 * Calling Convention: __register
 */

undefined1 FUN_00408498(char *param_1)

{
  undefined1 uVar1;
  LPVOID pvVar2;
  
  pvVar2 = FUN_0040ae54();
  if (param_1 == *(char **)((int)pvVar2 + 8)) {
    pvVar2 = FUN_0040ae54();
    uVar1 = *(undefined1 *)((int)pvVar2 + 0xc);
  }
  else {
    uVar1 = FUN_004083fc(param_1);
    pvVar2 = FUN_0040ae54();
    *(char **)((int)pvVar2 + 8) = param_1;
    pvVar2 = FUN_0040ae54();
    *(undefined1 *)((int)pvVar2 + 0xc) = uVar1;
  }
  return uVar1;
}


