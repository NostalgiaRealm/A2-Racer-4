
/* ==== USER32.DLL::ActivateKeyboardLayout @ 00406b48 ==== 
 * signature: HKL __stdcall ActivateKeyboardLayout(HKL hkl, UINT Flags)
 * body: 00406b48-00406b4d
 * thunk to: USER32.DLL::ActivateKeyboardLayout
 */

HKL __stdcall ActivateKeyboardLayout(HKL hkl,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ActivateKeyboardLayout(hkl,Flags);
  return pHVar1;
}


