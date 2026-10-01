/*
 * Function: FUN_0040ab3c
 * Address: 0040ab3c
 * Size: 106 bytes
 * Calling Convention: __register
 */

void FUN_0040ab3c(undefined4 param_1,int *param_2)

{
  HINSTANCE hInstance;
  undefined4 *in_stack_00000ff4;
  UINT uID;
  WCHAR *lpBuffer;
  int iVar1;
  WCHAR aWStack_1008 [2046];
  int local_c;
  
  iVar1 = 2;
  do {
    local_c = iVar1;
    lpBuffer = aWStack_1008;
    iVar1 = local_c + -1;
  } while (local_c + -1 != 0);
  if (in_stack_00000ff4 != (undefined4 *)0x0) {
    if ((uint)in_stack_00000ff4[1] < 0x10000) {
      iVar1 = 0x1000;
      uID = in_stack_00000ff4[1];
      hInstance = (HINSTANCE)FUN_00408990(*(int *)*in_stack_00000ff4);
      iVar1 = LoadStringW(hInstance,uID,lpBuffer,iVar1);
      FUN_00406c80(param_2,(longlong *)aWStack_1008,iVar1);
    }
    else {
      FUN_0040723c(param_2,(longlong *)in_stack_00000ff4[1]);
    }
  }
  return;
}


