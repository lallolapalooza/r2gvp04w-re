/*
 * Function: FUN_0040b90c
 * Address: 0040b90c
 * Size: 20 bytes
 * Calling Convention: __register
 */

char * FUN_0040b90c(void)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_00000004;
  
  pcVar2 = in_stack_00000004;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return pcVar2 + (-1 - (int)in_stack_00000004);
}


