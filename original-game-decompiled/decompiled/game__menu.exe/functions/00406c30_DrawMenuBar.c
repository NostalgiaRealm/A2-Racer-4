
/* ==== USER32.DLL::DrawMenuBar @ 00406c30 ==== 
 * signature: BOOL __stdcall DrawMenuBar(HWND hWnd)
 * body: 00406c30-00406c35
 * thunk to: USER32.DLL::DrawMenuBar
 */

BOOL __stdcall DrawMenuBar(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawMenuBar(hWnd);
  return BVar1;
}


