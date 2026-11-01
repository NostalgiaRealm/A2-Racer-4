
/* ==== USER32.DLL::ReleaseCapture @ 00406f20 ==== 
 * signature: BOOL __stdcall ReleaseCapture(void)
 * body: 00406f20-00406f25
 * thunk to: USER32.DLL::ReleaseCapture
 */

BOOL __stdcall ReleaseCapture(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseCapture();
  return BVar1;
}


