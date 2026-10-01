/*
 * Function: FUN_0040720c
 * Address: 0040720c
 * Size: 44 bytes
 * Calling Convention: __register
 */

void FUN_0040720c(int *param_1,LPCSTR param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = param_2;
  if (param_2 != (LPCSTR)0x0) {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + 4) {
      if (pcVar2[1] == '\0') {
LAB_0040722d:
        pcVar2 = pcVar2 + 1;
        break;
      }
      if (pcVar2[2] == '\0') {
LAB_0040722c:
        pcVar2 = pcVar2 + 1;
        goto LAB_0040722d;
      }
      if (pcVar2[3] == '\0') {
        pcVar2 = pcVar2 + 1;
        goto LAB_0040722c;
      }
    }
    iVar1 = (int)pcVar2 - (int)param_2;
  }
  FUN_00406d68(param_1,param_2,iVar1);
  return;
}


