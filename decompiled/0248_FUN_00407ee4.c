/*
 * Function: FUN_00407ee4
 * Address: 00407ee4
 * Size: 289 bytes
 * Calling Convention: __register
 */

void FUN_00407ee4(BSTR *param_1,int *param_2,char *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = *param_3;
  if (cVar2 == '\n') {
    do {
      FUN_00406e98((int *)param_1,(longlong *)*param_2);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\v') {
    do {
      FUN_00406e70(param_1,(OLECHAR *)*param_2);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x12') {
    do {
      FUN_00406dfc((int *)param_1,(longlong *)*param_2);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\f') {
    do {
      FUN_00407a98((char)param_1,param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\r') {
    piVar1 = (int *)(param_3 + (byte)param_3[1] + 2);
    do {
      FUN_00407ee4(param_1,param_2,*(char **)piVar1[2],piVar1[1]);
      param_1 = (BSTR *)((int)param_1 + *piVar1);
      param_2 = (int *)((int)param_2 + *piVar1);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else {
    if (cVar2 != '\x0e') {
      if (cVar2 == '\x0f') {
        do {
          FUN_00409588((int *)param_1,(int *)*param_2);
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
      if (cVar2 == '\x11') {
        do {
          FUN_0040890c((int *)param_1,*param_2,(int)param_3);
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
      if (cVar2 != '\x16') {
        FUN_004045f4(2);
        return;
      }
    }
    do {
      FUN_00407abc((int)param_1,(int)param_2,param_3);
      param_1 = (BSTR *)((int)param_1 + *(int *)(param_3 + (byte)param_3[1] + 2));
      param_2 = (int *)((int)param_2 + *(int *)(param_3 + (byte)param_3[1] + 2));
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


