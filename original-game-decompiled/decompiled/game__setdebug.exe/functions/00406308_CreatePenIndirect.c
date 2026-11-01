
/* ==== GDI32.DLL::CreatePenIndirect @ 00406308 ==== 
 * signature: HPEN __stdcall CreatePenIndirect(LOGPEN * plpen)
 * body: 00406308-0040630d
 * thunk to: GDI32.DLL::CreatePenIndirect
 */

HPEN __stdcall CreatePenIndirect(LOGPEN *plpen)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePenIndirect(plpen);
  return pHVar1;
}


