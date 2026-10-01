/*
 * Function: FUN_00407294
 * Address: 00407294
 * Size: 30 bytes
 * Calling Convention: __register
 */

void FUN_00407294(int *param_1,LPCSTR param_2)

{
  if (param_2 != (LPCSTR)0x0) {
    FUN_00406cd4(param_1,param_2,*(int *)(param_2 + -4),(uint)*(ushort *)(param_2 + -0xc));
    return;
  }
  FUN_00406d68(param_1,(LPCSTR)0x0,0);
  return;
}


