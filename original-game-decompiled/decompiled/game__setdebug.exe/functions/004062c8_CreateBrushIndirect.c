
/* ==== GDI32.DLL::CreateBrushIndirect @ 004062c8 ==== 
 * signature: HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH * plbrush)
 * body: 004062c8-004062cd
 * thunk to: GDI32.DLL::CreateBrushIndirect
 */

HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH *plbrush)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBrushIndirect(plbrush);
  return pHVar1;
}


