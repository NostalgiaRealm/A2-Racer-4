
/* ==== GDI32.DLL::CreateFontIndirectA @ 00406928 ==== 
 * signature: HFONT __stdcall CreateFontIndirectA(LOGFONTA * lplf)
 * body: 00406928-0040692d
 * thunk to: GDI32.DLL::CreateFontIndirectA
 */

HFONT __stdcall CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectA(lplf);
  return pHVar1;
}


