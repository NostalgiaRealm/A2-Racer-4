
/* ==== USER32.DLL::ActivateKeyboardLayout @ 004064b8 ==== 
 * signature: HKL __stdcall ActivateKeyboardLayout(HKL hkl, UINT Flags)
 * body: 004064b8-004064bd
 * thunk to: USER32.DLL::ActivateKeyboardLayout
 */

HKL __stdcall ActivateKeyboardLayout(HKL hkl,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ActivateKeyboardLayout(hkl,Flags);
  return pHVar1;
}


