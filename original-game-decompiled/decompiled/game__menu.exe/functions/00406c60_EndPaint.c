
/* ==== USER32.DLL::EndPaint @ 00406c60 ==== 
 * signature: BOOL __stdcall EndPaint(HWND hWnd, PAINTSTRUCT * lpPaint)
 * body: 00406c60-00406c65
 * thunk to: USER32.DLL::EndPaint
 */

BOOL __stdcall EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}


