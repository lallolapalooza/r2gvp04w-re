/*
 * Function: FUN_0040399c
 * Address: 0040399c
 * Size: 80 bytes
 * Calling Convention: __register
 */

int FUN_0040399c(uint param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  char acStack_13 [3];
  
  uVar2 = 0;
  do {
    uVar1 = param_1 / 10;
    uVar2 = uVar2 + 1;
    (&stack0xfffffff0)[-uVar2] = (char)param_1 + (char)uVar1 * -10 + '0';
    param_1 = uVar1;
  } while (uVar1 != 0);
  FUN_0040465c((longlong *)(&stack0xfffffff0 + -uVar2),param_2,uVar2);
  return uVar2 + (int)param_2;
}


