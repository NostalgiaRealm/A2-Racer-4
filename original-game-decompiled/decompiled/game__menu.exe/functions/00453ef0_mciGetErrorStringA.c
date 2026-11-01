
/* ==== WINMM.DLL::mciGetErrorStringA @ 00453ef0 ==== 
 * signature: BOOL __stdcall mciGetErrorStringA(MCIERROR mcierr, LPSTR pszText, UINT cchText)
 * body: 00453ef0-00453ef5
 * thunk to: WINMM.DLL::mciGetErrorStringA
 */

BOOL __stdcall mciGetErrorStringA(MCIERROR mcierr,LPSTR pszText,UINT cchText)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00453ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = mciGetErrorStringA(mcierr,pszText,cchText);
  return BVar1;
}


