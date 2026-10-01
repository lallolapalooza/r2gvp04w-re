/*
 * Function: FUN_00419ac4
 * Address: 00419ac4
 * Size: 80 bytes
 * Calling Convention: __register
 */

/* WARNING: Removing unreachable block (ram,0x00419b04) */

bool FUN_00419ac4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = NetWkstaGetInfo();
  if (iVar1 == 0) {
    *param_1 = uRam0000000c;
    *param_2 = uRam00000010;
  }
  else {
    *param_1 = 0;
    *param_2 = 0;
  }
  return iVar1 == 0;
}


