
/* ==== GDI32.DLL::CreateCompatibleBitmap @ 004062d0 ==== 
 * signature: HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc, int cx, int cy)
 * body: 004062d0-004062d5
 * thunk to: GDI32.DLL::CreateCompatibleBitmap
 */

HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}


