
/* ==== USER32.DLL::LoadBitmapA @ 00406e80 ==== 
 * signature: HBITMAP __stdcall LoadBitmapA(HINSTANCE hInstance, LPCSTR lpBitmapName)
 * body: 00406e80-00406e85
 * thunk to: USER32.DLL::LoadBitmapA
 */

HBITMAP __stdcall LoadBitmapA(HINSTANCE hInstance,LPCSTR lpBitmapName)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadBitmapA(hInstance,lpBitmapName);
  return pHVar1;
}


