
/* ==== USER32.DLL::AdjustWindowRectEx @ 00406b50 ==== 
 * signature: BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect, DWORD dwStyle, BOOL bMenu, DWORD dwExStyle)
 * body: 00406b50-00406b55
 * thunk to: USER32.DLL::AdjustWindowRectEx
 */

BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,BOOL bMenu,DWORD dwExStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustWindowRectEx(lpRect,dwStyle,bMenu,dwExStyle);
  return BVar1;
}


