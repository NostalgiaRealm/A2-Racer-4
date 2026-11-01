
/* ==== USER32.DLL::SetCursor @ 00406888 ==== 
 * signature: HCURSOR __stdcall SetCursor(HCURSOR hCursor)
 * body: 00406888-0040688d
 * thunk to: USER32.DLL::SetCursor
 */

HCURSOR __stdcall SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}


