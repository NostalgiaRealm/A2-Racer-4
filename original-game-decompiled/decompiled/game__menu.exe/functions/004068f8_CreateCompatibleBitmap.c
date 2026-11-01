
/* ==== GDI32.DLL::CreateCompatibleBitmap @ 004068f8 ==== 
 * signature: HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc, int cx, int cy)
 * body: 004068f8-004068fd
 * thunk to: GDI32.DLL::CreateCompatibleBitmap
 */

HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}


