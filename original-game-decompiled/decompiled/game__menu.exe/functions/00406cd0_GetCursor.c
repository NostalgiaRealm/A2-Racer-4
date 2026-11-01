
/* ==== USER32.DLL::GetCursor @ 00406cd0 ==== 
 * signature: HCURSOR __stdcall GetCursor(void)
 * body: 00406cd0-00406cd5
 * thunk to: USER32.DLL::GetCursor
 */

HCURSOR __stdcall GetCursor(void)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCursor();
  return pHVar1;
}


