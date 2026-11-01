
/* ==== USER32.DLL::LoadBitmapA @ 004067b0 ==== 
 * signature: HBITMAP __stdcall LoadBitmapA(HINSTANCE hInstance, LPCSTR lpBitmapName)
 * body: 004067b0-004067b5
 * thunk to: USER32.DLL::LoadBitmapA
 */

HBITMAP __stdcall LoadBitmapA(HINSTANCE hInstance,LPCSTR lpBitmapName)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadBitmapA(hInstance,lpBitmapName);
  return pHVar1;
}


