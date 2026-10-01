/* ==== EXPORT bpParserCreate ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 bpParserCreate(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_18;
  ulonglong local_10;
  
                    /* 0x3ef0  1  bpParserCreate */
  local_10 = DAT_18012b028 ^ (ulonglong)auStack_48;
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = 0xc000001;
  }
  else {
    DAT_18012d448 = param_2;
    local_18 = param_2;
    local_28 = operator_new(0x118);
    plVar2 = (longlong *)0x0;
    if (local_28 != (longlong *)0x0) {
      plVar2 = FUN_180007700(local_28,param_1,&local_18);
    }
    *param_3 = plVar2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ==== EXPORT bpParserDestroy ==== */

undefined8 bpParserDestroy(longlong *param_1)

{
                    /* 0x3f70  2  bpParserDestroy */
  if (param_1 == (longlong *)0x0) {
    return 0xc000002;
  }
  FUN_180008be0(param_1);
  thunk_FUN_18005015c(param_1);
  return 0;
}



/* ==== EXPORT bpParserDumpBuffer ==== */

undefined8
bpParserDumpBuffer(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
                    /* 0x3fb0  3  bpParserDumpBuffer */
  if (((param_4 != 0) && (param_5 != 0)) && ((int)param_2 != 8)) {
    if (param_1 == 0) {
      return 0xc000002;
    }
    FUN_18000e1f0(param_1,param_2,param_3);
    return 0;
  }
  return 0xc000001;
}



/* ==== EXPORT bpParserGetBuffer ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong bpParserGetBuffer(longlong param_1,int param_2,longlong param_3,ulonglong *param_4,
                           longlong *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
                    /* 0x4000  4  bpParserGetBuffer */
  local_38 = DAT_18012b028 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) {
    return 0xc000002;
  }
  if (param_4 != (ulonglong *)0x0) {
    DAT_18012d448 = *(ulonglong *)(param_1 + 0x110);
    switch(param_2) {
    case 0:
      if (param_5 == (longlong *)0x0) {
        *param_4 = *(ulonglong *)(param_1 + 0xd0);
        return 0;
      }
      break;
    case 1:
      if (param_5 == (longlong *)0x0) {
        *param_4 = *(ulonglong *)(param_1 + 0xe8);
        return 0;
      }
      if (((*param_5 != 0) && (bVar1 = FUN_18000fde0(param_1,param_2,(byte)*param_5), bVar1)) &&
         (param_3 != 0)) {
        uVar2 = FUN_18000edc0(param_1,param_3,*param_5,*param_4);
        return CONCAT44(extraout_var,uVar2);
      }
      break;
    case 2:
      if (param_5 == (longlong *)0x0) {
        *param_4 = *(ulonglong *)(param_1 + 0xd8);
        return 0;
      }
      if ((*param_5 != 0) && (bVar1 = FUN_18000fde0(param_1,param_2,(byte)*param_5), bVar1)) {
        uVar3 = FUN_18000efb0(param_1,*param_4,(undefined1 (*) [32])*param_5);
        return uVar3;
      }
      break;
    case 3:
      if (param_5 == (longlong *)0x0) {
LAB_1800041e2:
        *param_4 = *(ulonglong *)(param_1 + 0xf0);
        return 0;
      }
      if (((*param_5 != 0) && (bVar1 = FUN_18000fde0(param_1,param_2,(byte)*param_5), bVar1)) &&
         ((((DAT_18012d448 >> 0xc & 1) == 0 && ((DAT_18012d448 >> 0xd & 1) == 0)) ||
          ((param_3 != 0 &&
           ((((DAT_18012d448 >> 0xd & 1) == 0 || (*(longlong *)(param_3 + 0x10) != 0)) &&
            (((DAT_18012d448 >> 0xc & 1) == 0 || (*(longlong *)(param_3 + 0x48) != 0)))))))))) {
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        uVar2 = FUN_18000ead0(param_1);
        return CONCAT44(extraout_var_00,uVar2);
      }
      break;
    case 4:
      if (param_5 == (longlong *)0x0) goto LAB_1800041e2;
      if ((*param_5 != 0) && (bVar1 = FUN_18000fde0(param_1,param_2,(byte)*param_5), bVar1)) {
        FUN_18000ead0(param_1);
        return 0;
      }
      break;
    case 5:
      if (param_5 == (longlong *)0x0) {
        *param_4 = *(ulonglong *)(param_1 + 0xf8);
        return 0;
      }
      break;
    case 6:
      if (param_5 == (longlong *)0x0) {
        *param_4 = *(ulonglong *)(param_1 + 0x100);
        return 0;
      }
      break;
    case 7:
      if (param_5 != (longlong *)0x0) {
        uVar3 = FUN_18000ecd0(param_1,*param_4,(undefined1 (*) [32])*param_5);
        return uVar3;
      }
      *param_4 = *(ulonglong *)(param_1 + 0xe0);
      return 0;
    case 8:
      if (param_5 == (longlong *)0x0) {
        uVar3 = FUN_18000ea80(param_1);
        *param_4 = uVar3;
        return 0;
      }
      bVar1 = FUN_18000fde0(param_1,param_2,(byte)*param_5);
      if ((bVar1) && (*param_5 != 0)) {
        uVar3 = FUN_18000eaa0(param_1);
        return uVar3;
      }
    }
  }
  return 0xc000001;
}



