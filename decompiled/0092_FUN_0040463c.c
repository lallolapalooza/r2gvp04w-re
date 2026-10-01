/*
 * Function: FUN_0040463c
 * Address: 0040463c
 * Size: 29 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0040463c(void)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  pvVar2 = FUN_0040ae54();
  uVar1 = *(undefined4 *)((int)pvVar2 + 4);
  pvVar2 = FUN_0040ae54();
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  return uVar1;
}


