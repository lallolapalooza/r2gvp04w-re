/*
 * Function: FUN_00408008
 * Address: 00408008
 * Size: 222 bytes
 * Calling Convention: __register
 */

void FUN_00408008(longlong *param_1,longlong *param_2,char *param_3,int param_4)

{
  byte bVar1;
  
  if (param_4 != 0) {
    switch(*param_3) {
    case '\a':
    case '\n':
    case '\v':
    case '\x0f':
    case '\x11':
    case '\x12':
      FUN_0040465c(param_2,param_1,param_4 * 4);
      break;
    case '\b':
      FUN_0040465c(param_2,param_1,param_4 * 8);
      break;
    default:
      FUN_004045f4(2);
      break;
    case '\f':
      FUN_0040465c(param_2,param_1,param_4 << 4);
      break;
    case '\r':
      bVar1 = param_3[1];
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00408008(param_1,param_2,(char *)**(undefined4 **)(param_3 + bVar1 + 10),
                     *(int *)(param_3 + bVar1 + 6));
        param_1 = (longlong *)((int)param_1 + *(int *)(param_3 + bVar1 + 2));
        param_2 = (longlong *)((int)param_2 + *(int *)(param_3 + bVar1 + 2));
      }
      break;
    case '\x0e':
    case '\x16':
      bVar1 = param_3[1];
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00407c88((int)param_1,(int)param_2,param_3);
        param_1 = (longlong *)((int)param_1 + *(int *)(param_3 + bVar1 + 2));
        param_2 = (longlong *)((int)param_2 + *(int *)(param_3 + bVar1 + 2));
      }
    }
  }
  return;
}


