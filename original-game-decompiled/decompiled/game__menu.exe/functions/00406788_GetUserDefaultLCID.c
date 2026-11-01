
/* ==== KERNEL32.DLL::GetUserDefaultLCID @ 00406788 ==== 
 * signature: LCID __stdcall GetUserDefaultLCID(void)
 * body: 00406788-0040678d
 * thunk to: KERNEL32.DLL::GetUserDefaultLCID
 */

LCID __stdcall GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}


