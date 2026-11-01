
/* ==== GDI32.DLL::CreateBrushIndirect @ 004068f0 ==== 
 * signature: HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH * plbrush)
 * body: 004068f0-004068f5
 * thunk to: GDI32.DLL::CreateBrushIndirect
 */

HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH *plbrush)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBrushIndirect(plbrush);
  return pHVar1;
}


