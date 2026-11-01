
/* ==== USER32.DLL::GetKeyState @ 00406658 ==== 
 * signature: SHORT __stdcall GetKeyState(int nVirtKey)
 * body: 00406658-0040665d
 * thunk to: USER32.DLL::GetKeyState
 */

SHORT __stdcall GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}


