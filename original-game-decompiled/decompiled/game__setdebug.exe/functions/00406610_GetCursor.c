
/* ==== USER32.DLL::GetCursor @ 00406610 ==== 
 * signature: HCURSOR __stdcall GetCursor(void)
 * body: 00406610-00406615
 * thunk to: USER32.DLL::GetCursor
 */

HCURSOR __stdcall GetCursor(void)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCursor();
  return pHVar1;
}


