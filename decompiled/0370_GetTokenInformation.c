/*
 * Function: GetTokenInformation
 * Address: 0040ba90
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall
GetTokenInformation(HANDLE TokenHandle,TOKEN_INFORMATION_CLASS TokenInformationClass,
                   LPVOID TokenInformation,DWORD TokenInformationLength,PDWORD ReturnLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTokenInformation(TokenHandle,TokenInformationClass,TokenInformation,
                              TokenInformationLength,ReturnLength);
  return BVar1;
}


