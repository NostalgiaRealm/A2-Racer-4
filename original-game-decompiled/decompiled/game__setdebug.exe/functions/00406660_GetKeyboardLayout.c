
/* ==== USER32.DLL::GetKeyboardLayout @ 00406660 ==== 
 * signature: HKL __stdcall GetKeyboardLayout(DWORD idThread)
 * body: 00406660-00406665
 * thunk to: USER32.DLL::GetKeyboardLayout
 */

HKL __stdcall GetKeyboardLayout(DWORD idThread)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetKeyboardLayout(idThread);
  return pHVar1;
}


