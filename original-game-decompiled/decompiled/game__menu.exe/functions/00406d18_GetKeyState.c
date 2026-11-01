
/* ==== USER32.DLL::GetKeyState @ 00406d18 ==== 
 * signature: SHORT __stdcall GetKeyState(int nVirtKey)
 * body: 00406d18-00406d1d
 * thunk to: USER32.DLL::GetKeyState
 */

SHORT __stdcall GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}


