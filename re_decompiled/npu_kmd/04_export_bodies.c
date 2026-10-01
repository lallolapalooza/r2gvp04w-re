/* ===== Function 1110: entry @ 14007a000 size=1119 conv=__fastcall ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int entry(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_768 [32];
  uint local_748 [2];
  code *local_740;
  code *local_738;
  code *local_730;
  code *local_728;
  code *local_720;
  code *local_718;
  code *local_710;
  code *local_708;
  code *local_700;
  code *local_6f8;
  code *local_6f0;
  code *local_6e0;
  code *local_6d8;
  code *local_6c0;
  code *local_6b8;
  code *local_6b0;
  code *local_6a8;
  code *local_6a0;
  code *local_698;
  code *local_678;
  code *local_670;
  code *local_668;
  code *local_648;
  code *local_640;
  code *local_638;
  code *local_630;
  code *local_5b8;
  code *local_5b0;
  code *local_5a8;
  code *local_578;
  code *local_570;
  code *local_510;
  code *local_508;
  code *local_500;
  code *local_4f8;
  code *local_4c8;
  code *local_4b0;
  code *local_490;
  code *local_488;
  code *local_478;
  code *local_470;
  code *local_468;
  code *local_448;
  code *local_440;
  code *local_418;
  code *local_3f0;
  code *local_3d8;
  code *local_3d0;
  code *local_3c8;
  code *local_3c0;
  code *local_3b8;
  undefined8 local_3b0;
  code *local_3a8;
  undefined8 local_340;
  code *local_328;
  code *local_320;
  code *local_318;
  code *local_310;
  code *local_308;
  code *local_300;
  code *local_2f8;
  code *local_2d0;
  code *local_2c8;
  undefined8 local_2c0;
  undefined4 local_148 [3];
  uint local_13c;
  ulonglong local_28;
  
  local_28 = DAT_140072310 ^ (ulonglong)auStack_768;
  FUN_1400458c0((longlong *)local_748,0,(undefined1 *)0x5f8);
  FUN_14007b000();
  FUN_1400398f0(0);
  DAT_1400717a0 = 1;
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1400717a0 = 0;
    FUN_140039b50();
    iVar2 = -0x3ffffff3;
  }
  else {
    FUN_1400043c0();
    local_748[0] = 0x10004;
    local_6d8 = thunk_FUN_140004a40;
    local_740 = FUN_14007a480;
    local_738 = FUN_14007a500;
    local_730 = FUN_14007a5e0;
    local_728 = FUN_14007a650;
    local_718 = FUN_140002ff0;
    local_710 = FUN_140003080;
    local_638 = FUN_1400030f0;
    local_6f0 = FUN_140003170;
    local_648 = FUN_140003220;
    local_640 = FUN_140003290;
    local_630 = FUN_140003300;
    local_510 = FUN_140003390;
    local_4c8 = FUN_140003430;
    local_6b0 = FUN_14002fbb0;
    local_6a8 = FUN_14002fe10;
    local_6a0 = FUN_14002ff60;
    local_5b0 = FUN_14002ffc0;
    local_5a8 = FUN_1400301a0;
    local_468 = FUN_140038f30;
    local_3f0 = FUN_140030230;
    local_698 = FUN_140030260;
    local_6c0 = FUN_1400034b0;
    local_490 = FUN_140003550;
    local_578 = FUN_1400035f0;
    local_570 = FUN_1400036e0;
    local_6b8 = FUN_140003780;
    local_5b8 = FUN_140003820;
    local_4b0 = FUN_140003890;
    local_470 = FUN_140003920;
    local_668 = FUN_1400039d0;
    local_670 = FUN_140003a70;
    local_448 = FUN_140003b20;
    local_440 = FUN_140003bd0;
    local_500 = FUN_140003d00;
    local_508 = FUN_140003c70;
    local_4f8 = FUN_140003da0;
    local_478 = FUN_140003f40;
    local_148[0] = 0x11c;
    iVar2 = RtlGetVersion(local_148);
    if ((-1 < iVar2) && (21999 < local_13c)) {
      local_678 = FUN_140003e90;
    }
    local_6e0 = FUN_14000e770;
    local_418 = FUN_14000e7b0;
    local_708 = FUN_14000e780;
    local_700 = FUN_14000e790;
    local_6f8 = FUN_14000e7a0;
    local_2f8 = FUN_14000e7e0;
    local_488 = FUN_14000e7d0;
    local_720 = FUN_14000e7c0;
    cVar1 = FUN_1400297b0();
    if (cVar1 != '\0') {
      local_2c0 = 0;
      local_3c8 = FUN_140004040;
      local_3c0 = thunk_FUN_14001dc90;
      local_3b8 = FUN_140004110;
      local_320 = FUN_140004150;
      local_328 = FUN_140004190;
      local_310 = FUN_1400041d0;
      local_308 = FUN_140004210;
      local_300 = FUN_140004250;
      local_3a8 = FUN_140004090;
      local_2d0 = FUN_1400040d0;
      local_2c8 = FUN_140004290;
      local_3d8 = FUN_140004020;
      local_3d0 = FUN_140004030;
      local_318 = FUN_1400042a0;
      local_3b0 = 0;
      local_340 = 0;
    }
    FUN_140002fa0();
    iVar2 = FUN_140043e98(param_1,param_2,local_748);
    if (iVar2 != 0) {
      DAT_1400717a0 = 0;
      FUN_140039b50();
      FUN_1400043d0((longlong *)&DAT_140071020);
    }
  }
  return iVar2;
}
