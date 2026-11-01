
/* ==== USER32.DLL::WindowFromPoint @ 00407068 ==== 
 * signature: HWND __stdcall WindowFromPoint(POINT Point)
 * body: 00407068-0040706d
 * thunk to: USER32.DLL::WindowFromPoint
 */

HWND __stdcall WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}


