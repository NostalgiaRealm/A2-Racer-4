
/* ==== USER32.DLL::GetKeyboardLayout @ 00406d20 ==== 
 * signature: HKL __stdcall GetKeyboardLayout(DWORD idThread)
 * body: 00406d20-00406d25
 * thunk to: USER32.DLL::GetKeyboardLayout
 */

HKL __stdcall GetKeyboardLayout(DWORD idThread)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetKeyboardLayout(idThread);
  return pHVar1;
}


