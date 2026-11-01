
/* ==== USER32.DLL::DispatchMessageA @ 00406560 ==== 
 * signature: LRESULT __stdcall DispatchMessageA(MSG * lpMsg)
 * body: 00406560-00406565
 * thunk to: USER32.DLL::DispatchMessageA
 */

LRESULT __stdcall DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}


