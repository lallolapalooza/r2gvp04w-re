/*
 * Function: FUN_00420f88
 * Address: 00420f88
 * Size: 43 bytes
 * Calling Convention: __register
 */

void FUN_00420f88(void)

{
  BOOL BVar1;
  MSG MStack_20;
  
  while( true ) {
    BVar1 = PeekMessageW(&MStack_20,(HWND)0x0,0,0,1);
    if (BVar1 == 0) break;
    TranslateMessage(&MStack_20);
    DispatchMessageW(&MStack_20);
  }
  return;
}


