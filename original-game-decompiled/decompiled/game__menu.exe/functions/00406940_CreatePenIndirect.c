
/* ==== GDI32.DLL::CreatePenIndirect @ 00406940 ==== 
 * signature: HPEN __stdcall CreatePenIndirect(LOGPEN * plpen)
 * body: 00406940-00406945
 * thunk to: GDI32.DLL::CreatePenIndirect
 */

HPEN __stdcall CreatePenIndirect(LOGPEN *plpen)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePenIndirect(plpen);
  return pHVar1;
}


