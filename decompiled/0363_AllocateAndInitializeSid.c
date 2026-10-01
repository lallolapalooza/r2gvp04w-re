/*
 * Function: AllocateAndInitializeSid
 * Address: 0040ba38
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall
AllocateAndInitializeSid
          (PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,BYTE nSubAuthorityCount,
          DWORD nSubAuthority0,DWORD nSubAuthority1,DWORD nSubAuthority2,DWORD nSubAuthority3,
          DWORD nSubAuthority4,DWORD nSubAuthority5,DWORD nSubAuthority6,DWORD nSubAuthority7,
          PSID *pSid)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AllocateAndInitializeSid
                    (pIdentifierAuthority,nSubAuthorityCount,nSubAuthority0,nSubAuthority1,
                     nSubAuthority2,nSubAuthority3,nSubAuthority4,nSubAuthority5,nSubAuthority6,
                     nSubAuthority7,pSid);
  return BVar1;
}


