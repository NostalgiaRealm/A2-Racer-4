
/* ==== GDI32.DLL::CreateFontIndirectA @ 004062f0 ==== 
 * signature: HFONT __stdcall CreateFontIndirectA(LOGFONTA * lplf)
 * body: 004062f0-004062f5
 * thunk to: GDI32.DLL::CreateFontIndirectA
 */

HFONT __stdcall CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectA(lplf);
  return pHVar1;
}


