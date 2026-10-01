/*
 * Function: FUN_00419d6c
 * Address: 00419d6c
 * Size: 106 bytes
 * Calling Convention: __register
 */

undefined4 FUN_00419d6c(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 2;
  if (param_2 < 1) {
    bVar2 = false;
  }
  else {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    bVar2 = param_2 <= iVar3;
  }
  if (!bVar2) {
    FUN_00406a58(L"Assertion failure",
                 L"C:\\Users\\k2kwm\\Desktop\\Inno\\issrc-is-5_5_9\\Projects\\System.SysUtils.pas",
                 0x5f65);
  }
  uVar1 = *(ushort *)(param_1 + -2 + param_2 * 2);
  if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
    iVar3 = FUN_004071e4(param_1);
    uVar4 = FUN_00419d3c((ushort *)(iVar3 + param_2 * 2 + -2));
  }
  return uVar4;
}


