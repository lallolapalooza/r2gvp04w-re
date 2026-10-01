/*
 * Function: EqualSid
 * Address: 0040ba60
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall EqualSid(PSID pSid1,PSID pSid2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ba60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EqualSid(pSid1,pSid2);
  return BVar1;
}


