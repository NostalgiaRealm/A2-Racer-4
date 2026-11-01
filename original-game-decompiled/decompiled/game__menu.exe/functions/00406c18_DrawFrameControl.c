
/* ==== USER32.DLL::DrawFrameControl @ 00406c18 ==== 
 * signature: BOOL __stdcall DrawFrameControl(HDC param_1, LPRECT param_2, UINT param_3, UINT param_4)
 * body: 00406c18-00406c1d
 * thunk to: USER32.DLL::DrawFrameControl
 */

BOOL __stdcall DrawFrameControl(HDC param_1,LPRECT param_2,UINT param_3,UINT param_4)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFrameControl(param_1,param_2,param_3,param_4);
  return BVar1;
}


