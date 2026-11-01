
/* ==== USER32.DLL::GetDCEx @ 00406628 ==== 
 * signature: HDC __stdcall GetDCEx(HWND hWnd, HRGN hrgnClip, DWORD flags)
 * body: 00406628-0040662d
 * thunk to: USER32.DLL::GetDCEx
 */

HDC __stdcall GetDCEx(HWND hWnd,HRGN hrgnClip,DWORD flags)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDCEx(hWnd,hrgnClip,flags);
  return pHVar1;
}


