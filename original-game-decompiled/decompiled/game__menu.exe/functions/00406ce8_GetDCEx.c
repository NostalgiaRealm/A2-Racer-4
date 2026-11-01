
/* ==== USER32.DLL::GetDCEx @ 00406ce8 ==== 
 * signature: HDC __stdcall GetDCEx(HWND hWnd, HRGN hrgnClip, DWORD flags)
 * body: 00406ce8-00406ced
 * thunk to: USER32.DLL::GetDCEx
 */

HDC __stdcall GetDCEx(HWND hWnd,HRGN hrgnClip,DWORD flags)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDCEx(hWnd,hrgnClip,flags);
  return pHVar1;
}


