/*
 * Function: FUN_004211a4
 * Address: 004211a4
 * Size: 211 bytes
 * Calling Convention: __register
 */

void FUN_004211a4(LPCVOID param_1)

{
  bool bVar1;
  SIZE_T SVar2;
  BOOL BVar3;
  uint uVar4;
  DWORD local_54;
  _SYSTEM_INFO local_50;
  _MEMORY_BASIC_INFORMATION local_2c;
  
  GetSystemInfo(&local_50);
  SVar2 = VirtualQuery(param_1,&local_2c,0x1c);
  while ((SVar2 != 0 && (local_2c.AllocationBase == param_1))) {
    if ((local_2c.State == 0x1000) && ((local_2c.Protect & 0x100) == 0)) {
      bVar1 = false;
      if (((((local_2c.Protect == 1) || (local_2c.Protect == 2)) || (local_2c.Protect == 0x10)) ||
          (local_2c.Protect == 0x20)) &&
         (BVar3 = VirtualProtect(local_2c.BaseAddress,local_2c.RegionSize,0x40,&local_54),
         BVar3 != 0)) {
        bVar1 = true;
      }
      for (uVar4 = 0; uVar4 < local_2c.RegionSize; uVar4 = uVar4 + local_50.dwPageSize) {
        FUN_0042119c((undefined4 *)((int)local_2c.BaseAddress + uVar4));
      }
      if (bVar1) {
        VirtualProtect(local_2c.BaseAddress,local_2c.RegionSize,local_54,&local_54);
      }
    }
    SVar2 = VirtualQuery((LPCVOID)((int)local_2c.BaseAddress + local_2c.RegionSize),&local_2c,0x1c);
  }
  return;
}


