
/* ==== USER32.DLL::LoadKeyboardLayoutA @ 004067c8 ==== 
 * signature: HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID, UINT Flags)
 * body: 004067c8-004067cd
 * thunk to: USER32.DLL::LoadKeyboardLayoutA
 */

HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadKeyboardLayoutA(pwszKLID,Flags);
  return pHVar1;
}


