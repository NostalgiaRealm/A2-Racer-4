
/* ==== USER32.DLL::RegisterClassA @ 00406820 ==== 
 * signature: ATOM __stdcall RegisterClassA(WNDCLASSA * lpWndClass)
 * body: 00406820-00406825
 * thunk to: USER32.DLL::RegisterClassA
 */

ATOM __stdcall RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}


