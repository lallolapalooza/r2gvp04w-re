/*
 * Function: FUN_00419194
 * Address: 00419194
 * Size: 94 bytes
 * Calling Convention: __register
 */

void FUN_00419194(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  undefined1 local_c;
  
  iVar1 = FUN_0040463c();
  for (iVar3 = 0; (iVar3 < 7 && (iVar1 != (&DAT_00428280)[iVar3 * 2])); iVar3 = iVar3 + 1) {
  }
  if (iVar3 < 7) {
    piVar2 = FUN_00418ac8((int *)PTR_PTR_004137b0,'\x01',(longlong *)(&DAT_00428284)[iVar3 * 2]);
  }
  else {
    local_c = 0;
    local_10 = iVar1;
    piVar2 = (int *)FUN_00418ccc((int)PTR_PTR_004137b0,'\x01',PTR_PTR_00428488,0,&local_10);
  }
  piVar2[6] = iVar1;
  return;
}


