/*
 * Function: FUN_0041f1a4
 * Address: 0041f1a4
 * Size: 78 bytes
 * Calling Convention: __register
 */

int FUN_0041f1a4(uint *param_1,int param_2,byte *param_3,uint *param_4,int *param_5,int param_6)

{
  int iVar1;
  
  if (param_2 == 0x50) {
    iVar1 = FUN_0041ea88(param_1,param_3,param_6);
    if (iVar1 == 0) {
      *param_5 = ((0x300 << ((char)*param_1 + (char)param_1[1] & 0x1fU)) + 0x736) * 2;
      *param_4 = param_1[3];
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


