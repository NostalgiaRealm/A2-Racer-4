
/* ==== KERNEL32.DLL::GetUserDefaultLCID @ 10015598 ==== 
 * signature: LCID __stdcall GetUserDefaultLCID(void)
 * body: 10015598-1001559d
 * thunk to: KERNEL32.DLL::GetUserDefaultLCID
 */

LCID GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}


