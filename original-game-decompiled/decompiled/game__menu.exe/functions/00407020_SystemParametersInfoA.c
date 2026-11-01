
/* ==== USER32.DLL::SystemParametersInfoA @ 00407020 ==== 
 * signature: BOOL __stdcall SystemParametersInfoA(UINT uiAction, UINT uiParam, PVOID pvParam, UINT fWinIni)
 * body: 00407020-00407025
 * thunk to: USER32.DLL::SystemParametersInfoA
 */

BOOL __stdcall SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return BVar1;
}