/* ==== EXPORT bpParserGetInputCount ==== */

undefined8 bpParserGetInputCount(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
                    /* 0x4310  5  bpParserGetInputCount */
  if (param_1 == (longlong *)0x0) {
    return 0xc000002;
  }
  if (param_2 == (longlong *)0x0) {
    return 0xc000001;
  }
  lVar1 = FUN_18000eb30(param_1);
  *param_2 = lVar1;
  return 0;
}



/* ==== EXPORT bpParserGetInputTensorDesc ==== */

undefined8
bpParserGetInputTensorDesc(longlong *param_1,ulonglong param_2,undefined1 (*param_3) [32])

{
  undefined8 uVar1;
  
                    /* 0x4350  6  bpParserGetInputTensorDesc */
  if (param_1 == (longlong *)0x0) {
    return 0xc000002;
  }
  if (param_3 == (undefined1 (*) [32])0x0) {
    return 0xc000001;
  }
  uVar1 = FUN_18000eb80(param_1,param_2,param_3,'\0');
  return uVar1;
}



/* ==== EXPORT bpParserGetInputTensorDesc2 ==== */

undefined8
bpParserGetInputTensorDesc2(longlong *param_1,ulonglong param_2,undefined1 (*param_3) [32])

{
  undefined8 uVar1;
  
                    /* 0x4370  7  bpParserGetInputTensorDesc2 */
  if (param_1 == (longlong *)0x0) {
    return 0xc000002;
  }
  if (param_3 == (undefined1 (*) [32])0x0) {
    return 0xc000001;
  }
  uVar1 = FUN_18000eb80(param_1,param_2,param_3,'\x01');
  return uVar1;
}



/* ==== EXPORT bpParserGetOutputCount ==== */

undefined8 bpParserGetOutputCount(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
                    /* 0x4390  8  bpParserGetOutputCount */
  if (param_1 == 0) {
    return 0xc000002;
  }
  if (param_2 == (longlong *)0x0) {
    return 0xc000001;
  }
  lVar1 = FUN_18000ee10(param_1);
  *param_2 = lVar1;
  return 0;
}



/* ==== EXPORT bpParserGetOutputTensorDesc ==== */

undefined8
bpParserGetOutputTensorDesc(longlong param_1,ulonglong param_2,undefined1 (*param_3) [32])

{
  undefined8 uVar1;
  
                    /* 0x43d0  9  bpParserGetOutputTensorDesc */
  if (param_1 == 0) {
    return 0xc000002;
  }
  if (param_3 == (undefined1 (*) [32])0x0) {
    return 0xc000001;
  }
  uVar1 = FUN_18000ee60(param_1,param_2,param_3,'\0');
  return uVar1;
}



/* ==== EXPORT bpParserGetOutputTensorDesc2 ==== */

undefined8
bpParserGetOutputTensorDesc2(longlong param_1,ulonglong param_2,undefined1 (*param_3) [32])

{
  undefined8 uVar1;
  
                    /* 0x43f0  10  bpParserGetOutputTensorDesc2 */
  if (param_1 == 0) {
    return 0xc000002;
  }
  if (param_3 == (undefined1 (*) [32])0x0) {
    return 0xc000001;
  }
  uVar1 = FUN_18000ee60(param_1,param_2,param_3,'\x01');
  return uVar1;
}



/* ==== EXPORT bpParserMergeInferences ==== */

undefined8 bpParserMergeInferences(longlong param_1,ulonglong param_2,longlong *param_3)

{
  undefined8 uVar1;
  
                    /* 0x4410  11  bpParserMergeInferences */
  if (param_3 == (longlong *)0x0) {
    return 0xc000001;
  }
  uVar1 = thunk_FUN_18001dba0(param_1,param_2,param_3);
  return uVar1;
}



/* ==== EXPORT entry ==== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}



