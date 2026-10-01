/*
 * Function: FUN_00420380
 * Address: 00420380
 * Size: 184 bytes
 * Calling Convention: __register
 */

void FUN_00420380(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  bVar7 = param_2 == 0x50;
  if (0x50 < param_2) {
    FUN_00406fb4(param_1,(int *)PTR_s_Inno_Setup_Messages__5_5_3___u__0042858c,0x40);
    if (bVar7) goto LAB_004203a7;
  }
  FUN_004202cc();
LAB_004203a7:
  if (((param_1[0x11] != ~param_1[0x12]) || (param_2 != param_1[0x11])) || (param_1[0x10] != 0xdd))
  {
    FUN_004202cc();
  }
  pbVar4 = (byte *)(param_1 + 0x14);
  pbVar5 = (byte *)((int)param_1 + param_1[0x11]);
  iVar1 = (int)pbVar5 - (int)pbVar4 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)(((int)pbVar5 - (int)pbVar4 & 1U) != 0);
  }
  uVar2 = FUN_0041db58(pbVar4,iVar1 * 2);
  if ((uVar2 != param_1[0x13]) || (*(short *)(pbVar5 + -2) != 0)) {
    FUN_004202cc();
  }
  cVar3 = -0x23;
  piVar6 = (int *)&DAT_0042ec3c;
  do {
    if (pbVar5 <= pbVar4) {
      FUN_004202cc();
    }
    iVar1 = FUN_00406f00((int)pbVar4);
    FUN_00406c80(piVar6,(longlong *)pbVar4,iVar1);
    pbVar4 = pbVar4 + (iVar1 + 1) * 2;
    piVar6 = piVar6 + 1;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  return;
}


