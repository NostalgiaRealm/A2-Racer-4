
/* ==== USER32.DLL::EndPaint @ 004065b0 ==== 
 * signature: BOOL __stdcall EndPaint(HWND hWnd, PAINTSTRUCT * lpPaint)
 * body: 004065b0-004065b5
 * thunk to: USER32.DLL::EndPaint
 */

BOOL __stdcall EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}


