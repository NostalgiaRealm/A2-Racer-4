
/* ==== USER32.DLL::DestroyCursor @ 00406be0 ==== 
 * signature: BOOL __stdcall DestroyCursor(HCURSOR hCursor)
 * body: 00406be0-00406be5
 * thunk to: USER32.DLL::DestroyCursor
 */

BOOL __stdcall DestroyCursor(HCURSOR hCursor)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyCursor(hCursor);
  return BVar1;
}


