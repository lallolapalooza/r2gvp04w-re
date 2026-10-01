/*
 * Function: FUN_0040a02c
 * Address: 0040a02c
 * Size: 111 bytes
 * Calling Convention: __register
 */

undefined4 FUN_0040a02c(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_14;
  
  local_14 = 0;
  if (*(int *)(param_1 + 4) < 1) {
    *param_3 = 0;
  }
  else {
    uVar3 = 0;
    iVar4 = *(int *)(param_1 + 4) + -1;
    if (-1 < iVar4) {
      do {
        uVar2 = iVar4 + uVar3 >> 1;
        iVar1 = **(int **)(*(int *)(param_1 + 8) + uVar2 * 4);
        if (iVar1 - param_2 < 0) {
          uVar3 = uVar2 + 1;
        }
        else {
          iVar4 = uVar2 - 1;
          if (iVar1 == param_2) {
            local_14 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar2 * 4);
            uVar3 = uVar2;
          }
        }
      } while ((int)uVar3 <= iVar4);
    }
    *param_3 = uVar3;
  }
  return local_14;
}


