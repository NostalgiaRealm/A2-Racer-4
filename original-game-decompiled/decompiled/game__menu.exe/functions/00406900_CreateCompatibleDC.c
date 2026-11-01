
/* ==== GDI32.DLL::CreateCompatibleDC @ 00406900 ==== 
 * signature: HDC __stdcall CreateCompatibleDC(HDC hdc)
 * body: 00406900-00406905
 * thunk to: GDI32.DLL::CreateCompatibleDC
 */

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


