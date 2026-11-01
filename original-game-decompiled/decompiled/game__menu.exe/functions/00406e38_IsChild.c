
/* ==== USER32.DLL::IsChild @ 00406e38 ==== 
 * signature: BOOL __stdcall IsChild(HWND hWndParent, HWND hWnd)
 * body: 00406e38-00406e3d
 * thunk to: USER32.DLL::IsChild
 */

BOOL __stdcall IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsChild(hWndParent,hWnd);
  return BVar1;
}


