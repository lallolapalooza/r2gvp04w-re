/*
 * Function: GetLogicalProcessorInformation
 * Address: 004028d0
 * Size: 6 bytes
 * Calling Convention: __stdcall
 */

BOOL __stdcall
GetLogicalProcessorInformation(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer,PDWORD ReturnedLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004028d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetLogicalProcessorInformation(Buffer,ReturnedLength);
  return BVar1;
}


