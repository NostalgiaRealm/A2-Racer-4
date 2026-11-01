
/* ==== USER32.DLL::LoadKeyboardLayoutA @ 00406e98 ==== 
 * signature: HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID, UINT Flags)
 * body: 00406e98-00406e9d
 * thunk to: USER32.DLL::LoadKeyboardLayoutA
 */

HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadKeyboardLayoutA(pwszKLID,Flags);
  return pHVar1;
}


