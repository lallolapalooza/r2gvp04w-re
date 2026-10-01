/*
 * Function: FUN_0040abf0
 * Address: 0040abf0
 * Size: 17 bytes
 * Calling Convention: __register
 */

DWORD FUN_0040abf0(void)

{
  _SYSTEM_INFO _Stack_24;
  
  GetSystemInfo(&_Stack_24);
  return _Stack_24.dwNumberOfProcessors;
}


