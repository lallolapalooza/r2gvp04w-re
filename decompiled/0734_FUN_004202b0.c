/*
 * Function: FUN_004202b0
 * Address: 004202b0
 * Size: 26 bytes
 * Calling Convention: __register
 */

void FUN_004202b0(void)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = -0x23;
  piVar2 = (int *)&DAT_0042ec3c;
  do {
    FUN_00406b28(piVar2);
    piVar2 = piVar2 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}


