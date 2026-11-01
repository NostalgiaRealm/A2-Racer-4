
/* ==== USER32.DLL::BeginPaint @ 004064d0 ==== 
 * signature: HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
 * body: 004064d0-004064d5
 * thunk to: USER32.DLL::BeginPaint
 */

HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}


