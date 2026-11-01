
/* ==== USER32.DLL::ReleaseCapture @ 00406838 ==== 
 * signature: BOOL __stdcall ReleaseCapture(void)
 * body: 00406838-0040683d
 * thunk to: USER32.DLL::ReleaseCapture
 */

BOOL __stdcall ReleaseCapture(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseCapture();
  return BVar1;
}


