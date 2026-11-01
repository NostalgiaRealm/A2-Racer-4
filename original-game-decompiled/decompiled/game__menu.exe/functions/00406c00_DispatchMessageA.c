
/* ==== USER32.DLL::DispatchMessageA @ 00406c00 ==== 
 * signature: LRESULT __stdcall DispatchMessageA(MSG * lpMsg)
 * body: 00406c00-00406c05
 * thunk to: USER32.DLL::DispatchMessageA
 */

LRESULT __stdcall DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}


