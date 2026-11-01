
/* ==== USER32.DLL::SetCursor @ 00406f78 ==== 
 * signature: HCURSOR __stdcall SetCursor(HCURSOR hCursor)
 * body: 00406f78-00406f7d
 * thunk to: USER32.DLL::SetCursor
 */

HCURSOR __stdcall SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}


