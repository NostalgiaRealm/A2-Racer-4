
/* ==== USER32.DLL::AdjustWindowRectEx @ 004064c0 ==== 
 * signature: BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect, DWORD dwStyle, BOOL bMenu, DWORD dwExStyle)
 * body: 004064c0-004064c5
 * thunk to: USER32.DLL::AdjustWindowRectEx
 */

BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,BOOL bMenu,DWORD dwExStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustWindowRectEx(lpRect,dwStyle,bMenu,dwExStyle);
  return BVar1;
}


