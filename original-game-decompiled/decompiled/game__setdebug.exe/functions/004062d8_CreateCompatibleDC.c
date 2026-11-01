
/* ==== GDI32.DLL::CreateCompatibleDC @ 004062d8 ==== 
 * signature: HDC __stdcall CreateCompatibleDC(HDC hdc)
 * body: 004062d8-004062dd
 * thunk to: GDI32.DLL::CreateCompatibleDC
 */

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


