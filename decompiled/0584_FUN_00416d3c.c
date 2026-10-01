/*
 * Function: FUN_00416d3c
 * Address: 00416d3c
 * Size: 98 bytes
 * Calling Convention: __register
 */

uint FUN_00416d3c(uint param_1,uint param_2,int param_3)

{
  char cVar3;
  uint uVar1;
  uint uVar2;
  char cVar5;
  undefined4 unaff_EBX;
  char *pcVar4;
  undefined1 *unaff_EDI;
  char *pcVar6;
  char *pcVar7;
  char local_14 [4];
  char *pcStack_10;
  
  *unaff_EDI = (char)param_1;
  cVar5 = (char)((uint)unaff_EBX >> 8);
  pcVar4 = unaff_EDI + 1;
  if (cVar5 != '\0') {
    param_1 = param_1 & 0xffffff00;
    pcVar4 = unaff_EDI + 2;
    unaff_EDI[1] = '\0';
  }
  if ((char)unaff_EBX == '\0') {
    param_2 = 0;
LAB_00416d5a:
    cVar3 = (char)(param_1 >> 8);
    pcVar6 = pcVar4;
    if (cVar3 == '\0') goto LAB_00416d69;
  }
  else {
    if (-1 < (int)param_2) goto LAB_00416d5a;
    cVar3 = '-';
    param_2 = -param_2;
  }
  *pcVar4 = cVar3;
  pcVar6 = pcVar4 + 1;
  if (cVar5 != '\0') {
    pcVar6 = pcVar4 + 2;
    pcVar4[1] = '\0';
  }
LAB_00416d69:
  pcVar4 = local_14;
  uVar1 = param_2;
  pcStack_10 = pcVar4;
  do {
    do {
      uVar2 = uVar1 / DAT_004281dc;
      *pcVar4 = (char)(uVar1 % DAT_004281dc) + '0';
      pcVar4 = pcVar4 + 1;
      param_3 = param_3 + -1;
      uVar1 = uVar2;
    } while (uVar2 != 0);
  } while (0 < param_3);
  do {
    pcVar4 = pcVar4 + -1;
    *pcVar6 = *pcVar4;
    pcVar7 = pcVar6 + 1;
    if (cVar5 != '\0') {
      pcVar7 = pcVar6 + 2;
      pcVar6[1] = '\0';
    }
    pcVar6 = pcVar7;
  } while (pcVar4 != pcStack_10);
  return param_2;
}


